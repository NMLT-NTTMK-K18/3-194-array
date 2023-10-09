#include <iostream>
#include<cstdlib>;
#include<ctime>;
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);

int main()
{
	int n;
	float a[100000];
	Nhap(a, n);
	Xuat(a, n);
	return 0;

}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
	{
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
	}
}

void Xuat(float a[], int n)
{
	cout << n << endl;
	cout << "Mang la: ";
	for (int i = 0; i <= n - 1; i++)
		cout << setw(10) << setprecision(5) << a[i];
}
