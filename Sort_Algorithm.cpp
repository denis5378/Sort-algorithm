// Sort_Algorithm.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <clocale>
#include <ctime>
#include <iostream>
#include <algorithm>

void set_array(int*, int);
void get_array(int*, int);
void bubble_sort(int*, int);
void insertion_sort(int*, int);
void selection_sort(int*, int);

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int n = 0;
	std::cout << "Введите количество элементов " << std::endl;
	std::cin >> n;
	int* array = new int[n];
	std::cout << "Сгенерированный массив";
	set_array(array, n);
	get_array(array, n);
	std::cout << "Сортировка пузырьком" << std::endl;
	bubble_sort(array, n);
	get_array(array, n);
	std::cout << "Сортировка выборкой" << std::endl;
	selection_sort(array, n);
	get_array(array, n);

	system("pause");
}

void set_array(int* array, int n)
{
	for (int i = 0; i < n; i++)
		array[i] = rand() % 10;
	std::cout << std::endl;
}

void get_array(int* array, int n)
{
	for (int i = 0; i < n; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

void bubble_sort(int* array, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
			if (array[j] > array[j + 1])
			{
				std::swap(array[j], array[j + 1]);
			}
		
}

void insertion_sort(int* array, int n)
{

}

void selection_sort(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{   
		int min = i;
		for (int j = i+1; j < n; j++)
			if (array[min] > array[j])
				min = j;
	std::swap(array[min], array[i]);
	}
}