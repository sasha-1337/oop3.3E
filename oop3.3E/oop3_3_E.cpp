#include "Long.h"
int main()
{
	Long pair1(1, 1), pair2(1, 1);
	cout << " Number of elements: " << Object::Counter() << endl;

	cout << " pair (a,b) - ?"; cin >> pair1;
	cout << " ( a , b )";
	cout << pair1;

	cout << " pair (c,d) - ?"; cin >> pair2;
	cout << " ( c , d )";
	cout << pair2;

	Pair a = pair1 + pair2;
	cout << "(a, b) + (c, d) = (a + c), (b + d)";
	cout << a;

	Long b = pair1 * pair2;
	cout << "(a, b) * (c, d) = (a * c), (b * d)";
	cout << b;

	Long c = pair1 - pair2;
	cout << "(a, b) - (c, d) = (a - c), (b - d)";
	cout << c;

	cout << " Number of elements: " << Object::Counter() << endl;
	cout << endl << " Size of class Long: " << sizeof(Long) << endl;

	return 0;
}