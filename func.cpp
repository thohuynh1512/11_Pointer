#include "Header.h"

//define function de nhap mang
void cinfunc(int Arr[],int n) {
	for (int i = 0;  i < n;  i++)
	{
		std::cout << "A[" << i << "] = ";
		std::cin >> Arr[i];
	}
}

//define function de tim max trong mang
int maxfunc(int A[], int n)
{
	int* max = A;
	std::cout << max;
	for (int i = 1; i < n; i++)
	{
		if ( *max < * (A + i)) {
			max = (A + i);
		}
	}
	return *max;
}

//define function return array
void in_mang(int A[], int n) {
	int* ptArr[1000];
	for (int i = 0; i < n; i++)
	{
		//get address to ptArr[]
		ptArr[i] = &A[i];
	}

	//in mang quan ly bang con tro
	for (int i = 0; i < n; i++)
	{
		std::cout << "ptArr[" << i << "]= " << *ptArr[i] << "\n";
	}
}

//define function return inverted array
void invert(int A[], int n) {
	int *invArr[1000];

	//invert array
	for (int i = 0; i < n; i++)
	{
		invArr[i] = &A[n - i - 1];
	}
	//in the inverted array
	for (int i = 0; i < n; i++)
	{
		std::cout << "invArr[" << i << "]= " << *invArr[i] << "\n";
	}
}

//define function return swapping 2 varibales
void swap(int* pVar1, int* pVar2) {
	int temp;
	std::cout << "value of varibalebes before swapping:" << *pVar1 << "\t" << *pVar2 << "\n";
	//swap
	temp = *pVar1;
	*pVar1 = *pVar2;
	*pVar2 = temp;
	std::cout<< "value of varibalebes after swapping:" << *pVar1 << "\t" << *pVar2 <<"\t";
}