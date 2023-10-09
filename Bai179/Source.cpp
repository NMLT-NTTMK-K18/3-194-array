#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
bool ktCon(int[], int, int, int);
void Lietke(int[], int);

int main()
{
	int arr[100];
	int n;
	int l;

	Nhap(arr, n);
	Lietke(arr, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

bool ktCon(int a[], int n, int vt, int l)
{
	for (int i = 0; i < l; i++)
		if (a[i + vt] < 0)
			return false;
	return true;
}

void Lietke(int a[], int n)
{
	for (int l = 2; l <= n; l++)
	{
		for (int vt = 0; vt <= n - l; vt++)
			if (ktCon(a, n, vt, l))
			{
				for (int i = 0; i < l; i++)
					cout << setw(5) << a[vt + i];
				cout << endl;
			}
	}
}