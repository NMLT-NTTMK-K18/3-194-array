#include <iostream>
using namespace std;

void Nhap(float[], int&);
int DemPhanBiet(float[], int);

int main()
{
	float arr[500];
	int n;

	Nhap(arr, n);
	cout << DemPhanBiet(arr, n);
	return 0;
}

void Nhap(float a[], int& nn)
{
	cout << "Nhap n: ";
	cin >> nn;
	for (int i = 0; i < nn; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int DemPhanBiet(float a[], int nn)
{
	int dem = 0;
	for (int i = 0; i < nn; i++)
	{
		bool flag = true;
		for (int j = 0; j < i; j++)
		{
			if (a[j] == a[i])
				flag = false;
		}
		if (flag == true)
			dem++;
	}
	return dem;
}