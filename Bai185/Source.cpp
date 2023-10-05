#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
int ktCon(float[], int, int, int);
void DuongDaiNhat(float[], int, int&, int&);
void XuatTheoViTri(float[], int, int);

int main()
{
	float arr[500];
	int n;
	int vtd, vtc;

	Nhap(arr, n);
	DuongDaiNhat(arr, n, vtd, vtc);
	XuatTheoViTri(arr, vtd, vtc);
	return 0;
}

void Nhap(float a[], int& nn)
{
	cout << "Nhap n: ";
	cin >> nn;
	for (int i = 0; i < nn; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int ktCon(float a[], int n, int vt, int l)
{
	int flag = 1;
	for (int i = 0; i <= l - 1; i++)
	{
		if (a[vt + i] <= 0)
			flag = 0;
	}
	return flag;
}

void DuongDaiNhat(float a[], int n, int& vtd, int& vtc)
{
	for (int l = n; l >= 1; l--)
	{
		for (int vt = 0; vt <= n - l; vt++)
		{
			if (ktCon(a, n, vt, l))
			{
				vtd = vt;
				vtc = vt + l - 1;
				return;
			}
		}
	}
	vtd = vtc = -1;
}

void XuatTheoViTri(float a[], int vtd, int vtc)
{
	for (int i = vtd; i <= vtc; i++)
		cout << a[i] << setw(10);
}