#include <iostream>
#include <fstream>

/*
 * how it do :
 * opens input stream
 * reads the whole input stream into contents
 * uses std::string.find()
 * then std::str.erase() and std::str.insert()
 * then send the contents to the output file stream
 */

int			main(int ac, char **argv)
{
	std::ifstream		inFile;
	std::string			contents;
	std::string			find_str;
	std::string			replace_str;
	std::string			line;
	std::string			out_name;

	if (ac == 4)
	{
		find_str = argv[2];
		replace_str = argv[3];
		if (find_str.compare(replace_str) == 0)
		{
			std::cerr << "find str and replace str must not be the same" << std::endl;
			exit(1);
		}
		if (find_str.empty() || replace_str.empty())
		{
			std::cerr << "empty input strings" << std::endl;
			exit(1);
		}
		out_name = argv[1] ;//+ ".replace";
		out_name += ".replace";

		inFile.open(argv[1]);
		if (!inFile)
		{
			std::cerr << "Failed to open file";
			std::exit(1);
		}
		std::ofstream		outFile;
		outFile.open(out_name);
		if (!outFile)
		{
			std::cerr << "Failed to open outfile ??" << std::endl;
			exit(1);
		}
		while (std::getline(inFile, line))
			contents += line;
		int		i = 1;
		while (i)
		{
			size_t		tmp = 0;
			tmp = contents.find(find_str, tmp);
			if (tmp == std::string::npos)
				i = 0;
			else
			{
				contents.erase(tmp, find_str.length());
				contents.insert(tmp, replace_str);
			}
		}
		outFile << contents << std::endl;
	}
}
