#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(float[], int &);
void LietKe(float[], int);

int main()
{
	float array[100];
	int n;

	Nhap(array, n);
	LietKe(array, n);

	return 0;
}

void Nhap(float a[], int &n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void LietKe(float a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		if (a[i] > abs(a[i + 1]))
			cout << a[i] << setw(5);
}