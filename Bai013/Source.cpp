#include <iostream>
#include <iomanip>
using namespace std;

void NhapMang(int[], int);
bool ktNguyenTo(int);
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

bool ktNguyenTo(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (ktNguyenTo(a[i]))
			cout << i << setw(8);
}