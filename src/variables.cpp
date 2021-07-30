#include <iostream>

using namespace std;

int main()
{
	cout << "bool size: " << sizeof(bool) << endl;
	cout << "char size: " << sizeof(char) << endl;
	cout << "short size: " << sizeof(short) << endl;
	cout << "short int size: " << sizeof(short int) << endl;
	cout << "int size: " << sizeof(int) << endl;
	cout << "long int size: " << sizeof(long int) << endl;
	cout << "long size: " << sizeof(long) << endl;
	cout << "long long int size: " << sizeof(long long int) << endl;
	cout << "long long size: " << sizeof(long long) << endl;
	cout << "float size: " << sizeof(float) << endl;
	cout << "double size: " << sizeof(double) << endl;

	static const volatile unsigned long long int x = 0; // longest declaration?
}
