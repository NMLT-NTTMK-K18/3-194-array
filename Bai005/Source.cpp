#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
void LietKe(int[], int);

int main()
{
	int arr[500];
	int n;

	Nhap(arr, n);
	LietKe(arr, n);
	return 0;
}

void Nhap(int a[], int& nn)
{
	cout << "Nhap n: ";
	cin >> nn;
	for (int i = 0; i < nn; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void LietKe(int a[], int nn)
{
	for (int i = 0; i < nn; i++)
	{
		if (a[i] % 2 == 0)
			cout << a[i] << setw(10);
	}
}