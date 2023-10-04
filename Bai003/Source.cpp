#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
float TongAm(float[], int);

int main()
{
	float b[100];
	int k;
	
	Nhap(b, k);
	cout << "\nMang ban dau : ";
	Xuat(b, k);
	
	float kq = TongAm(b, k);
	cout << "\nTong cac gia tri am : " << setprecision(2) << kq;
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;	
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = (rand() / (RAND_MAX / (100.0 - (-100.0)))) - 100.0;
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << setprecision(2) << a[i];
}

float TongAm(float a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			s += a[i];
	return s;
}