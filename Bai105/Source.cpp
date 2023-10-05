#include <iostream>
using namespace std;

void Nhap(int[], int&);
bool ktToanLe(int);
int ToanLeDauTien(int[], int);
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

bool ktToanLe(int n)
{
	int t = n;
	while (t != 0)
	{
		if (t % 2 == 0)
			return 0;
		t /= 10;
	}
	return 1;
}

int ToanLeDauTien(int a[], int nn)
{
	for (int i = 0; i < nn; i++)
	{
		if (ktToanLe)
			return a[i];
	}
	return 0;
}

int TimGiaTri(int a[], int nn)
{
	int lc = ToanLeDauTien(a, nn);
	if (lc == 0)
		return 0;
	for (int i = 0; i < nn; i++)
	{
		if (ktToanLe(a[i]) && a[i] > lc)
			lc = a[i];
	}
	return lc;
}