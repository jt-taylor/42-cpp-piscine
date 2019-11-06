#include <string>
#include <iostream>
#include <sstream>
#include <climits> // for char / int min max
#include <cfloat> // for flt / dbl min max
#include <cctype> // for isdigit

// i found this really usefull , explains the reasons for using each type
// of casting available in c++
// https://stackoverflow.com/questions/332030/when-should-static-cast-dynamic-cast-const-cast-and-reinterpret-cast-be-used
int		main(int ac, char **argv)
{
	if(ac != 2)
	{
		std::cout << "Please enter a string to convert" << std::endl;
		return(0) ;
	}
	std::string		str = argv[1];
//str to lower ----------------------------------------------------------------
	for (size_t tmp = 0; tmp < str.length(); tmp++)
		str.at(tmp) = std::tolower(str.at(tmp));
// which conversion ------------------------------------------------------------
	bool test_nan = (str.compare(0, str.length(), "nan") == 0 ||
		str.compare(0, str.length(), "nanf") == 0);
	bool test_inf  = (str.compare(0, str.length(), "inf") == 0 ||
		str.compare(0, str.length(), "inff") == 0 ||
		str.compare(0, str.length(), "+inf") == 0 ||
		str.compare(0, str.length(), "+inff") == 0 ||
		str.compare(0, str.length(), "-inf") == 0 ||
		str.compare(0, str.length(), "-inff") == 0);
	bool has_decimal = (str.find(".") != std::string::npos);
	//if not hex , remove the trailing 'f' for floats
	if (!(str.compare(0, 2, "0x") == 0) && !test_inf && !test_nan)
	{
		if (str.back() == 'f')
			str.erase(str.length() -1, 1);
	}
	int	isoct = 0;
	//check for octal
	if (str.compare(0,1,"0") == 0 && !has_decimal && str.compare(0,2,"0x") != 0)
	{
		unsigned long i = 1;
		for (; i < str.length(); i++)
			if (!isdigit(str.at(i)) || str.at(i) == '9' || str.at(i) == '8')
				test_nan = 1;
		isoct = 1;
	}
//precision && reading into istringstream --------------------------------------
	int	precision = 1;
	if (has_decimal)
		precision = static_cast<int>(str.length() - str.find("."));
	std::cout.precision(precision - 1);

	std::istringstream ss(str);
	long double ld;
	//if octal read the value as octal , otherwise it will read as a
	//base 10 integer
	if (isoct && !has_decimal)
	{
		long octal;
		ss >> std::oct >> octal;
		ld = octal;
	}
	else
		ss >> ld;
	//if char
	if (!isdigit(str.at(0)))
	{
		if (str.length() > 1)
			test_nan = 1;
		ld = static_cast<char>(str.at(0));
	}
	//if double or float
	else if (str.find(".") != std::string::npos)
	{
		if (str.back() == 'f')
			ld = static_cast<float>(ld);
		else
			 ld =static_cast<double>(ld);
	}
	// testing if valid integer string
	else
	{
		if (str.front() == '-')
		{
			for (unsigned long i = 1; i < str.length(); i++)
				if (!isdigit(str.at(i)))
					test_nan = 1;
		}
		//hex
		else
		{
			unsigned long	i = 0;
			if (str.compare(0, 2, "0x") == 0)
			{
				i = 2;
				for (; i < str.length(); i++)
					if (!isxdigit(str.at(i)))
						test_nan = 1;
			}
		}
		ld = static_cast<int>(ld);
	}
	if (test_nan && test_inf)//inf sets the nan flag for char cast
		test_nan = 0;
//	casts -- pretty standard , doesn't throw any exceptions
	//and using std::fixed for the precision
//char -------------------------------------------------------------------------
	if (test_nan || test_inf || ld < CHAR_MIN || ld > CHAR_MAX)
		std::cout << "Cast to char not allowed" << std::endl;
	else if (std::isprint(static_cast<char>(ld)))
		std::cout << "Cast to char :: <" << static_cast<char>(ld) << ">" << std::endl;
	else
		std::cout << "Cast to char creates a non printable charector" << std::endl;
//int --------------------------------------------------------------------------
	int	is_zero = 0;
	if (test_inf || test_nan || ld > INT_MAX || ld < INT_MIN)
		std::cout << "Cast to int not allowed" << std::endl;
	else
	{
		if (isoct)
			std::cout << "Cast to int :: <" << "0" << std::oct << static_cast<int>(ld) << ">" << std::endl;
		else if (str.compare(0,2,"0x") == 0)
			std::cout << "Cast to int :: <" << "0x" << std::hex << static_cast<int>(ld) << ">" << std::endl;
		else
			std::cout << "Cast to int :: <" << static_cast<int>(ld) << ">" << std::endl;
		if (static_cast<int>(ld) == 0)
			is_zero += 1;
	}
//float ------------------------------------------------------------------------
	if (test_nan)
		std::cout << "Cast to float :: <nanf>" << std::endl;
	else if (test_inf)
		std::cout << "Cast to float :: <" << str.substr(0, 3) << "f>" << std::endl;
	else if (is_zero)
		std::cout << "Cast to float :: <" << std::fixed << static_cast<float>(ld) << "f>" << std::endl;
	else if (ld < -FLT_MAX || ld > FLT_MAX)
		std::cout << "Cast to float not allowed" << std::endl;
	else
		std::cout << "Cast to float :: <" << std::fixed << static_cast<float>(ld) << "f>" << std::endl;
//double -----------------------------------------------------------------------
	if (test_nan)
		std::cout << "Cast to float :: <nan>" << std::endl;
	else if (is_zero)
		std::cout << "Cast to float :: <" << std::fixed << static_cast<double>(ld) << ">" << std::endl;
	else if (test_inf)
		std::cout << "Cast to float :: <" << str << ">" << std::endl;
	else if (ld > DBL_MAX || ld < -DBL_MAX)
		std::cout << "Cast to double not allowed" << std::endl;
	else
		std::cout << "Cast to double :: <" << std::fixed << static_cast<double>(ld) << ">" << std::endl;
}
