#include <iostream>
using namespace std;

void NhapMang(int[], int);
bool KtDang2m(int);
int TimGiaTri(int[], int);

int main()
{
	int a[1000];
	int n; cin >> n;
	NhapMang(a, n);
	cout << TimGiaTri(a, n);
	return 0;
}

void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

bool KtDang2m(int n)
{
	if (n < 1)
		return false;
	bool flag = true;
	int t = abs(n);
	while (t > 1)
	{
		int du = t % 2;
		if (du != 0)
			flag = false;
		t /= 2;
	}
	return flag;
}

int TimGiaTri(int a[], int n)
{
	for (int i = 0; i < n; i++)
		if (KtDang2m(a[i]))
			return a[i];
	return 0;
}