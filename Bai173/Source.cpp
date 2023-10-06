#include <iostream>
#include <iomanip>
using namespace std;

void NhapMang(int[], int);
void XuatCon(int[], int, int, int);

int main()
{
	int a[1000];
	int n; cin >> n;
	int vt; cin >> vt;
	int l; cin >> l;
	NhapMang(a, n);
	XuatCon(a, n, vt, l);
	return 0;
}

void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void XuatCon(int a[], int n, int vt, int l)
{
	for (int i = 0; i <= l - 1; i++)
		cout << setw(8) << a[vt + i];
}

