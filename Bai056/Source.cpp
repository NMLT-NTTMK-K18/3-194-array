#include <iostream>
using namespace std;

void Nhap(int[], int &);
bool ktHoanThien(int);
int DemHoanThien(int[], int);

int main()
{
	int array[100];
	int n;

	Nhap(array, n);
	cout << "So luong so hoan thien: " << DemHoanThien(array, n);

	return 0;
}

void Nhap(int a[], int &n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	if (s == k)
		return true;
	return false;
}

int DemHoanThien(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktHoanThien(a[i]))
			dem++;
	return dem;
}