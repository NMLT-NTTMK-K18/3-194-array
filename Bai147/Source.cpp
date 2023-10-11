#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int [], int& ,int [],int&);
void Tron(int[], int, int[], int, int[], int&);

int main()
{
	int n;
	int a[10000];
	int b[10000];
	int m;
	int c[10000];
	int p;
	Nhap(a, n,b,m);
	Tron(a, n,b,m,c,p);
	return 0;
}

void Nhap(int a[], int& n,int b[],int&m)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap m:";
	cin >> m;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cout << "b[" << i << "] = ";
		cin >> b[i];
	}
}

void Tron(int a[], int n, int b[], int m,
	int c[], int& p)
{
	int i = 0;
	int j = 0;
	p = 0;
	while (!(i >= n && j >= m))
	{
		if ((i < n && j<m && a[i]>b[j]) || (j >= m))
			c[p] = a[i];
		 else
			 c[p] = b[j];
	}
	cout << "Mang la: ";
	for (int i = 0; i < p; i++)
		cout << c[i]<<setw(9);
}
