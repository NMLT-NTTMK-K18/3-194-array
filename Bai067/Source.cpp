#include <iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>

using namespace std;
void Nhap(int[], int&,int[],int&);
int TanSuat(int[], int, int);
int DemGiaTri(int[], int, int[], int);

int main()
{
	int n;
	int a[10000];
	int m;
	int b[10000];
	Nhap(a, n,b,m);
	
	cout << "Mang a la: ";
	for (int i = 0; i < n; i++)
		cout << a[i]<<setw(8);
	cout << "\nMang b la: ";
	for (int i = 0; i < m; i++)
		cout << b[i]<<setw(8);
	cout << "\nSo luong gia tri chi xuat hien mot trong hai mang so nguyen la: "<<DemGiaTri(a, n, b, m);
	return 0;
}

void Nhap(int a[], int& n,int b[],int& m)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "\nNhap m: ";
	cin >> m;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (501) - 500;
	for (int i = 0; i < m; i++)
		b[i] = rand() % (501) - 500;
}

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int DemGiaTri(int a[], int n, int b[], int m)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] == a[i])
				flag = 0;
		if (TanSuat(b, m, a[i]) == 0 && flag == 1)
			dem++;
	}
	for (int i = 0; i < m; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (b[j] == b[i])
				flag = 0;
		if (TanSuat(a, n, b[i]) == 0 && flag == 1)
			dem++;
	}
	return dem;
}
