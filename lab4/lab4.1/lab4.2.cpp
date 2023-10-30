// lab4.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>


#define n 10

int svap(int array[n])
{
	int tmp = 0;
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			tmp=array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
	}
}


int main()
{

}


