#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
int Tansuat(int[], int, int);
void Lietke(int[], int);

int main()
{
	int a[100];
	int n;

	Nhap(a, n);
	Lietke(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

int Tansuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		if (a[i] == x)
			dem++;
	}
	return dem;
}

void Lietke(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		bool flag = true;
		for (int j = 0; j < i; j++)
			if (a[i] == a[j])
				flag = false;
		int kq = Tansuat(a, n, a[i]);
		if (kq > 1 && flag)
			cout << setw(6) << a[i];
	}
}