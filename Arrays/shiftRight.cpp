#include "shiftLeft.h";
#include "Print.h";

void shiftRight(int arr[], const int n, int c)
{
	//shiftLeft(arr, n, n - number_of_shifts % n);
	cout << "На сколько элементов сдвинуть массив: "; cin >> c;
	for (int i = 0; i < c; i++)
	{
		int buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
	Print(arr, n);

}
void shiftRight(double arr[], const int n, int d)
{

	cout << "На сколько элементов сдвинуть массив: "; cin >> d;
	for (int i = 0; i < d; i++)
	{
		int buffer = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
	Print(arr, n);

}
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	shiftLeft(arr, ROWS, COLS, ROWS * COLS - number_of_shifts);
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++) //счетчик i выбирает элемент массива, 
		// в который будет помещено минимальное значение из всех перебираемых
	{
		for (int j = i + 1; j < n; j++) // счетчик j перебирает оставшиеся элементы масива

		{

			// arr[i] - выбранный элемент
			// arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;

			}
		}
	}
	Print(arr, n);
}