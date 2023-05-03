#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void copyFiles(const string& inFilename1, const string& inFilename2, const string& outFilename) {
	{
		ifstream in1;
		ifstream in2;
		ofstream out;
		int  str1, str2;

		in1.open(inFilename1, fstream::in);
		in2.open(inFilename2, fstream::in);
		out.open(outFilename, fstream::out);

		if (in1.is_open()&& in2.is_open()&& out.is_open()) // проверяем, что файл успешно открыт
		{
			
			while (!in1.eof())
		{
				in1 >> str1;
				out << str1<<" ";
		}
			while (!in2.eof())
			{
				in2 >> str2;
				out << str2<<" ";
			}
			in1.close(); // закрываем файл
			in2.close(); // закрываем файл
			out.close(); // закрываем файл
		}
	}
}
//копирование 10 файлов в один файл
void copy_10_Files(const string& inFilename0,
	               const string& inFilename1,
                   const string& inFilename2,
	               const string& inFilename3,
	               const string& inFilename4,
	               const string& inFilename5,
	               const string& inFilename6,
	               const string& inFilename7,
	               const string& inFilename8,
	               const string& inFilename9,
				   const string& outFilename,
	               int mode ) 
{
	{
		ifstream in0;
		ifstream in1;
		ifstream in2;
		ifstream in3;
		ifstream in4;
		ifstream in5;
		ifstream in6;
		ifstream in7;
		ifstream in8;
		ifstream in9;
		ofstream out;

		int  str0, str1;
		int  str2, str3;
		int  str4, str5;
		int  str6, str7;
		int  str8, str9;
		in0.open(inFilename0, fstream::in);
		in1.open(inFilename1, fstream::in);
		in2.open(inFilename2, fstream::in);
		in3.open(inFilename3, fstream::in);
		in4.open(inFilename4, fstream::in);
		in5.open(inFilename5, fstream::in);
		in6.open(inFilename6, fstream::in);
		in7.open(inFilename7, fstream::in);
		in8.open(inFilename8, fstream::in);
		in9.open(inFilename9, fstream::in);
		
		out.open(outFilename, fstream::out);
		if (out.is_open()) {
			if (in0.is_open() && in1.is_open() &&
				in2.is_open() && in3.is_open() &&
				in4.is_open() && in5.is_open() &&
				in6.is_open() && in7.is_open() &&
				in8.is_open() && in9.is_open()) // проверяем, что файл успешно открыт
			{
				if (mode == 1) {
					while (!in0.eof())
					{
						in0 >> str0;
						out << str0 << " ";
					}
				}
				while (!in1.eof())
				{
					in1 >> str1;
					out << str1 << " ";
				}
				while (!in2.eof())
				{
					in2 >> str2;
					out << str2 << " ";
				}
				while (!in3.eof())
				{
					in3 >> str3;
					out << str3 << " ";
				}
				while (!in4.eof())
				{
					in4 >> str4;
					out << str4 << " ";
				}
				while (!in5.eof())
				{
					in5 >> str5;
					out << str5 << " ";
				}
				while (!in6.eof())
				{
					in6 >> str0;
					out << str0 << " ";
				}
				while (!in7.eof())
				{
					in7 >> str7;
					out << str7 << " ";
				}
				while (!in8.eof())
				{
					in8 >> str8;
					out << str8 << " ";
				}
				while (!in9.eof())
				{
					in9 >> str9;
					out << str9 << " ";
				}
				in0.close(); // закрываем файл
				in1.close(); // закрываем файл
				in2.close(); // закрываем файл
				in3.close(); // закрываем файл
				in4.close(); // закрываем файл
				in5.close(); // закрываем файл
				in6.close(); // закрываем файл
				in7.close(); // закрываем файл
				in8.close(); // закрываем файл
				in9.close(); // закрываем файл
				out.close(); // закрываем файл
			}
		}
	}
}