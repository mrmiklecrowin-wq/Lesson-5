#include <iostream>
#include <windows.h>

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int N = 10;
	int min_el = 0;
	int max_el = 0;
	

	std::cout << "Массив: " ;
	int array[N] = { 15, 13, 8, 84, 14, 73, 7, 68, 13, 42 };


	for ( int i = 0; i < N ; i++ ){
	std::cout << array[i] << " " ;}
	std::cout << std::endl;

	for(int k = 0; k < N - 1 ; k++)
	{	
		if(array[k] < array[k + 1]){
		int	temp = array[k];
		array[k] = array[k + 1];
		array[k + 1] = temp;
		min_el = temp;
		}
	}	
	for(int k = 0; k < N - 1 ; k++)
	{
		if(array[k] > array[k + 1]){
		int	temp = array[k];
		array[k] = array[k + 1];
		array[k + 1] = temp;
		max_el = temp;
		}	
	}
	std::cout << "Минимальный элемент: " << min_el<< std::endl;
	std::cout << "Максимальный элемент: " << max_el << std::endl;

	return 0;
}
