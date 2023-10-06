#include <iostream>
#include <iomanip>
using namespace std;

void NhapMang(int[], int);
int TanSuat(int[], int, int);
void LietKe(int[], int);

int main()
{
	int n; cin >> n;
	int a[10000];
	NhapMang(a, n);
	LietKe(a, n);
	return 0;
}

void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int TanSuat(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int kq = TanSuat(a, n, a[i]);
		if (kq == 1)
			cout << setw(8) << a[i];
	}
}