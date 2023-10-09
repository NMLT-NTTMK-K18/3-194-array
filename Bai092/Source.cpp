#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

void Nhap(int[], int&);
int ChuSoDau(int);
int TimGiaTri(int[], int);


int main()
{
	int n;
	int a[10000];
	Nhap(a, n);
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(8);
	cout << "\nGia tri dau tien trong mang co chu so dau la so le la: " << TimGiaTri(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() % (201) - 100;
}

int ChuSoDau(int n)
{
	int t = abs(n);
	while (t >= 10)
		t /= 10;
	return t;
}

int TimGiaTri(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (ChuSoDau(a[i]) & 1)
			return a[i];
	return 0;
}