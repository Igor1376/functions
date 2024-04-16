#include "minValueIn.h";

int minValueIn(const int arr[], const int n)
{
	int minValue;
	minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue)minValue = arr[i];
	}
	return minValue;
}
double minValueIn(const double arr[], const int n)
{
	double minValue;
	minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue)minValue = arr[i];

	}
	return minValue;
}
int minValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int minValue;
	minValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < minValue)minValue = arr[i][j];

		}
	}
	return minValue;
}
double minValueIn(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int minValue;
	minValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < minValue)minValue = arr[i][j];

		}
	}
	return minValue;
}