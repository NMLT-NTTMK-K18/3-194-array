#include <iostream>
#include <iomanip>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO [], int&);
void Nhap(PHANSO&);
void SapXep(PHANSO[], int);
void HoanVi(PHANSO[], int);
void Xuat(PHANSO[], int);


int main()
{
	PHANSO a[10000];
	int n;
	Nhap(a, n);
	SapXep(a, n);
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu : ";
	cin >> x.Tu;
	cout << "Nhap mau : ";
	cin >> x.Mau;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]:";
		cout << endl;
		Nhap(a[i]);
	}
}
int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)(x.Tu / x.Mau);
	float b = (float)(y.Tu / y.Mau);
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}



void Xuat(PHANSO x)
{
	cout << x.Tu << "/" << x.Mau<<setw(8);
}

void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
		Xuat(a[i]);
}

void SapXep(PHANSO a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
		if (SoSanh(a[i], a[j]) == 1)
		{
			PHANSO temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}

		Xuat(a, n);
		cout << "    ";
}