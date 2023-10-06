#include <iostream>
using namespace std;

void Nhap(int[], int &);
bool ktDoiXung(int);
int DoiXungDau(int[], int);

int main()
{
	int array[100];
	int n;

	Nhap(array, n);

	int x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "So doi xung dau tien: " << DoiXungDau(array, n);

	return 0;
}

void Nhap(int a[], int &n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

bool ktDoiXung(int n)
{
	int t = n;
	int dn = 0;
	while (t != 0)
	{
		dn = dn * 10 + t % 10;
		t /= 10;
	}
	if (dn == n)
		return true;
	return false;
}

int DoiXungDau(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (ktDoiXung(a[i]))
			return a[i];
	return 10;
}