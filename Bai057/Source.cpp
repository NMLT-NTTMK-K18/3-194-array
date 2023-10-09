#include <iostream>
#include <cstdlib>
#include <ctime>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
int DemChan(int[], int);
int DemLe(int[], int);
int TuongQuan(int[], int);

int main()
{
	int n;
	int a[100000];
	Nhap(a, n);
	cout << TuongQuan(a, n);
	for (int i = 0; i < n; i++)
		cout << a[i]<<setw(5);
	while (TuongQuan(a,n) == -1)
		cout << "Chan nhieu hon le";
	if (TuongQuan(a, n) == 0)
		cout << "Chan bang  le";
	else
		cout << "Le nhieu hon chan";
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (501) - 500;
}
int DemChan(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (i % 2 == 0)
			dem++;
	return dem;
}

int DemLe(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (i % 2 != 0)
			dem++;
	return dem;
}

int TuongQuan(int a[], int n)
{
	int x = DemChan(a, n);
	int y = DemLe(a, n);
	if (x > y)
		return -1;
	if (x < y)
		return 1;
	return 0;
}