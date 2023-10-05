#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
bool ktToanLe(int);
void LietKe(int[], int);

int main()
{
	int arr[500];
	int n;

	Nhap(arr, n);
	ktToanLe(n);
	LietKe(arr, n);
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

bool ktToanLe(int nn)
{
	int flag = true;
	int t = abs(nn);
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = false;
		t /= 10;
	}
	return flag;
}

void LietKe(int a[], int nn)
{
	for (int i = 0; i < nn; i++)
	{
		if (ktToanLe(a[i]))
			cout << a[i] << setw(10);
	}
}