#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int &);
bool ktDang3m(int);
void LietKe(int[], int);

int main()
{
	int array[100];
	int n;

	Nhap(array, n);
	LietKe(array, n);

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

bool ktDang3m(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	int t = n;
	while (t > 1)
	{
		int du = t % 3;
		if (du != 0)
			flag = false;
		t /= 3;
	}
	return flag;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (ktDang3m(a[i]))
			cout << setw(5) << a[i];
}