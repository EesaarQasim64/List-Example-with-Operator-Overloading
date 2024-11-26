#ifndef LIST_H
#define LIST_H
#include <iostream>
using namespace std;

class List
{
	public:
		List();
		List(int);
		//copy constructor
		List(const List&);
		//assignment operator
		List & operator=(const List&);
		char operator[](const int &) const;
		char & operator[](const int &);
		~List();


	private:
		char* listPtr;
		int listSize;
		int insertSub;

};

#endif