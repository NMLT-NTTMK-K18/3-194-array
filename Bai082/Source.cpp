#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

void Nhap(int[], int&);
int DauTien(int[], int&);

int main()
{
	int n;
	int a[10000];
	Nhap(a, n);
	for (int i = 0; i < n; i++)
		cout << a[i]<<setw(8);
	cout << "\nChu so chan dau tien trong mang la: " << DauTien(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (201) - 100;
}

int DauTien(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			return a[i];
	return -1;
}