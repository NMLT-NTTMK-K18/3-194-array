#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(int[], int&);
int DemCon(int[], int, int[], int);

int main()
{
	int arr[100];
	int n;
	int brr[100];
	int m;
	//m>n
	cout << "Nhap mang a: ";
	Nhap(arr, n);
	cout << "Nhap mang b: ";
	Nhap(brr, m);
	cout << "So lan xuat hien cua mang a trong mang b la: " << DemCon(arr, n, brr, m);	
	return 0;
}

void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Phan tu " << i << " = ";
		cin >> a[i];
	}
}

int DemCon(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	int dem = 0;
	for (int vt = 0; vt <= m - n; vt++)
	{
		int flag = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				flag = 0;
		if (flag == 1)
			dem++;
	}
	return dem;
}
