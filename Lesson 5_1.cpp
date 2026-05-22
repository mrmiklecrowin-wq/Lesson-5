#include <iostream>

int main() {
	
	const int N = 10;
	
	int array[N] = { 5, 4, 10, 22, 11, 76, 9, 45, 13, 17 };
	
	
	for (int i = 0; i < (N - 1) ; i++){
	std::cout << array[i] << ", ";}
	

	std::cout << array[N - 1];
	
	return 0;
}
