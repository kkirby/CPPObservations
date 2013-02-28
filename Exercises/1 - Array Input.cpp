#include <iostream>

int main(){
	int array[8];
	for(int i = 0; i < 8; i++){
		std::cout << i << ": ";
		std::cin >> array[i];
	}
	for(int i = 0; i < 8; i++){
		std::cout << array[i];
	}
	std::cout << std::endl;
}