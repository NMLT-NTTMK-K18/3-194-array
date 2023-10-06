#include <iostream>
using namespace std;

void NhapMang(int[], int);
int ktDoiXung(int[], int);

int main()
{
	int a[1000];
	int n; cin >> n;
	NhapMang(a, n);
	cout << ktDoiXung(a, n);
	return 0;
}

void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int ktDoiXung(int a[], int n)
{
	int flag = 1;
	int d = 0;
	int c = n - 1;
	while (d < c)
	{
		if (a[d] != a[c])
			flag = 0;
		d++;
		c--;
	}
	return flag;
}