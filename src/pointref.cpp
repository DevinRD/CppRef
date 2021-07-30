#include <iostream>

using namespace std;

void increment(int* n)
{
	(*n)++;
}

void decrement(int& n)
{
	n--;
}

int main()
{
	int num = 8;
	int* numptr = &num;
	int& numref = num;

	increment(&num);
	increment(numptr);
	increment(&numref);

	decrement(num);
	decrement(*numptr);
	decrement(numref);

	cout << "int num = 8;" << endl;
	cout << "int* numptr = &num;" << endl;
	cout << "int& numref = num;" << endl;

	cout << endl << endl;

	cout << "num: " << num << endl;
	cout << "&num: " << &num << endl << endl;

	cout << "numptr: " << numptr << endl;
	cout << "*numptr: " << *numptr << endl;
	cout << "&(*numptr): " << &(*numptr) << endl << endl;

	cout << "numref: " << numref << endl;
	cout << "&numref: " << &numref << endl;
}
