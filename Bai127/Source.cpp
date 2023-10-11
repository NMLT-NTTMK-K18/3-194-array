#include<iostream>
#include <iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;

void Nhap(int a[], int& n);
int ktCSC(int[], int);

int main()
{
	int n;
	int a[1000];
	Nhap(a, n);
	if(ktCSC(a,n))
		cout << "Mang la mot CSC";
	else
		cout << "Mang khong phai la mot CSC";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

int ktCSC(int a[], int n)
{
	if (n <= 1)
		return 0;
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if ((a[i] - a[i + 1]) != (a[0] - a[1]))
		flag = 0;
	return flag;
}
