#include <iostream>
using namespace std;

void Nhap(int[], int &);
int TongCon(int[], int, int, int);
void TimCon(int[], int, int, int &, int &);

int main()
{
	int array[100];
	int n;

	Nhap(array, n);

	int M;
	cout << "Nhap M: ";
	cin >> M;

	int vtd, vtc;

	TimCon(array, n, M, vtd, vtc);

	cout << "Vi tri: " << vtd << endl;
	cout << "Do dai: " << vtc - vtd + 1 << endl;

	return 0;
}

void Nhap(int a[], int &n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

int TongCon(int a[], int n, int vt, int l)
{
	int s = 0;
	for (int i = 0; i <= l - 1; i++)
		s = s + a[vt + i];
	return s;
}

void TimCon(int a[], int n, int M, int &vtd, int &vtc)
{
	for (int l = 1; l <= n; l++)
		for (int vt = 0; vt <= n - l; vt++)
			if (TongCon(a, n, vt, l) == M)
			{
				vtd = vt;
				vtc = vt + l - 1;
				return;
			}
	vtd = vtc = -1;
}