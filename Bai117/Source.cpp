#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int a[], int& n);
int ktKhong(int[], int);

int main()
{
	int a[1000];
	int n;
	Nhap(a, n);
	if ( ktKhong(a,n)==1)
		cout << "Ton tai gia tri khong";
	else
		cout << "Khong ton tai gia tri khong";
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

int ktKhong(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == 0)
			flag = 1;
	return flag;
}
