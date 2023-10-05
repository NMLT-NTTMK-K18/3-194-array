#include <iostream>
#include <iomanip>
using namespace std;

void NhapMang(float[], int );
float DuongDau(float[], int);
float DuongNhoNhat(float[], int);
void LietKe(float[], int);

int main()
{
	float a[1000];
	int n; cin >> n;
	NhapMang(a, n);
	LietKe(a, n);
	return 0;
}

void NhapMang(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

float DuongDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			return a[i];
}

float DuongNhoNhat(float a[], int n)
{
	float lc = DuongDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
		if (a[i] > 0 && a[i] < lc)
			lc = a[i];
	return lc;
}

void LietKe(float a[], int n)
{
	float dd = DuongNhoNhat(a, n);
	if (dd == -1)
	{
		cout << "\nKhong co gia tri duong";
		return;
	}
	for (int i = 0; i < n; i++)
		if (a[i] == dd)
			cout << i << setw(4);
}