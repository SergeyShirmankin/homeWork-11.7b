#include <string>
#include <fstream>  // ������ � �������
#include <iostream>
using namespace std;
//--------------------------------------------------------------------------
// ������� ��������� ���� -> arr[i](������)
//-------------------------------------------------------------------------
//��������� ��. ������� �� �����
int convertDigit(int targetNumb)
{
	if (targetNumb < 10 && 0 < targetNumb)
	{
		return targetNumb;
	}
	else 
	{
		return targetNumb % 10;
	}
}
//--------------------------------------------------------------------------
void write_sortNumeric(const string& inFilename1, const string& filename, int mode)
{
	ifstream in1;
	int  str;
	in1.open(inFilename1, fstream::in);//���� ��� ������

	const int fileNumb = 10;
	fstream newFs;
	string newFileName;
	//������� 10 ������ ������:
	// ���� 0 - ��.������ 00; 1:01; 2:02; 3:03; 4:04
	// ���� 5 - ��.������ 05;6:06; 7:07; 8:08; 9:09
	if (in1.is_open()) // ���������, ��� ���� ������� ������
	{
		if (mode == 1)
		{
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
			while (!in1.eof())
			{
				in1 >> str;
				if (convertDigit(str) == 0) {// 0
					newFileName = filename + to_string(0) + ".txt";
					newFs.open(newFileName, fstream::app);
					if (newFs.is_open()) // ���������, ��� ���� ������� ������
					{
						newFs << str << ' '; // ���������� �������� ����� ������
						newFs.close(); // ��������� ����	
					}
					else
						cout << "\n File " << newFileName << " not  open";
				}
				//------------------------01--------------------------------------------
				else if (convertDigit(str) == 1)
				{
					newFileName = filename + to_string(1) + ".txt";
					newFs.open(newFileName, fstream::app);
					if (newFs.is_open()) // ���������, ��� ���� ������� ������
					{
						newFs << str << ' '; // ���������� �������� ����� ������
						newFs.close(); // ��������� ����
					}
					else
						cout << "\n File " << newFileName << " not  open";
				}
				//------------------------02--------------------------------------------
				else if (convertDigit(str) == 2)
				{
					newFileName = filename + to_string(2) + ".txt";
					newFs.open(newFileName, fstream::app);
					if (newFs.is_open()) // ���������, ��� ���� ������� ������
					{
						newFs << str << ' '; // ���������� �������� ����� ������
						newFs.close(); // ��������� ����
					}
					else
						cout << "\n File " << newFileName << " not  open";
				}
				//------------------------03--------------------------------------------
				else if (convertDigit(str) == 3)
				{
					newFileName = filename + to_string(3) + ".txt";
					newFs.open(newFileName, fstream::app);
					if (newFs.is_open()) // ���������, ��� ���� ������� ������
					{
						newFs << str << ' '; // ���������� �������� ����� ������
						newFs.close(); // ��������� ����
					}
					else
						cout << "\n File " << newFileName << " not  open";
				}

				//------------------------04--------------------------------------------
				else if (convertDigit(str) == 4)
				{
					newFileName = filename + to_string(4) + ".txt";
					newFs.open(newFileName, fstream::app);
					if (newFs.is_open()) // ���������, ��� ���� ������� ������
					{
						newFs << str << ' '; // ���������� �������� ����� ������
						newFs.close(); // ��������� ����
					}
					else
						cout << "\n File " << newFileName << " not  open";
				}
				//------------------------05--------------------------------------------
				else if (convertDigit(str) == 5)
				{
					newFileName = filename + to_string(5) + ".txt";
					newFs.open(newFileName, fstream::app);
					if (newFs.is_open()) // ���������, ��� ���� ������� ������
					{
						newFs << str << ' '; // ���������� �������� ����� ������
						newFs.close(); // ��������� ����
					}
					else
						cout << "\n File " << newFileName << " not  open";
				}
				//------------------------06--------------------------------------------
				else if (convertDigit(str) == 6)
				{
					newFileName = filename + to_string(6) + ".txt";
					newFs.open(newFileName, fstream::app);
					if (newFs.is_open()) // ���������, ��� ���� ������� ������
					{
						newFs << str << ' '; // ���������� �������� ����� ������
						newFs.close(); // ��������� ����
					}
					else
						cout << "\n File " << newFileName << " not  open";
				}
				//------------------------07--------------------------------------------
				else if (convertDigit(str) == 7)
				{
					newFileName = filename + to_string(7) + ".txt";
					newFs.open(newFileName, fstream::app);
					if (newFs.is_open()) // ���������, ��� ���� ������� ������
					{
						newFs << str << ' '; // ���������� �������� ����� ������
						newFs.close(); // ��������� ����
					}
					else
						cout << "\n File " << newFileName << " not  open";
				}
				//------------------------08--------------------------------------------
				else if (convertDigit(str) == 8)
				{
					newFileName = filename + to_string(8) + ".txt";
					newFs.open(newFileName, fstream::app);
					if (newFs.is_open()) // ���������, ��� ���� ������� ������
					{
						newFs << str << ' '; // ���������� �������� ����� ������
						newFs.close(); // ��������� ����
					}
					else
						cout << "\n File " << newFileName << " not  open";
				}
				//------------------------09--------------------------------------------
				else if (convertDigit(str) == 9)
				{
					newFileName = filename + to_string(9) + ".txt";
					newFs.open(newFileName, fstream::app);
					if (newFs.is_open()) // ���������, ��� ���� ������� ������
					{
						newFs << str << ' '; // ���������� �������� ����� ������
						newFs.close(); // ��������� ����
					}
					else
						cout << "\n File " << newFileName << " not  open";
				}

			}
		}
	}
}