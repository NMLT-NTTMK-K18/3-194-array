#include <iostream>
using namespace std;
void Nhap(int[], int&);
bool KtNguyento(int);
void Xaydung(int[], int, int[], int&);

int main()
{
	int arr[100];
	int n;
	int brr[100];
	int k;

	Nhap(arr, n);
	Xaydung(arr, n, brr, k);
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

bool KtNguyento(int k)
{
	int dem = 0;
	int i = 1;
	while (i <= k)
	{
		if (k % i == 0)
			dem++;
		i++;
	}
	if (dem == 2)
		return true;
	return false;
}

void Xaydung(int a[], int n, int b[], int& k)
{
	k = 0;
	cout << "Mang b gom cac so nguyen to cua mang a la: \n";
	for (int i = 0; i < n; i++)
		if (KtNguyento(a[i]))
		{
			b[k] = a[i];
			cout << "b[" << k << "] = " << b[k] << "\n";
			k++;
		}
}