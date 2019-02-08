#include<iostream>
#include "pch.h"
#include"ArrayQueue.h"

int main()
{
	ArrayQueue<int>* qu = new ArrayQueue<int>(10);
	for (int i = 0; i < 5; ++i) qu->Enqueue(i+1);
	qu->display();
	std::cout << qu->Dequeue() << '\n';
	qu->display();
	std::cout << qu->Dequeue() << '\n';
	qu->display();
	std::cout << qu->Dequeue() << '\n';
	qu->display();
	std::cout << qu->Dequeue() << '\n';
	qu->display();
	std::cout << qu->Dequeue() << '\n';
	qu->display();
	for (int i = 0; i < 7; ++i) qu->Enqueue(i + 1);
	qu->display();
	delete qu;
}