#include <iostream>

using namespace std;

int main()
{
    const char* idt = "    ";

    int n1 = 8;
    int n2 = 10;

    bool b1 = true;
    bool b2 = false;

    cout << "int a = 8; int b = 10;" << endl;
    cout << "bool b1 = true; bool b2 = false" << endl;

    cout << endl;

    cout << "Arithmetic Operators:" << endl;
    cout << idt << "n1 + n2: " << (n1 + n2) << endl;
    cout << idt << "n1 - n2: " << (n1 - n2) << endl;
    cout << idt << "n1 * n2: " << (n1 * n2) << endl;
    cout << idt << "n1 / n2: " << (n1 / n2) << endl;
    cout << idt << "n1 % n2: " << (n1 % n2) << endl;
    cout << idt << "++n1: " << (++n1) << endl;
    cout << idt << "--n1: " << (--n1) << endl;

    cout << endl;

    cout << "Relational Operators:" << endl;
    cout << idt << "b1 == b2: " << (b1 == b2) << endl;
    cout << idt << "b1 != b2: " << (b1 != b2) << endl;
    cout << idt << "n1 < n2: " << (n1 < n2) << endl;
    cout << idt << "n1 > n2: " << (n1 > n2) << endl;
    cout << idt << "n1 >= n2: " << (n1 >= n2) << endl;
    cout << idt << "n1 <= n2: " << (n1 <= n2) << endl;

    cout << endl;

    cout << "Logical Operators:" << endl;
    cout << idt << "b1 && b2: " << (b1 && b2) << endl;
    cout << idt << "b1 || b2: " << (b1 || b2) << endl;
    cout << idt << "!b1: " << (!b1) << endl;
}