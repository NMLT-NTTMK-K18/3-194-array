#include <iostream>
using namespace std;
void Nhap(int[], int&);
int ucln(int, int);
int bcnn(int, int);
int TimBCNN(int[], int);

int main()
{
	int arr[100];
	int n;

	Nhap(arr, n);
	cout << "Boi chung nho nhat: " << TimBCNN(arr, n);
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

int ucln(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a + b;
}

int bcnn(int a, int b)
{
	return abs(a * b) / ucln(a, b);
}

int TimBCNN(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		lc = bcnn(lc, a[i]);
	return lc;
}