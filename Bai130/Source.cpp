#include <iostream>
using namespace std;

void Nhap(int[], int&);
int TanSuat(int[], int, int);
int ktThuoc(int[], int, int[], int);

int main()
{
	int arr1[500];
	int arr2[500];
	int n1, n2;

	cout << "Nhap mang 1:" << endl;
	Nhap(arr1, n1);
	cout << "Nhap mang 2:" << endl;
	Nhap(arr2, n2);
	cout << ktThuoc(arr1, n1, arr2, n2);
	return 0;
}

void Nhap(int a[], int& nn)
{
	cout << "Nhap n: ";
	cin >> nn;
	for (int i = 0; i < nn; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int TanSuat(int a[], int nn, int x)
{
	int dem = 0;
	for (int i = 0; i < nn; i++)
	{
		if (a[i] == x)
			dem++;
	}
	return dem;
}

int ktThuoc(int a[],int nn,int b[],int mm)
{
	int flag = 1;
	for (int i = 0; i < nn; i++)
	{
		if (TanSuat(b, mm, a[i]) == 0)
			flag = 0;
	}
	return flag;
}