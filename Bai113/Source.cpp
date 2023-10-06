#include <iostream>
using namespace std;

void NhapMang(int[], int);
int ViTriLonNhat(int[], int);
int TimChuSo(int[], int);

int main()
{
	int a[1000];
	int n; cin >> n;
	NhapMang(a, n);
	cout << TimChuSo(a, n);
	return 0;
}

void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int ViTriLonNhat(int a[], int n)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > a[lc])
			lc = i;
	return lc;
}

int TimChuSo(int a[], int n)
{
	int dem[10] = { 0 };
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
			dem[0]++;
		int t = abs(a[i]);
		while (t != 0)
		{
			int dv = t % 10;
			dem[dv]++;
			t /= 10;
		}
	}
	return ViTriLonNhat(dem, 10);
}