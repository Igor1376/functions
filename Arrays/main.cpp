#include<iostream>
using namespace std;
#define tab "\t"

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void Print(const int arr[], const int n);
int Sum(const int arr[], const int n);
double Avg(const int arr[], const int n);
int minValueIn(const int arr[], const int n);
int maxValueIn(const int arr[], const int n);
void shiftLeft(const int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	/*int minRand, maxRand;
	do
	{
		cout << "Введите минимально возможное случайное число: "; cin >> minRand;
		cout << "Введите максимально возможное случайное число: "; cin >> maxRand;
		if (minRand == maxRand)cout << "Пределы диапазона не должны совпадать: " << endl;
	} while (minRand == maxRand);*/

	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение массива: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(arr, n) << endl;
	shiftLeft(arr, n);
	
}
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
	}
}
void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
}
int Sum(const int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(const int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
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
int maxValueIn(const int arr[], const int n)
{
	int maxValue;
	maxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue)maxValue = arr[i];
	}
	return maxValue;
}

//const int n = 10;
//int arr[n] = { 0,1,1,2,3,5,8,13,21,34 };
//for (int i = 0; i < n; i++)
//{
//	cout << arr[i] << "\t";
//}
//cout << endl;
//
//int number_of_shift;
//cout << "На сколько элементов сдвинуть массив: "; cin >> number_of_shift;
//for (int i = 0; i < number_of_shift; i++)
//{
//	int buffer = arr[0];
//	for (int i = 0; i < n - 1; i++)
//	{
//		arr[i] = arr[i + 1];
//	}
//	arr[n - 1] = buffer;
//	system("CLS"); // функция system () вызывает любую команду Windows
//	// команда CLS clear screen очищает окно консоли
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	cout << endl;
//	Sleep(1000); // функция sleep () приостанавливает выполнение программы на заданный промежуток времени
//	// промежуток времени задается в миллисекундах.
//}
void shiftLeft(const int arr[], const int n)
{
	
	int number_of_shift;
	cout << "На сколько элементов сдвинуть массив: "; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		const int n = 5;
		int arr[n];
		int buffer = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		for (int i = 0; i < n; i++)
		{
		cout << arr[i] << "\t";
		}
		
	}
	
	
}