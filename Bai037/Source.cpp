#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void Nhap(int[], int&);
bool ktDoiXung(int);
int TongDoiXung(int[], int);

int main()
{
	int a[100000];
	int n;
	Nhap(a, n);
	cout << "s = " << TongDoiXung(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
		a[i] = rand() % (2000) - 100;
}

bool ktDoiXung(int n)
{
	int t = abs(n);
	int dn = 0;
	while (t != 0)
	{
		dn = dn * 10 + t % 10;
		t /= 10;
	}
	if (dn == abs(n))
		return true;
	return false;
}

int TongDoiXung(int a[], int n)
{
	cout << "Tong cac gia tri doi xung trong mang cac so nguyen la: ";
	int s = 0;
	for (int i = 0; i <= n - 1; i++)
		if (ktDoiXung(a[i]))
			s += a[i];
	return s;
}