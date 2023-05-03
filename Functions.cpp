#include <string>
#include <fstream>  // ������ � �������
#include <iostream>
#include <cstdlib> // ��� ��������� ��������� �����
#include <ctime>
#include <chrono> // ��� ��������� �������
#include "Functions.h"
using namespace std;

void write_arr(const string& filename, const int* arr, const int n, int mode)
{
	fstream fs;
	if (mode == 1) {
		fs.open(filename, fstream::out);
		if (fs.is_open()) // ���������, ��� ���� ������� ������
		{
			for (int i = 0; i < n; i++)
				fs << arr[i] << ' '; // ���������� �������� ����� ������
			fs.close(); // ��������� ����
		}
	}
	else
	{
		fs.open(filename, fstream::app);
		if (fs.is_open()) // ���������, ��� ���� ������� ������
		{
			for (int i = 0; i < n; i++)
				fs << arr[i] << ' '; // ���������� �������� ����� ������
			fs.close(); // ��������� ����
		}
	}
}

bool read_arr(const string & filename, int*& arr, int& n, int& pointer)
{
	fstream fs;

	fs.open(filename, fstream::in);
	if (fs.is_open()) // ���������, ��� ���� ������� ������
	{
		//fs >> n;  // ������ ������ �������
		if (pointer != -1) {
			arr = new int[n];
			fs.seekg(pointer);
			for (int i = 0; i < n; i++)
			{
				fs >> arr[i]; // ������ �� ����� �������������� ������� - ������ � ������� ������
			//	std::cout << arr[i];
			}
			pointer = fs.tellg();
			fs.close(); // ��������� ����
			return true;
		}
		else
			std::cout << "End file";
		return false;
	}
}
// ��������� ������ ��������� ��������
void write_sortFile(const string & filename, const int* arr, const int n, int mode)
{
	const int fileNumb = 10;
	fstream newFs;
	string newFileName;
	//������� 10 ������ ������:
	// ���� 0 - ����� �� 0-10; 1:11-20; 2:21-30; 3:31-40; 4:41-50
	// ���� 5 - ����� �� 51-60; 6:61-70; 7:71-80; 8:81-90; 9:91-100
	if (mode == 1) {
		for (int i = 0; i < fileNumb; i++)
		{
			newFileName = filename + to_string(i) + ".txt";
			newFs.open(newFileName, fstream::out);
			if (newFs.is_open()) // ���������, ��� ���� ������� ������
			{
				newFs.close(); // ��������� ����
			}
		}
	}

	else
	{
		// C�������� ������, ��������� ����� ��� ���������� ������
		for (int i = 0; i < n; i++)
		{
			if (arr[i] < 10 && 0 < arr[i]) {// 1..9
				newFileName = filename + to_string(0) + ".txt";
				newFs.open(newFileName, fstream::app);
				if (newFs.is_open()) // ���������, ��� ���� ������� ������
				{
					newFs << arr[i] << ' '; // ���������� �������� ����� ������
					newFs.close(); // ��������� ����	
				}
				else
					cout << "\n File " << newFileName << " not  open";
			}
			//------------------------10..19--------------------------------------------
			else if (arr[i] < 20 && 10 <= arr[i])
			{
				newFileName = filename + to_string(1) + ".txt";
				newFs.open(newFileName, fstream::app);
				if (newFs.is_open()) // ���������, ��� ���� ������� ������
				{
					newFs << arr[i] << ' '; // ���������� �������� ����� ������
					newFs.close(); // ��������� ����
				}
				else
					cout << "\n File " << newFileName << " not  open";
			}
			//------------------------20..29--------------------------------------------
			else if (arr[i] < 30 && 20 <= arr[i])
			{
				newFileName = filename + to_string(2) + ".txt";
				newFs.open(newFileName, fstream::app);
				if (newFs.is_open()) // ���������, ��� ���� ������� ������
				{
					newFs << arr[i] << ' '; // ���������� �������� ����� ������
					newFs.close(); // ��������� ����
				}
				else
					cout << "\n File " << newFileName << " not  open";
			}
			//------------------------30..39--------------------------------------------
			else if (arr[i] < 40 && 30 <= arr[i])
			{
				newFileName = filename + to_string(3) + ".txt";
				newFs.open(newFileName, fstream::app);
				if (newFs.is_open()) // ���������, ��� ���� ������� ������
				{
					newFs << arr[i] << ' '; // ���������� �������� ����� ������
					newFs.close(); // ��������� ����
				}
				else
					cout << "\n File " << newFileName << " not  open";
			}

			//------------------------40..49--------------------------------------------
			else if (arr[i] < 50 && 40 <= arr[i])
			{
				newFileName = filename + to_string(4) + ".txt";
				newFs.open(newFileName, fstream::app);
				if (newFs.is_open()) // ���������, ��� ���� ������� ������
				{
					newFs << arr[i] << ' '; // ���������� �������� ����� ������
					newFs.close(); // ��������� ����
				}
				else
					cout << "\n File " << newFileName << " not  open";
			}
			//------------------------50..59--------------------------------------------
			else if (arr[i] < 60 && 50 <= arr[i])
			{
				newFileName = filename + to_string(5) + ".txt";
				newFs.open(newFileName, fstream::app);
				if (newFs.is_open()) // ���������, ��� ���� ������� ������
				{
					newFs << arr[i] << ' '; // ���������� �������� ����� ������
					newFs.close(); // ��������� ����
				}
				else
					cout << "\n File " << newFileName << " not  open";
			}
			//------------------------60..69--------------------------------------------
			else if (arr[i] < 70 && 60 <= arr[i])
			{
				newFileName = filename + to_string(6) + ".txt";
				newFs.open(newFileName, fstream::app);
				if (newFs.is_open()) // ���������, ��� ���� ������� ������
				{
					newFs << arr[i] << ' '; // ���������� �������� ����� ������
					newFs.close(); // ��������� ����
				}
				else
					cout << "\n File " << newFileName << " not  open";
			}
			//------------------------70..79--------------------------------------------
			else if (arr[i] < 80 && 70 <= arr[i])
			{
				newFileName = filename + to_string(7) + ".txt";
				newFs.open(newFileName, fstream::app);
				if (newFs.is_open()) // ���������, ��� ���� ������� ������
				{
					newFs << arr[i] << ' '; // ���������� �������� ����� ������
					newFs.close(); // ��������� ����
				}
				else
					cout << "\n File " << newFileName << " not  open";
			}
			//------------------------80..89--------------------------------------------
			else if (arr[i] < 90 && 80 <= arr[i])
			{
				newFileName = filename + to_string(8) + ".txt";
				newFs.open(newFileName, fstream::app);
				if (newFs.is_open()) // ���������, ��� ���� ������� ������
				{
					newFs << arr[i] << ' '; // ���������� �������� ����� ������
					newFs.close(); // ��������� ����
				}
				else
					cout << "\n File " << newFileName << " not  open";
			}
			//------------------------90..99--------------------------------------------
			else if (arr[i] < 100 && 90 <= arr[i])
			{
				newFileName = filename + to_string(9) + ".txt";
				newFs.open(newFileName, fstream::app);
				if (newFs.is_open()) // ���������, ��� ���� ������� ������
				{
					newFs << arr[i] << ' '; // ���������� �������� ����� ������
					newFs.close(); // ��������� ����
				}
				else
					cout << "\n File " << newFileName << " not  open";
			}

		}
	}
}

