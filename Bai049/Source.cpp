#include <iostream>
#include <cmath>

using namespace std;
void Nhap(float[], int&);
float Trungbinh(float[], int);

int main()
{
	float arr[100];
	int n;

	Nhap(arr, n);
	cout << "Khoang cach trung giua cac cap gia tri: " << Trungbinh(arr, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

float Trungbinh(float a[], int n)
{
	float s = 0;
	int dem = 0;
	for (int i = 0; i <= n - 1; i++)
		for (int j = 0; j <= n - 1; j++)
			if (i != j)
			{
				s = s + abs(a[i] - a[j]);
				dem++;
			}
	if (dem == 0)
		return 0;
	return s / dem;
}