#include <string>
#include <iostream>
#include <stdexcept>
#include <ios>
#include <limits>

using namespace std;


class EX_02
{
public: 
	/**
		@param prompt, Message to be displayed
		@param low, lower bound of the range
		@param high, upper bound of the range
		@return The first valid data value
		*/

	static int read_int(const string &prompt, int low, int high)
	{
		if (low > high)
			throw std::invalid_argument("Incorrect range values");

		cin.exceptions(ios_base::failbit);
		int num = 0;
		while (true) // loop until valid input
		{
			try
			{
				cout << prompt;
				cin >> num;
				return num;
			}
			catch (ios_base::failure &ex)
			{
				cout << "Bad numeric string -- try again\n";
				cin.clear();
				cin.ignore(numeric_limits<int>::max(), '\n');
			}
		}
	}
};