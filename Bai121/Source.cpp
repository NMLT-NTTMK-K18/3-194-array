#include <iostream>
#include <cmath>
using namespace std;

void Nhap(int[], int &);
bool ktHoanThien(int);
int ktTinhChat(int[], int);

int main()
{
	int array[100];
	int n;

	Nhap(array, n);

	cout << "Mang khong co ton tai so hoan thien lon hon 256: " << ktTinhChat(array, n) << endl;

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

int ktTinhChat(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktHoanThien(a[i]) && a[i] > 256)
			dem++;
	if (dem == 0)
		return 1;
	return 0;
}