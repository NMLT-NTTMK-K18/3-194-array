#include <iostream>
#include <iomanip>
using namespace std;

void NhapMang(int[], int);
int ChuSoDau(int);
void LietKe(int[], int);

int main()
{
	int a[1000]; 
	int n; cin >> n;
	NhapMang(a, n);
	LietKe(a, n);
}

void NhapMang(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}

int ChuSoDau(int n)
{
	int dt = abs(n);
	while (dt >= 10)
		dt /= 10;
	return dt;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (ChuSoDau(a[i]) % 2 != 0)
			cout << a[i]<<setw(8);
}