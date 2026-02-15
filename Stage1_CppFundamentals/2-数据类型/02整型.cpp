#include <iostream>	
using namespace std;

int main02() {
	short num1 = 32768;		//输出显示num1 = -32768;	超出了能表示的最大范围，溢出；直接截取低十六位，成为负数
	int num2 = 100000000;
	long num3 = 10;
	long long num4 = 10;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;

	system("pause");
	return 0;
}