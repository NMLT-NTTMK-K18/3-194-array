#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
float LonNhat(float[], int);

int main()
{
	float a[10000];
	int n;
	Nhap(a, n);
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(8);
	cout << endl;
	cout<<"Gia tri lon nhat trong mang la: "<<LonNhat(a, n);
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

