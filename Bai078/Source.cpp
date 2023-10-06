#include <iostream>
using namespace std;
void NhapMang(float[], int);
float TimX(float[], int);

int main()
{
	int n; cin >> n;
	float a[1000];
	NhapMang(a, n);
	cout << "[" << -TimX(a, n) << "," << TimX(a, n) << "]";
	return 0;
}

void NhapMang(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

float TimX(float a[], int n)
{
	float lc = abs(a[0]);
	for (int i = 0; i < n; i++)
		if (abs(a[i]) > lc)
			lc = abs(a[i]);
	return lc;
}