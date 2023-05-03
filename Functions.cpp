#include <string>
#include <fstream>  // работа с файлами
#include <iostream>
#include <cstdlib> // для получения рандомных чисел
#include <ctime>
#include <chrono> // для получения времени
#include "Functions.h"
using namespace std;

void write_arr(const string& filename, const int* arr, const int n, int mode)
{
	fstream fs;
	if (mode == 1) {
		fs.open(filename, fstream::out);
		if (fs.is_open()) // проверяем, что файл успешно открыт
		{
			for (int i = 0; i < n; i++)
				fs << arr[i] << ' '; // записываем значения через пробел
			fs.close(); // закрываем файл
		}
	}
	else
	{
		fs.open(filename, fstream::app);
		if (fs.is_open()) // проверяем, что файл успешно открыт
		{
			for (int i = 0; i < n; i++)
				fs << arr[i] << ' '; // записываем значения через пробел
			fs.close(); // закрываем файл
		}
	}
}

bool read_arr(const string & filename, int*& arr, int& n, int& pointer)
{
	fstream fs;

	fs.open(filename, fstream::in);
	if (fs.is_open()) // проверяем, что файл успешно открыт
	{
		//fs >> n;  // читаем размер массива
		if (pointer != -1) {
			arr = new int[n];
			fs.seekg(pointer);
			for (int i = 0; i < n; i++)
			{
				fs >> arr[i]; // читаем из файла разделительные символы - пробел и перенос строки
			//	std::cout << arr[i];
			}
			pointer = fs.tellg();
			fs.close(); // закрываем файл
			return true;
		}
		else
			std::cout << "End file";
		return false;
	}
}
// Сортируем массив карманным способом
void write_sortFile(const string & filename, const int* arr, const int n, int mode)
{
	const int fileNumb = 10;
	fstream newFs;
	string newFileName;
	//Создаем 10 пустых файлов:
	// файл 0 - числа от 0-10; 1:11-20; 2:21-30; 3:31-40; 4:41-50
	// файл 5 - числа от 51-60; 6:61-70; 7:71-80; 8:81-90; 9:91-100
	if (mode == 1) {
		for (int i = 0; i < fileNumb; i++)
		{
			newFileName = filename + to_string(i) + ".txt";
			newFs.open(newFileName, fstream::out);
			if (newFs.is_open()) // проверяем, что файл успешно открыт
			{
				newFs.close(); // закрываем файл
			}
		}
	}

	else
	{
		// Cортируем массив, Открывакм файлы для добавления данных
		for (int i = 0; i < n; i++)
		{
			if (arr[i] < 10 && 0 < arr[i]) {// 1..9
				newFileName = filename + to_string(0) + ".txt";
				newFs.open(newFileName, fstream::app);
				if (newFs.is_open()) // проверяем, что файл успешно открыт
				{
					newFs << arr[i] << ' '; // записываем значения через пробел
					newFs.close(); // закрываем файл	
				}
				else
					cout << "\n File " << newFileName << " not  open";
			}
			//------------------------10..19--------------------------------------------
			else if (arr[i] < 20 && 10 <= arr[i])
			{
				newFileName = filename + to_string(1) + ".txt";
				newFs.open(newFileName, fstream::app);
				if (newFs.is_open()) // проверяем, что файл успешно открыт
				{
					newFs << arr[i] << ' '; // записываем значения через пробел
					newFs.close(); // закрываем файл
				}
				else
					cout << "\n File " << newFileName << " not  open";
			}
			//------------------------20..29--------------------------------------------
			else if (arr[i] < 30 && 20 <= arr[i])
			{
				newFileName = filename + to_string(2) + ".txt";
				newFs.open(newFileName, fstream::app);
				if (newFs.is_open()) // проверяем, что файл успешно открыт
				{
					newFs << arr[i] << ' '; // записываем значения через пробел
					newFs.close(); // закрываем файл
				}
				else
					cout << "\n File " << newFileName << " not  open";
			}
			//------------------------30..39--------------------------------------------
			else if (arr[i] < 40 && 30 <= arr[i])
			{
				newFileName = filename + to_string(3) + ".txt";
				newFs.open(newFileName, fstream::app);
				if (newFs.is_open()) // проверяем, что файл успешно открыт
				{
					newFs << arr[i] << ' '; // записываем значения через пробел
					newFs.close(); // закрываем файл
				}
				else
					cout << "\n File " << newFileName << " not  open";
			}

			//------------------------40..49--------------------------------------------
			else if (arr[i] < 50 && 40 <= arr[i])
			{
				newFileName = filename + to_string(4) + ".txt";
				newFs.open(newFileName, fstream::app);
				if (newFs.is_open()) // проверяем, что файл успешно открыт
				{
					newFs << arr[i] << ' '; // записываем значения через пробел
					newFs.close(); // закрываем файл
				}
				else
					cout << "\n File " << newFileName << " not  open";
			}
			//------------------------50..59--------------------------------------------
			else if (arr[i] < 60 && 50 <= arr[i])
			{
				newFileName = filename + to_string(5) + ".txt";
				newFs.open(newFileName, fstream::app);
				if (newFs.is_open()) // проверяем, что файл успешно открыт
				{
					newFs << arr[i] << ' '; // записываем значения через пробел
					newFs.close(); // закрываем файл
				}
				else
					cout << "\n File " << newFileName << " not  open";
			}
			//------------------------60..69--------------------------------------------
			else if (arr[i] < 70 && 60 <= arr[i])
			{
				newFileName = filename + to_string(6) + ".txt";
				newFs.open(newFileName, fstream::app);
				if (newFs.is_open()) // проверяем, что файл успешно открыт
				{
					newFs << arr[i] << ' '; // записываем значения через пробел
					newFs.close(); // закрываем файл
				}
				else
					cout << "\n File " << newFileName << " not  open";
			}
			//------------------------70..79--------------------------------------------
			else if (arr[i] < 80 && 70 <= arr[i])
			{
				newFileName = filename + to_string(7) + ".txt";
				newFs.open(newFileName, fstream::app);
				if (newFs.is_open()) // проверяем, что файл успешно открыт
				{
					newFs << arr[i] << ' '; // записываем значения через пробел
					newFs.close(); // закрываем файл
				}
				else
					cout << "\n File " << newFileName << " not  open";
			}
			//------------------------80..89--------------------------------------------
			else if (arr[i] < 90 && 80 <= arr[i])
			{
				newFileName = filename + to_string(8) + ".txt";
				newFs.open(newFileName, fstream::app);
				if (newFs.is_open()) // проверяем, что файл успешно открыт
				{
					newFs << arr[i] << ' '; // записываем значения через пробел
					newFs.close(); // закрываем файл
				}
				else
					cout << "\n File " << newFileName << " not  open";
			}
			//------------------------90..99--------------------------------------------
			else if (arr[i] < 100 && 90 <= arr[i])
			{
				newFileName = filename + to_string(9) + ".txt";
				newFs.open(newFileName, fstream::app);
				if (newFs.is_open()) // проверяем, что файл успешно открыт
				{
					newFs << arr[i] << ' '; // записываем значения через пробел
					newFs.close(); // закрываем файл
				}
				else
					cout << "\n File " << newFileName << " not  open";
			}

		}
	}
}

