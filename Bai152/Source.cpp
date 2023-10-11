#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int a[], int& n);
bool ktNguyenTo(int);
void DuaVeCuoi(int[], int);

int main()
{
	int n;
	int a[10000];
	Nhap(a, n);
	DuaVeCuoi(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
		dem++;
	if (dem <= 2)
		return true;
	return false;
}

void DuaVeCuoi(int a[], int n)
{
	int vt = n - 1;
	for (int i = n - 1; i >= 0; i--)
		if (ktNguyenTo(a[i]))
		{
			int temp = a[i];
			a[i] = a[vt];
			a[vt] = temp;
			vt--;
		}
	cout << "Mang moi la: ";
	for (int i = 0; i < n; i++)
		cout << a[i]<<setw(9);
}
