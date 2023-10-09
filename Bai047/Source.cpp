#include <iostream>
using namespace std;
void Nhap(float[], int&,float&);
float TongGiaTri(float[], int, float);
int DemGiaTri(float[], int, float);
float TrungBinhCong(float[], int, float);

int main()
{
	int n;
	float a[100000];
	float x;
	Nhap(a, n, x);
	cout << "Trung binh cong cac gia tri lon hon " << x << " la: " << TrungBinhCong(a, n, x);

	return 0;
}

void Nhap(float a[], int& n,float& x)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "x = ";
	cin >> x;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = -100.0 + (rand() / ((RAND_MAX) / (100.0 - (-100.0))));
}

float TongGiaTri(float a[], int n, float x)
{
	float s = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > x)
			s = s + a[i];
	return s;
}

int DemGiaTri(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > x)
		dem++;
	return dem;
}
float TrungBinhCong(float a[], int n, float x)
{
	float s = TongGiaTri(a, n, x);
	int dem = DemGiaTri(a, n, x);
	cout << "Trung binh cong cac gia tri lon hon gia tri " << x << " trong mang la: ";
	if (dem == 0)
		return 0;
	return s/dem;
}