#include <iostream>
using namespace std;

int main() {
	int a = 10;	// C++中 除0外均为真
	cout << !a << endl;		// 0
	cout << !!a << endl;	// 1

	int b = 0;
	cout << (a || b) << endl;
	cout << (a && b) << endl;
	return 0;
}