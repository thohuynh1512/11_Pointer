/*
Sử dụng con trỏ trong C++, bạn hãy viết một chương trình C++ để nhận dữ liệu từ người dùng 
và tìm giá trị lớn nhất của một tập dữ liệu nội bộ.
*****************************************************
In ra mang vua nhap su dung con tro
*****************************************************
in các phần tử của mảng theo thứ tự đảo ngược bởi sử dụng một con trỏ.
*/

#include <iostream>
#include"Header.h"
using namespace std;

int main()
{
	int n;
	cout << "nhap so phan tu n =";
	cin >> n;
	int A[1000];
	//so phan tu trong mang can nhap
	

	//call function cinfunc -- nhap mang
	cinfunc(A, n);

	//call function to print max value
	cout << "max value is " << maxfunc(A, n) << endl;

	//call function to print pointer array
	in_mang(A, n);

	////call function to print inverted array
	invert(A, n);

}

