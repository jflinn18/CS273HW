#include <stdexcept>
#include <iostream>


class EX_01
{
public: 
	int *x;

	/**
		Stores val in the element of array x with subscript index.
		@param index, the subscript of element to be changed
		@param val, the value to be stored
		@return true, if val is stored; otherwise false
		*/
	bool set_element_of_x(int index, int val)
	{
		try
		{
			x[index] = val;
			return true;
		}
		catch (std::out_of_range &ex)
		{
			std::cerr << ex.what();
		}
	}
};