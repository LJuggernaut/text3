#include "Complex.h"

int main()
{
	Complex complex1(3, 4);
	Complex complex2(2, -4);
	Complex complex3(3, -1);
	Complex first = complex1 + complex2 * complex3;
	cout << "first=" << first << endl;
	Complex complex4(4, 3);
	Complex complex5(5, 6);
	Complex second = complex4 - complex5;
	cout << "second=" << second << endl;
	Complex first1 = ++first;
	cout << "++first=" << first1 << endl;
	Complex second1 = --second;
	cout << "--second=" << second1 << endl;
	system("pause");
}