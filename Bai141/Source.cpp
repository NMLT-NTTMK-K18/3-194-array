#include <iostream>
using namespace std;

void Nhap(int[], int &);
void Xuat(int[], int);
bool ktHoanThien(int);
void HoanThienGiam(int[], int);
void HoanVi(int &, int &);

int main()
{
	int array[100];
	int n;

	Nhap(array, n);

	HoanThienGiam(array, n);

	cout << "Array cac so hoan thien giam dan:" << endl;
	Xuat(array, n);

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

void Xuat(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cout << "array[" << i << "]: " << a[i] << endl;
}

void HoanVi(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
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

void HoanThienGiam(int a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (ktHoanThien(a[i]) &&
				ktHoanThien(a[j]) && a[i] < a[j])
				HoanVi(a[i], a[j]);
}