#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int&, float&, float&);
void LietKe(float[], int, int, int);

int main()
{
	float arr[500];
	int n;
	float x, y;

	Nhap(arr, n, x, y);
	LietKe(arr, n, x, y);
	return 0;
}

void Nhap(float a[], int& nn, float& xx, float& yy)
{
	cout << "Nhap n: ";
	cin >> nn;
	for (int i = 0; i < nn; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
	cout << "Nhap x, y: ";
	cin >> xx >> yy;
}

void LietKe(float a[], int nn, int xx, int yy)
{
	for (int i = 0; i < nn; i++)
	{
		if (a[i] >= xx && a[i] <= yy)
			cout << a[i] << setw(10);
	}
}