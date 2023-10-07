#include <iostream>
using namespace std;
void Nhap(int[], int&);
int DemPhanBiet(int[], int);

int main()
{
	int arr[100];
	int n;

	Nhap(arr, n);
	cout << "So luong cac gia tri phan biet: " << DemPhanBiet(arr, n);
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

int DemPhanBiet(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		bool flag = true;
		for (int j = 0; j < i; j++)
		{
			if (a[i] == a[j])
				flag = false;
		}
		if (flag == true)
			dem++;
	}
	return dem;
}