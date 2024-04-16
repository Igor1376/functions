
#include"stdafx.h";
#include"Constants.h";
#include"Print.h";
#include"FillRand.h";
#include"Sum.h";
#include"Avg.h";
#include"minValueIn.h";
#include"maxValueIn.h";
#include"shiftLeft.h";
#include"shiftRight.h";
#include"Sort.h";
#include"Unique.h";


void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int i_arr[n];
	/*int minRand, maxRand;
	do
	{
		cout << "Введите минимально возможное случайное число: "; cin >> minRand;
		cout << "Введите максимально возможное случайное число: "; cin >> maxRand;
		if (minRand == maxRand)cout << "Пределы диапазона не должны совпадать: " << endl;
	} while (minRand == maxRand);*/

	FillRand(i_arr, n);
	Print(i_arr, n);
	cout << "Сумма элементов массива: " << Sum(i_arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr, n) << endl;
	cout << "Минимальное значение массива: " << minValueIn(i_arr, n) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(i_arr, n) << endl;
	int c = 0;
	shiftLeft(i_arr, n, c);
	Print(i_arr, n);
	shiftRight(i_arr, n, c);
	cout << delimiter << endl;
	Print(i_arr, n);
	Sort(i_arr, n);
	Print(i_arr, n);

	Unique(i_arr, n);
	Print(i_arr, n);

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение массива: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(d_arr, D_SIZE) << endl;
	int d = 0;
	shiftLeft(d_arr, D_SIZE, d);
	shiftRight(d_arr, D_SIZE, d);
	cout << delimiter << endl;


	int number_of_shifts = 0;
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Средняя арифметическая элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение массива: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);
	
	shiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);
	
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	
	double d_arr_3[ROWS][COLS];
	FillRand(d_arr_3, ROWS, COLS);
	Print(d_arr_3, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(d_arr_3, ROWS, COLS) << endl;
	cout << "Минимальное значение массива: " << minValueIn(d_arr_3, ROWS, COLS) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(d_arr_3, ROWS, COLS) << endl;

	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	Unique(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	
	cout << delimiter << endl;
}










