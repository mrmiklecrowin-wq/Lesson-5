#include<iostream>
#include<windows.h>


int main(){
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int const N = 10;
	
	int array[N] = {22, 3, 15, 11, 7, 44, 1, 35, 29, 6};
	
	
	
	std::cout << "Массив до сортировки: ";
	
	for(int i = 0; i < N; i++){
	std::cout << array[i] << " ";
	}
	std::cout << std::endl;
	
	
	std::cout << "Массив после сортировки: ";
	
	for(int c = 0;  c < N - 1; c++){
		for(int j = 0;  j < N - 1; j++){
			if (array[j] > array[j + 1]){
			int temp_max = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp_max;
		  	}
		}
   	}
		for(int i = 0; i < N; i++){
		std::cout << array[i] << " ";
    }
	return 0;
}
