#include "Header.h"

//define function cinFunc - nhap gia tri vao mang
void cinFunc(int A[], int n) {
	for (int i = 0; i < n; i++)
	{
		std::cout << "A[" << i << "] = ";
		std::cin >> A[i];
	}
}

//define function de tim gia tri lon nhat trong mang
int maxVal(int A[], int n) {
	int* pt;
	//have array address in pointer
	pt = &A;
	for (int i = 0; i < n; i++)
	{

	}
}