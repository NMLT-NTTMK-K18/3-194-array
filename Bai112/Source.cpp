#include <iostream>
#include <iomanip>
using namespace std;

int TanSuat(int[], int, int);
int TimGiaTri(int[], int);
void Nhap(int a[], int& n);
void LietKe(int[], int);

int main()
{
	int n;
	int a[10000];
	Nhap(a, n);
	LietKe(a, n);
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

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int TimGiaTri(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i <= n - 1; i++)
		if (TanSuat(a, n, a[i]) > TanSuat(a, n, lc))
			lc = a[i];
	return lc;
}

void LietKe(int a[], int n)
{
	int lc = TimGiaTri(a, n);
	int ts = TanSuat(a, n, lc);
	cout << "So nguyen xuat hien nhieu nhat trong mang la: ";
	for (int i = 0; i <= n - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j <= i - 1; j++)
			if (a[j] == a[i])
			flag = 0;
		if (TanSuat(a, n, a[i]) == ts && flag)
			cout << a[i] << setw(8);
	}
}
