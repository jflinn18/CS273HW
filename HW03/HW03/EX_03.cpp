#include "EX_02.cpp"
#include <stdexcept>
#include <iostream>

/**
	Testing EX_02.cpp
*/

int main()
{
	try
	{
		EX_02::read_int("Enter a number in the range: ", 5, 1);
	}
	catch (std::invalid_argument &ex)
	{
		std::cout << ex.what() << endl;
	}
}