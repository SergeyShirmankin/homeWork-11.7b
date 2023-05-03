#include <string>
#include <fstream>  // работа с файлами
#include <iostream>
#include <cstdlib> // для получения рандомных чисел
#include <ctime>
#include <chrono> // для получения времени
#include "Functions.h"
#include "CopyFilesr.h"
#include "NumericSoft.h"
#include "RunCopy.h"
using namespace std;

int main()
{
	string filename = "filename.txt";//исходный файл для сортировки
	string filenameNow = "sort";//выходные  файлы для карманной сортировки 10 шт: sort1.txt..
	string fileNumer = "number";//выходные файлы после разрядной сортировки.
	const int size = 2000;
	const int cycle = 100;
	int* rand_arr = new int[size];
	srand(time(nullptr)); // используем текущее время, чтобы сгенерировать рандомные значения
	int lef_border = 1;
	int range_len = 100; // правая граница = range_len + left_border
//	for (int i = 0; i < size; i++)
//		rand_arr[i] = lef_border + rand() % range_len; // генерируем число в указанном диапазоне и записываем в массив
	auto start = chrono::high_resolution_clock::now();
//	write_arr(filename, rand_arr, size, 1); // записываем массив в файл и создаем файл
//-------------------------------------------------------------------------------
	for (int j = 0; j < cycle; j++) {
		for (long i = 0; i < size; i++)
			rand_arr[i] = lef_border + rand() % range_len; // генерируем число в указанном диапазоне и записываем в массив
		write_arr(filename, rand_arr, size, 1); // записываем массив в файл и добавляем в файл
	}
//===============================================================================
	int* array_from_file = nullptr;
	int n = 100;
	int stepCycle = 0;
	int pointer = 0;
	//----------------------------------------------------------------
	while (read_arr(filename, array_from_file, n, pointer)) // читаем массив из файла
	{
		stepCycle++;
		std::cout << "stepCycle = " << stepCycle << " pointer = " << pointer << endl;
	}
	//----------------------------------------------------------------
	write_sortFile(filenameNow, rand_arr, size, 1);
	write_sortFile(filenameNow, rand_arr, size, 0);
	//-----------------------------------------------------------------
	RunCopy();
	finalRunCopy();
	//----------------------------------------------------------------
	auto finish = chrono::high_resolution_clock::now(); // сохраняем время конца работы алгоритма
	chrono::duration<double> elapsed = finish - start;
	cout << "Elapsed time: " << elapsed.count() << " sec" << endl;
	//----------------------------------------------------------------
	delete[] rand_arr;
	delete[] array_from_file;
	return 0;
}