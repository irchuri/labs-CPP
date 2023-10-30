// lab4.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/*Дана последовательность натуральных чисел {aj}j=1...n (n<=10000).
Если в последовательности есть хотя бы одно число, начинающееся цифрой 1, упорядочить последовательность по неубыванию.
*/

#include <iostream>
#include <ctime>
int main()
{
	const int n = 10000;
	int array[n]{};
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		array[i] = rand();
		std::cout << array[i] << " ";
	}
	bool flag = true;
	for (int i = 0; i < n; i++) {
		if(array[i]/10==1){
			flag = false;
			break;
		}
	
	}
	if (flag == false) {
		for (int i = 0; i < n-1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (array[i] > array[j]) {
					int tmp = 0;
					tmp = array[i];
					array[i] = array[j];
					array[j] = tmp;

				}
			}
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < n; i++) {
		std::cout << array[i] << " ";
	}
}

