#include <iostream>
using namespace std;

void NhapMang(float[], int);
float NhoNhat(float[], int);

int main()
{
	int n; cin >> n;
	float a[1000];
	NhapMang(a, n);
	cout << NhoNhat(a, n);
	return 0;
}

void NhapMang(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

float NhoNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] < lc)
			lc = a[i];
	return lc;
}