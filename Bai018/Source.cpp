#include <iostream>
#include <iomanip>
using namespace std;

void NhapMang(float[], int );
float LonNhat(float[], int);
void LietKe(float[], int);
int main()
{
	float a[1000];
	int n; cin >> n;
	NhapMang(a, n);
	LietKe(a, n);
}

void NhapMang(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}

float LonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i <= n - 1; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}

void LietKe(float a[], int n)
{
	float lc = LonNhat(a, n);
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == lc)
			cout << i << setw(8);
}