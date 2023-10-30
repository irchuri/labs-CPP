#include <iostream>

int main()
{
	double a, b, c;
	std::cin >> a >> b >> c;
	double p = ((a + b + c) / 2);
	double heron = pow(p * (p - a) * (p - b) * (p - c), 0.5);
	std::cout << heron;
}