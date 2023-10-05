#include <iostream>
using namespace std;

void Nhap(int[], int&);
bool ktNguyenTo(int);
int LonNhat(int[], int);
int TimGiaTri(int[], int);

int main()
{
	int arr[500];
	int n;

	Nhap(arr, n);
	cout << TimGiaTri(arr, n);
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

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
	{
		if (k % i == 0)
			dem++;
	}
	if (dem == 2)
		return true;
	return false;
}

int LonNhat(int a[], int nn)
{
	int lc = a[0];
	for (int i = 0; i < nn; i++)
	{
		if (a[i] > lc)
			lc = a[i];
	}
	return lc;
}

int TimGiaTri (int a[], int nn)
{
	int lc = LonNhat(a, nn) + 1;
	while(ktNguyenTo(lc) == 0)
		lc++;
	return lc;
}