#include <iostream>
using namespace std;

void Nhap(int[], int &);
int DemXuatHien(int[], int, int[], int);

int main()
{
	int a[100], b[100];
	int n, m;

	cout << "NHAP MANG B:" << endl;
	Nhap(b, m);

	cout << "NHAP MANG A:" << endl;
	Nhap(a, n);

	cout << "\nSo lan xuat hien cua mang A trong mang B: " << DemXuatHien(a, n, b, m);

	return 0;
}

void Nhap(int a[], int &n)
{
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap array[" << i << "]: ";
		cin >> a[i];
	}
}

int DemXuatHien(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	int dem = 0;
	for (int vt = 0; vt <= m - n; vt++)
	{
		int flag = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				flag = 0;
		if (flag == 1)
			dem++;
	}
	return dem;
}