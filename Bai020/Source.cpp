#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&);
void LietKe(float[], int);

int main()
{
	float arr[500];
	int n;

	Nhap(arr, n);
	LietKe(arr, n);
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

void LietKe(float a[], int nn)
{
	if (nn == 1)
		return;
	if (a[0] < a[1])
		cout << a[0] << setw(10);
	for (int i = 1; i < nn - 1; i++)
	{
		if (a[i] < a[i - 1] && a[i] < a[i + 1])
			cout << a[i] << setw(10);
	}
	if (a[nn - 1] < a[nn - 2])
		cout << a[nn - 1] << setw(10);
}