#include <iostream>
using namespace std;
void Nhap(int[], int&);
bool ktNguyento(int);
void XoaVitri(int[], int&, int);
void XoaNguyento(int[], int&);

int main()
{
	int arr[100];
	int n;

	Nhap(arr, n);
	XoaNguyento(arr, n);
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

bool ktNguyento(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

void XoaVitri(int a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}

void XoaNguyento(int a[], int& n)
{
	for (int i = n - 1; i >= 0; i--)
		if (ktNguyento(a[i]))
			XoaVitri(a, n, i);
	cout << "Sau khi xoa so nguyen to: \n";
	for (int i = 0; i < n; i++)
		cout << "a[" << i << "] = " << a[i] << endl;
}