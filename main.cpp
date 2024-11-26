#include "List.h"
#include <iostream>
using namespace std;

int main()
{
	List myL1(5);
	List myL2(myL1);

	List myL3;
	myL3 = myL2;
}