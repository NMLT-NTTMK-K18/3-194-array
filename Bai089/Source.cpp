#include <iostream>
using namespace std;
void Nhap(int[], int&);
bool SoNguyenTo(int);
int Dautien(int[], int);

int main()
{
	int arr[100];
	int n;

	Nhap(arr, n);
	cout << "So nguyen to dau tien la: " << Dautien(arr, n);
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

bool SoNguyenTo(int x)
{
	int dem = 0;
	int i = 1;
	while (i <= x)
	{
		if (x % i == 0)
			dem++;
		i++;
	}
	if (dem == 2)
		return true;
	else
		return false;
}

int Dautien(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if(SoNguyenTo(a[i]))
			return a[i];
	return 0;
}
