#include "shiftLeft.h";
#include "Print.h";

void shiftLeft(int arr[], const int n, int c)
{
	cout << "На сколько элементов сдвинуть массив: "; cin >> c;
	for (int i = 0; i < c; i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < n - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
	Print(arr, n);

}
void shiftLeft(double arr[], const int n, int d)
{
	cout << "На сколько элементов сдвинуть массив: "; cin >> d;
	for (int i = 0; i < d; i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < n - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
	Print(arr, n);

}
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	/*for (int i = 0; i < ROWS; i++) // построчный сдвиг
	{
		shiftLeft(arr[i], COLS, number_of_shifts);
	}*/
	for (int i = 0; i < number_of_shifts; i++) // сквозной сдвиг
	{
		int buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 1; j < COLS; j++)
			{
				arr[i][j - 1] = arr[i][j];
			}
			if (i < ROWS - 1)arr[i][COLS - 1] = arr[i + 1][0];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}