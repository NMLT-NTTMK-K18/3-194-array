#include <iostream>
using namespace std;

void Nhap(int[], int&);
int ktCon(int[], int, int, int);
int DemConTang(int[], int);

int main()
{
	int arr[500];
	int n;

	Nhap(arr, n);
	cout << DemConTang(arr, n);
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

int ktCon(int a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l - 2; i++)
	{
		if (a[vt + i] > a[vt + i + 1])
			flag = 0;
	}
	return flag;
}

int DemConTang(int a[], int n)
{
	int dem = 0;
	for (int l = 2; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			if (ktCon(a, n, vt, l) == 1)
				dem++;
		}
	}
	return dem;
}