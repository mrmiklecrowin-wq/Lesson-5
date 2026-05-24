#include<iostream>
#include<windows.h>

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	const int rows = 3;
	const int columns = 6;

	
	std::cout << "Массив:" << std::endl;

	int array[rows][columns] {
		{5, 43, 7, 10, 12, 11},					  
		{6, 0, 5, 4, 22, 8},					 
		{7, 2, 14, 77, 5, 65}
	};
	
	

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++)
		{
		std::cout << array[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	
	
	int min_indx = array[0][0];
	int max_indx = array[0][0];
	
	int min_i = 0;
	int min_j = 0;
	int max_i = 0;
	int max_j = 0;
	
	
	for (int i = 0; i < rows; i++) 
	{
		for (int j = 0; j < columns; j++){
			if(array[i][j] < min_indx){
				min_indx = array[i][j];
				min_i = i;
				min_j = j;
			}
		
		    if(array[i][j] > max_indx){
				max_indx = array[i][j];
				max_i = i;
			    max_j = j;
			}	
		}
	}
	
	std::cout << "Индекс минимального элемента: " << min_i << " " << min_j << std::endl;
	std::cout << "Индекс максимального элемента: " << max_i << " " << max_j << std::endl;

	return 0;
}
