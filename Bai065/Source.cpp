#include <iostream>
using namespace std;

void Nhap(float[], int &);
int DemPhanBiet(float[], int);

int main()
{
	float array[100];
	int n;

	Nhap(array, n);
	cout << "Dem phan biet: " << DemPhanBiet(array, n);

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

int DemPhanBiet(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		bool flag = true;
		for (int j = 0; j < i; j++)
			if (a[j] == a[i])
				flag = false;
		if (flag == true)
			dem++;
	}
	return dem;
}