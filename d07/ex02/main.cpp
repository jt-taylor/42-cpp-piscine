#include "Array.hpp"
#include <cstdlib>

int		main(void)
{
	Array<char>	tmp(5);
	try {
	for (int i = 0;i < 6;i++)
		tmp[i] = ('a' + i);
	std::cout << "Char Array(n) ::" << std::endl;
	for (int i = 0;i < 7;i++)
		std::cout << tmp[i] << " ";
	} catch (std::exception & ref) {
		std::cout << ref.what() << std::endl;
	} catch (...) {
		std::cout << "other exception caught";
	}
	std::cout << std::endl << std::endl;
	Array<int>	tmp1(10);
	try {
	for (int i = 0;i < 6;i++)
		tmp1[i] = (rand());
	std::cout << "Int Array(n) ::" << std::endl;
	for (int i = 0;i < 7;i++)
		std::cout << tmp1[i] << " ";
	} catch (std::exception & ref) {
		std::cout << ref.what() << std::endl;
	} catch (...) {
		std::cout << "other exception caught";
	}
	std::cout << std::endl << std::endl;
	Array<int>	tmp2(tmp1);
	try {
	std::cout << "Int Array(copy) ::" << std::endl;
	for (int i = 0;i < 7;i++)
		std::cout << tmp2[i] << " ";
	tmp2[3] = 0;
	std::cout << std::endl;
	std::cout << "copy instance does not change base instance" << std::endl;
	std::cout << "\tbase[3] == " << tmp1[3] << "\n\tcopy[3] == " << tmp2[3] << std::endl;
	} catch (std::exception & ref) {
		std::cout << ref.what() << std::endl;
	} catch (...) {
		std::cout << "other exception caught";
	}
	std::cout << std::endl << std::endl;
	Array<int>	tmp3;
	try {
	std::cout << "Int Array() ::" << std::endl;
	for (int i = 0;i < 7;i++)
		std::cout << tmp3[i] << " ";
	tmp2[3] = 0;
	std::cout << "copy instance does not change base instance" << std::endl;
	std::cout << "\tbase == " << tmp3[3] << "\n\tcopy == " << tmp2[3] << std::endl;
	} catch (std::exception & ref) {
		std::cout << ref.what() << std::endl;
	} catch (...) {
		std::cout << "other exception caught";
	}
	std::cout << std::endl << std::endl;
	Array<int>	tmp4 = tmp1;
	try {
	std::cout << "Int Array('=') ::" << std::endl;
	for (int i = 0;i < 7;i++)
		std::cout << tmp4[i] << " ";
	tmp4[3] = 2;
	std::cout << std::endl;
	std::cout << "asignment instance does not change base instance" << std::endl;
	std::cout << "\tbase[3] == " << tmp1[3] << "\n\tcopy[3] == " << tmp4[3] << std::endl;
	} catch (std::exception & ref) {
		std::cout << ref.what() << std::endl;
	} catch (...) {
		std::cout << "other exception caught";
	}
}
