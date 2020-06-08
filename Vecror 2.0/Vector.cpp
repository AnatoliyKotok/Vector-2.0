#include "Vector.h"
#include<iostream>
using namespace std;

Vector::Vector(size_t size, int value)
{
	    arr = new int[size];
		this->size = size;
		fill(value);

}

void Vector::fill(int value)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = value;
	}
}

void Vector::SetVelue(int index, int value)
{
	arr[index] = value;
}

void Vector::print()
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int Vector::GetIndex(int index)
{
	return arr[index];
}
bool Vector::empty()
{
	return size!=0;
}

void Vector::push_back(int element)
{
	    int* tmp = new int[++size];
		for (size_t i = 0; i < size - 1; i++)
		{
			tmp[i] = arr[i];

		}
		tmp[size - 1] = element;
		delete[] arr;
		arr = tmp;



	
}

