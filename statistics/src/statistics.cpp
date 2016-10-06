//============================================================================
// Name        : statistics.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "descriptive.h"

int main()
{
	std::cout << "Statistics Library test file:" << std::endl;

	double myArray[] = {21, 12, 15, 7, 31, 9, 5, 16, 14};

	double* sorted = sort(myArray);

	for (int i = 0; i < sizeof(sorted); i++)
	{
		std::cout << sorted[i] << std::endl;
	}

	std::cout << "" << std::endl;

	double myMedian = median(myArray);

	std::cout << myMedian << std::endl;

	return 0;
}
