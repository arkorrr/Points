#include <iostream>
using namespace std;

void Task2(int* array,int size)
{
	int min, cell;
	for (int i = 0; i < size; i++)
	{
		min = i;
		cell = array[i];
		for (int j = i + 1; j < size; j++)
		{
			if (array[j] > cell)
			{
				min = j;
				cell = array[j];
			}
		}
		if (min != i)
		{
			array[min] = array[i];
			array[i] = cell;
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << endl;
	}
}

void Task3(int* arrayA, int* arrayB, int size)
{
	for (int i = 0; i < size; i++, arrayA++, arrayB++)
	{
		*arrayB = *arrayA;
	}
}

void Task4(int a,int b,int* sum, int* product)
{
	*sum = a + b;
	*product = a * b;
}

void Task5(int array[], int size, int* plus, int* minus, int* zero)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] == 0)
		{
			*zero += 1;
		}
		else if (array[i] < 0)
		{
			*minus += 1;
		}
		else if (array[i] > 0)
		{
			*plus += 1;
		}
	}
}

void Task6(int array[], int* max, int* index, int size)
{
	*max = array[0];
	for (int i = 0; i < size; i++)
	{
		if (array[i] > *max)
		{
			*max = array[i];
			*index = i;
		}
	}
}

int main()
{
	/*1) Используя два указателя на массив целых чисел, скопировать один массив в другой. 
	спользовать в программе арифметику указателей для продвижения по массиву,а также оператор разыменования.*/
	//Сделал во время пары.

	/*2) Используя указатель на массив целых чисел, изменить порядок следования элементов массива на противоположный.
	Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.*/
	const int size = 5;
	int arrayA[size] = { 1,2,3,4,5 };
	Task2(arrayA, size);

	/*3) Используя два указателя на массивы целых чисел, скопировать один массив в другой так, чтобы во втором массиве элементы находились в обратном порядке.
	Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.*/
	int arrayB[size];
	Task3(arrayA, arrayB, size);
	Task2(arrayB, size);

	/*4) Написать функцию, которая получает указатель на массив и его размер 
	и возвращает сумму и произведение его элементов в двух параметрах - указателях.*/
	int sum, product;
	Task4(5, 2, &sum, &product);
	cout << sum << endl << product << endl;

	/*5) Написать функцию, которая получает указатель на массив 
	и его размер и возвращает количество отрицательных, положительных и нулевых элементов массива с помощью параметров - указателей.*/
	const int s = 8;
	int plus = 0, minus = 0, zero = 0;
	int arr[s] = { 0, 1 ,2 ,-2 ,6, 0, -6, -1 };
	Task5(arr, s , &plus, &minus, &zero);
	cout << plus << endl << minus << endl << zero << endl;

	/*6) Написать функцию, которая принимает массив и с помощью параметров
	- указателей возвращает 2 результата - индекс максимального элемента и его значение.*/
	const int siz = 5;
	int max = 0, index = 0;
	int ar[siz] = { 1,2,10,4,5 };
	Task6(ar,&max, &index, siz);
	cout << max << endl << index << endl;
}
