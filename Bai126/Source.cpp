#include <iostream>
using namespace std;

void Nhap(float[], int &);
int ktGiam(float[], int);

int main()
{
	float array[100];
	int n;

	Nhap(array, n);

	cout << "Mang giam dan: " << ((ktGiam(array, n)) ? "Yes" : "No");

	return 0;
}

void Nhap(float a[], int &n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int ktGiam(float a[], int n)
{
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] < a[i + 1])
			flag = 0;
	return flag;
}