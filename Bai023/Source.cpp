#include <iostream>
#include <iomanip>
using namespace std;
void NhapMang(int[], int);
void LietKe(int[], int);
int main()
{
	int a[1000];
	int n; cin >> n;
	NhapMang(a, n);
	LietKe(a, n);
	return 0;
}
void NhapMang(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		cin >> a[i];
}

void LietKe(int a[], int n)
{
	if (n <= 1)
	{
		return;
	}
	if (a[0] % 2 == 0 && a[1] % 2 == 0)
		cout << a[0];
	for (int i = 1; i <= n - 2; i++)
		if (a[i] % 2 == 0)
			if (a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0)
				cout << a[i] << setw(4);
	if (a[n - 1] % 2 == 0 && a[n - 2] % 2 == 0)
		cout << a[n - 1];
}