#include <iostream>
using namespace std;
void Nhap(int[], int&);
int VitriNhoNhat(int[], int);
int TimChuso(int[], int);

int main()
{
	int arr[100];
	int n;

	Nhap(arr, n);
	cout << "Chu so xuat hien it nhat trong mang: " << TimChuso(arr, n);
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

int VitriNhoNhat(int a[], int n)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < a[lc])
			lc = i;
	return lc;
}

int TimChuso(int a[], int n)
{
	int dem[10] = { 0,0,0,0,0,0,0,0,0,0 };
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
			dem[0]++;
		int t = abs(a[i]);
		while (t != 0)
		{
			int dv = t % 10;
			dem[dv]++;
			t = t / 10;
		}
	}
	return VitriNhoNhat(dem, 10);
}