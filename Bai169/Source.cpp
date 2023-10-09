#include <iostream>
using namespace std;
void Nhap(float[], int&, float&, int&);
void ThemVitri(float[], int& n, float, int);

int main()
{
	float arr[100];
	int n;
	float x;
	int k;

	Nhap(arr, n, x, k);
	ThemVitri(arr, n, x, k);
	return 0;
}

void Nhap(float a[], int& n, float& x, int& k)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << "Nhap gia tri x muon them vao mang: ";
	cin >> x;
	cout << "Nhap vi tri muon them gia tri x vao: ";
	cin >> k;
}

void ThemVitri(float a[], int& n, float x, int k)
{
	for (int i = n; i >= k + 1; i--)
		a[i] = a[i - 1];
	a[k] = x;
	n++;
	cout << "Sau khi them: \n";
	for (int i = 0; i < n; i++)
		cout << "a[" << i << "] = " << a[i] << endl;
}
