#include <iostream>
using namespace std;

void NhapMang(int[], int);
int ktBang(int[], int);

int main()
{
	int a[1000];
	int n; cin >> n;
	NhapMang(a, n);
	cout << ktBang(a, n);
	return 0;
}

void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int ktBang(int a[], int n)
{
	int flag = 1;
	for (int i = 0; i <= n - 2; i++)
		if (a[i]!=a[0])
			flag = 0;
	return flag;
}