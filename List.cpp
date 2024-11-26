#include "List.h"
#include <iostream>
using namespace std;

List::List()
{
	cout << "this is my default constructor" << endl;
	insertSub = -1;
}

List::List(int size)
{
	cout << "let's create a list of size " << size << endl;
	if (size > 50)
	{
		size = 50;
	}

	listSize = size;
	insertSub = 0;

	listPtr = new char[size];

	for (int i = 0; i < size; i++)
	{
		listPtr[i] = ' ';
	}
}

List::List(const List& other)
{
	cout << "I am invoking copy constructor" << endl;
	listSize = other.listSize;
	insertSub = other.insertSub;

	listPtr = new char[listSize];
	for (int i = 0; i < listSize; i++)
	{
		listPtr[i] = other.listPtr[i];
	}
}

List::~List()
{
	cout << "i am destroying this" << endl;
	delete [] listPtr;
	//listPtr = NULL;
}

List & List::operator=(const List& other)
{
	cout << "I am copying one object to another" << endl;

	if (this != &other)
	{
		listSize = other.listSize;
		insertSub = other.insertSub;

		delete[] listPtr;
		listPtr = new char[listSize];
		for (int i = 0; i < listSize; i++)
		{
			listPtr[i] = other.listPtr[i];
		}
	}

	return *this;
}

char List::operator[](const int &sub) const
{
	return listPtr[sub];
}

char & List::operator[](const int &sub)
{
	return listPtr[sub];
}