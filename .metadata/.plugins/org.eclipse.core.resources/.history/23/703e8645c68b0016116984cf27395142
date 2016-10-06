/*
 * descriptive.cpp
 *
 *  Created on: Oct 4, 2016
 *      Author: michael
 */

double* sort(double data[])
{
	double temp;

	for (int i = 0; i < sizeof(data) - 1; i++)
	{
		for (int j = 0; j < sizeof(data) - 1; j++)
		{
			if (data[j] > data[j+1])
			{
				temp = data[j+1];
				data[j+1] = data[j];
				data[j] = temp;
			}
		}

		if (data[i] > data[i+1])
		{
			temp = data[i+1];
			data[i+1] = data[i];
			data[i] = temp;
		}
	}

	return data;
}

double sum(double data[])
{
	double sum = 0;

	for (int i = 0; i < sizeof(data); i++)
	{
		sum += data[i];
	}

	return sum;
}

double mean(double data[])
{
	double arithmeticMean;

	double dataSum = sum(data);

	arithmeticMean = dataSum / sizeof(data);

	return arithmeticMean;
}

double median(double data[])
{
	double* sortedArray = sort(data);

	int index;
	int index2;
	int median;

	if (sizeof(sortedArray) % 2 != 0)
	{
		index = (sizeof(sortedArray) + 1) / 2;
		index2 = (sizeof(sortedArray) - 1) / 2;

		double midIndices[2] = {sortedArray[index], sortedArray[index2]};

		median = mean(midIndices);
	}

	else
	{
		index = sizeof(sortedArray) / 2;
		median = sortedArray[index];
	}

	return median;
}

