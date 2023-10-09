#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

void Nhap(int[], int&);
bool ktHoanThien(int);
int HoanThienDau(int[], int);
int TimGiaTri(int[], int);

int main()
{
	int n;
	int a[10000];
	Nhap(a, n);
	for (int i = 0; i < n; i++)
		cout << a[i] << setw(8);
	cout << "\nHoan thien nho nha trong mang la: " << TimGiaTri(a,n);
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

bool ktHoanThien(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
		if (k % i == 0)
			s = s + i;
	if (s == k)
		return true;
	return false;
}

int HoanThienDau(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktHoanThien(a[i]) == 1)
			return a[i];
	return -1;
}

int TimGiaTri(int a[], int n)
{
	int lc = HoanThienDau(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
		if (ktHoanThien(a[i]) == 1 && a[i] < lc)
			lc = a[i];
	return lc;
}