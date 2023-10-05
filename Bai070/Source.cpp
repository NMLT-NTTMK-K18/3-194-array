#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int TanSuat(int[], int, int);
void LietKe(int[], int, int[], int);

int main()
{
	int arr1[500], arr2[500];
	int n1, n2;
	
	cout << "Nhap mang 1" << endl;
	Nhap(arr1, n1);
	cout << "Nhap mang 2" << endl;
	Nhap(arr2, n2);
	LietKe(arr1, n1, arr2, n2);
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
	for (int i = 0; i < nn ; i++)
	{
		if (a[i] == x)
			dem++;
	}
	return dem;
}

void LietKe(int a[], int nn, int b[], int m)
{
	for (int i = 0; i < nn; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] == a[i])
				flag = 0;
			if (TanSuat(b, m, a[i]) == 0 && flag)
				cout << a[i] << setw(10);
	}
	for (int i = 0; i < m; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (b[j] == b[i])
				flag = 0;
		if (TanSuat(a, nn, b[i]) == 0 && flag)
			cout << b[i] << setw(10);
	}
}