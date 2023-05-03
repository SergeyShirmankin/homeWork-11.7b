#pragma once
#include <string>
using namespace std;

void write_arr(const string& filename, const int* arr, const int n, int mode);
bool read_arr(const string& filename, int*& arr, int& n, int& pointer);
void write_sortFile(const string& filename, const int* arr, const int n, int mode);

