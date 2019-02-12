#include<iostream>
#include "pch.h"
#include "DynArray.h"

int main()
{
	try {
		int* arr = new int[10];
		for (int i = 0; i < 10; ++i) arr[i] = i + 1;
		DynArray<int> myArr(10, arr);
		myArr.Display();
		myArr.Remove(77);
		myArr.Display();
	}
	catch (int) {
		std::cout << "Out Of Range\n";
	}
}