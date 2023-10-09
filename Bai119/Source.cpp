#include <iostream>
using namespace std;
void Nhap(int[], int&);
int KtChan(int[], int);

int main()
{
	int arr[100];
	int n;

	Nhap(arr, n);
	cout << KtChan(arr, n);
	
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

int KtChan(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			flag = 1;
	return flag;
}