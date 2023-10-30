// lab3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Вариант-1.
Дана последовательность натуральных чисел {Aj}. Hайти произведение чисел, заканчивающихся цифрой 2 или 4, наименьшее из таких чисел и номер этого числа в последовательности.
*/

#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int prod = 1;
	int lesser = 0;
	int flag = 0;
	int num = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 10 == 2 || i % 10 == 4)
		{
			prod *= i;
			if (flag == 0)
			{
				lesser = i;
				flag = 1;
				num = i + 1;
			}
			
		}
	}
	if (!flag) 
	{
		std::cout << "Error";
	}
	else
	{
		std::cout << prod << std::endl;
		std::cout << lesser << std::endl;
		std::cout << num << std::endl;
	}
	
}
    