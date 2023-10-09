#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
int DemCucDai(float[], int);
int DemCucTieu(float[], int);
int DemCucTri(float[], int);

int main()
{
	int n;
	float a[10000];
	Nhap(a, n);
	cout << "Mang la: ";
	for (int i = 0; i < n; i++)
		cout << a[i]<<setw(8);
	cout << "\nSo luong diem cuc tri trong mang la: " << DemCucTri(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] =-100.0+(rand()/(RAND_MAX/200.0));
}

int DemCucDai(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	if(a[0]>a[1])
		dem++;
	for (int i = 1; i <= n - 2; i++)
		if (a[i] > a[i - 1] && a[i] > a[i + 1])
			dem++;
	if (a[n - 1] > a[n - 2])
		dem++;
	return dem;
}

int DemCucTieu(float a[], int n)
{
	if (n <= 1)
		return 0;
	int dem = 0;
	if (a[0] < a[1])
		dem++;
	for (int i = 1; i <= n - 2; i++)
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
			dem++;
	if (a[n - 1] < a[n - 2])
		dem++;
	return dem;
}

int DemCucTri(float a[], int n)
{
	int x = DemCucDai(a, n);
	int y = DemCucTieu(a, n);
	int s = x + y;
	return s;
}