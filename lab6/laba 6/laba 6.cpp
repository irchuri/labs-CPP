﻿#include <iostream>

#include "functions.h"
using namespace functions;

int main()
{
	setlocale(LC_ALL, "rus");
	int elements[200] = {};
	int t = 0;
	int n = 0;
	int matrix[100][100] = {};


	// чтение матрицы
	reading(matrix, n, t, elements);

	// обработка матрицы
	processing(matrix, n);

	// запись новой матрицы
	recording(matrix, n);
}