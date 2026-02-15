#include<iostream>

int main09() {
	int i = 0;
	for (;;) {
		// for(int i=0;i<10;i++)
		if (i >= 10) {
			break;
		}
		std::cout << i << std::endl;
		i++;
	}
	return 0;
}