#include <iostream>
using namespace std;
void Nhap(int[], int&);
int KtChanLe(int[], int);

int main()
{
	int arr[100];
	int n;

	Nhap(arr, n);
	cout << KtChanLe(arr, n);

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

int KtChanLe(int a[], int n)
{
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if ((a[i] + a[i + 1]) % 2 == 0)
			flag = 0;
	return flag;
}