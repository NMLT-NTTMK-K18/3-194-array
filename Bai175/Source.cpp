#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void XuatCon(int[], int);

int main()
{
	int arr[500];
	int n;

	Nhap(arr, n);
	XuatCon(arr, n);
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

void XuatCon(int a[], int nn)
{
	for (int l = 1; l <= nn; l++)
	{
		for (int vt = 0; vt <= nn - l; vt++)
		{
			for (int i = 0; i < l; i++)
				cout << setw(10) << a[vt + i]; 
			cout << endl;
		}
	}
}