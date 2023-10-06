#include <iostream>
using namespace std;

void NhapMang(int[], int);
int ktTonTai(int[], int);

int main()
{
	int a[1000];
	int n; cin >> n;
	NhapMang(a, n);
	cout << ktTonTai(a, n);
	return 0;
}

void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int ktTonTai(int a[], int n)
{
	int flag = 0;
	for (int i = 0; i <= n - 2; i++)
		if (a[i] == 0 && a[i + 1] == 0)
			flag = 1;
	return flag;
}