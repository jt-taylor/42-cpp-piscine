#include <ctime>
#include <iostream>
#include <string>
struct Data
{
	std::string s1;
	int n;
	std::string s2;
};
struct Data;

//get a random char
static char	get_random_letter_or_digit(void)
{
	static const char arr[] =
	{"abcdefghipqrstuvwxyzABCDEFGHIPQRSTUVWXYZ0123456789"};
		return (arr[rand() % 62]);
}

void*		serialize( void )
{
	char *ptr = new char[sizeof(char) * 16 + sizeof(int)];

	//fill first 8 in with char's
	for (int i = 0; i < 8;i++)
		ptr[i] = get_random_letter_or_digit();
	//recast to an int
	*reinterpret_cast<int *>(ptr + 8) = rand();
	//fill in the remaining chars
	for (int i = 0; i < 8; i++)
		ptr[i + 8 + sizeof(int)] = get_random_letter_or_digit();
	return ptr;
}

Data*		deserialize( void* raw )
{
	Data		*ret = new Data();
	//cast the data to char
	char	*tmp = reinterpret_cast<char *>(raw);
	//set the string1 and the string2
	ret->s1 = std::string(tmp, 8);
	ret->s2 = std::string(tmp + 8 + sizeof(int), 8);
	//cast the int to an int instead of a char
	ret->n = *reinterpret_cast<int*>(tmp + 8);
	delete static_cast<char *>(raw);
	return (ret);
}
