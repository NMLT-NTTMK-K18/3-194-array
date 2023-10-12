#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int [], int& ,int [],int&);
void Tron(int[], int, int[], int, int[], int&);

int main()
{
	int a[10000], b[10000], c[100000];
	int n, m, p;
	Nhap(a, n, b, m);
	Tron(a, n, b, m, c, p);
	return 0;
}

void Nhap(int a[], int& n, int b[], int& m)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap m: ";
	cin >> m;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	for (int k = 0; k < m; k++)
	{
		cout << "b[" << k << "] = ";
		cin >> b[k];
	}
}

void Tron(int a[], int n, int b[], int m, int c[], int& p)
{
	{
		int i = n-1;
		int j = m-1;
		p = 0;
		while (!(i<0 && j<0))
		{
			if ((i>=0 && j>=0 && a[i]>b[j]) || (j<0))
				c[p++] = a[i--];
			else
				c[p++] = b[j--];
		}
    }
	cout << "Mang moi la: ";
	for (int i = 0; i < p; i++)
		cout << c[i] << setw(8);
}
