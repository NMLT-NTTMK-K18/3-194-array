#include <iostream>
using namespace std;

void Nhap(int[], int &);
int DemGiaTri(int[], int);

int main()
{
	int array[100];
	int n;

	Nhap(array, n);

	cout << "So luong gia tri lon hon tat ca cac gia tri dung truoc no: " << DemGiaTri(array, n);

	return 0;
}

void Nhap(int a[], int &n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int DemGiaTri(int a[], int n)
{
	int dem = 0;
	for (int i = 1; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] >= a[i])
				flag = 0;
		if (flag == 1)
			dem++;
	}
	return dem;
}