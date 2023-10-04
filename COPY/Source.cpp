#include<iostream>
using namespace std;
void Nhap(int&);
int Xuly(int);

int main()
{
	int n;
	Nhap(n);
	cout << "k = " << Xuly(n);
	return 0;
}

void Nhap(int& nn)
{
	int n;
	cout << "Nhap n: ";
	cin >> nn;
}

int Xuly(int nn)
{
	int t = 1;
	int k = 1;

	while (2 * t <= nn)
	{
		t = t * 2;
		k = k + 1;
	}
	return k;
}
