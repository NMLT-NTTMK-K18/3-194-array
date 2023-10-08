#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(float[], int&);
float AmDau(float[], int);
void LietKe(float[], int);

int main()
{
	float a[100000];
	int n;
	Nhap(a, n);
	LietKe(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout<<"Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = -100 + (rand() / ((RAND_MAX) / (100 - (-100))));
	for (int i = 0; i <= n - 1; i++)
		cout << a[i]<<setw(5);
}

float AmDau(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] < 0)
			return a[i];
	return 0;
}

void LietKe(float a[], int n)
{
	float ad = AmDau(a,n);
	if (ad == 0)
	{
		cout << "\nKhong co gia tri am";
		return;
	}
	for (int i = 0; i <= n - 1; i++)
		if (a[i] == ad)
			cout << i<<setw(5);
}
