#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void LietKe(float[], int);
void Nhap(float[], int&);

int main()
{
	float a[100000];
	int n;
	Nhap(a,n);
	LietKe(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	int i;
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (i = 0; i < n; i++)
		a[i] = -100.0 + (rand() / (RAND_MAX / (100.0 - (-100.0))));
}
void LietKe(float a[],int n)
{
	cout << "Cac so duong trong mang mot chieu cac so thuc la: ";
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > 0)
			cout << setw(8) << setprecision(5) << a[i];
}

