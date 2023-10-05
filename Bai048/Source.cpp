#include <iostream>
#include <iomanip>
using namespace std;
void NhapMang(float[], int);
float TichDuong(float[], int);
int DiemDuong(float[], int);
float TrungBinhNhan(float[], int);

int main()
{
	float a[1000];
	int n; cin >> n;
	NhapMang(a, n);
	return 0;
	cout << TrungBinhNhan(a, n);
}

void NhapMang(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

float TichDuong(float a[], int n)
{
	float T = 01;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			T *= a[i];
	return T;
}

int DemDuong(float a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			dem++;
	float TichDuong(float[], int);
	return dem;
}

float TrungBinhNhan(float a[], int n)
{
	float T = TichDuong(a, n);
	int dem = DemDuong(a, n);
	if (dem == 0)
		return 0;
	return pow(T, float(1) / dem);
}