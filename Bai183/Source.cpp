#include <iostream>
using namespace std;


void NhapMang(int[], int );
int ktCon(int[], int, int[], int m);

int main()
{
	int a[1000], b[1000];
	int n, m; cin >> n >> m;
	NhapMang(a, n);
	cout << ktCon(a, n, b, m);
	return 0;
}

void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int ktCon(int a[], int n, int b[], int m)
{
	if (n > m)
		return 0;
	int flag = 0;
	for (int vt = 0; vt <= m - n; vt++)
	{
		int co = 1;
		for (int i = 0; i < n; i++)
			if (a[i] != b[vt + i])
				co = 0;
		if (co == 1)
			flag = 1;
	}
	return flag;
}