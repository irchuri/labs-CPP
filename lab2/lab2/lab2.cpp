// lab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	int a, b, c;
	{
		std::cin >> a;
		std::cin >> b;
		std::cin >> c;
	}
	if ((a%b == 0) and (b > c))
	{
		std::cout << (a / b + c);
	}
	if ((a%b == 0) and (b < c))
	{
		std::cout << (a / b - c);
	}
	else
	{
		std::cout << ((a + b)*c);
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	int n;
//	{
//		std::cin >> n;
//	}
//	switch (n)
//	{
//	case 1:
//		std::cout << ("Январь");
//		break;
//	case 2:
//		std::cout << ("Февраль");
//		break;
//	case 3:
//		std::cout << ("Март");
//		break;
//	case 4:
//		std::cout << ("Апрель");
//		break;
//	case 5:
//		std::cout << ("Май");
//		break;
//	case 6:
//		std::cout << ("Июнь");
//		break;
//	case 7:
//		std::cout << ("Июль");
//		break;
//	case 8:
//		std::cout << ("Август");
//		break;
//	case 9:
//		std::cout << ("Сентябрь");
//		break;
//	case 10:
//		std::cout << ("Октябрь");
//		break;
//	case 11:
//		std::cout << ("Ноябрь");
//		break;
//	case 12:
//		std::cout << ("Декабрь");
//		break;
//	default:
//		std::cout << ("Вы ошиблись с номером, мы пользуемся Григорианским календарём.");
//	}
//}