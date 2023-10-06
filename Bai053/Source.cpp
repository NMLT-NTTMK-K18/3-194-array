#include <iostream>
#include <iomanip>
using namespace std;

void NhapMang(float[], int);
int TanSuat(float[], int,float );

int main()
{
	int n; cin >> n;
	float x; cin >> x;
	float a[1000];
	NhapMang(a, n);
	cout<<TanSuat(a, n, x);
	return 0;
}

void NhapMang(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
int TanSuat(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;

}