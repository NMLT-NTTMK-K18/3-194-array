#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
bool ktToanLe(int);
void LietKe(int[], int);

int main()
{
	int a[500];
	int n;

	Nhap(a, n);
	ktToanLe(n);
	LietKe(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

bool ktToanLe(int n)
{
	int flag = true;
	int t = abs(n);
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = false;
		t /= 10;
	}
	return flag;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (ktToanLe(a[i]))
			cout << a[i] << setw(10);
	}
}