#include <iostream>
using namespace std;
void Nhap(int[], int&);
bool Doixung(int);
int Demdoixung(int[], int);

int main()
{
	int arr[100];
	int n;

	Nhap(arr, n);
	cout << "So luong gia tri doi xung: " << Demdoixung(arr, n);
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

bool Doixung(int nn)
{
	int dn = 0;
	int dv = 0;
	int t = nn;
	while (t != 0)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	if (dn == nn)
		return true;
	return false;
}

int Demdoixung(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		if (Doixung(a[i]))
			dem++;
	}
	return dem;
}