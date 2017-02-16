#include <iostream>

int main(){
	int x;
	int* px;

	px = &x;
	*px = 10;

	std::cout << x;

	return 0;
}
