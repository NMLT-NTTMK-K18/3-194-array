#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
float LonNhat(float[], int);
float NhoNhat(float[], int);
void TimDoan(float[], int, float&, float&);

int main()
{
	float a[10000];
	int n;
	float x, y;
	Nhap(a, n);
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(8);
	cout << endl;
	TimDoan(a, n, x, y);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / 200.0));
}

float LonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
		lc = a[i];
	return lc;
}

float NhoNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] < lc)
		lc = a[i];
	return lc;
}

void TimDoan(float a[], int n,float& x, float& y)
{
	x = NhoNhat(a, n);
	y = LonNhat(a, n);
	cout << "Doan chua mang la: "<<"["<<x<<","<<y<<"]";
}
