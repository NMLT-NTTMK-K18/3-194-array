#include <iostream>
#include <cmath>
using namespace std;

struct ToaDo
{
	float Hoanhdo;
	float Tungdo;
};
typedef struct ToaDo TOADO;

void Nhap(TOADO[], int&);
float Khoangcach(float, float);
void Swap(TOADO&, TOADO&);
void InterchangeSort(TOADO[], int);
void Xuat(TOADO[], int);

int main()
{
	TOADO arr[100];
	int n;

	Nhap(arr, n);
	InterchangeSort(arr, n);
	Xuat(arr, n);
	return 0;
}

void Nhap(TOADO a[], int& n)
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap toa do (x, y) thu " << i + 1 << ": ";
		cin >> a[i].Hoanhdo;
		cin >> a[i].Tungdo;
		cout << "(" << a[i].Hoanhdo << ", " << a[i].Tungdo << ")" << endl;
	}
}

float Khoangcach(float x, float y)
{
	return sqrt(x * x + y * y);
}

void Swap(TOADO &a, TOADO &b)
{
	TOADO temp = a;
	a = b;
	b = temp;
}

void InterchangeSort(TOADO a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (Khoangcach(a[i].Hoanhdo, a[i].Tungdo) < Khoangcach(a[j].Hoanhdo, a[j].Tungdo))
				Swap(a[i], a[j]);
}

void Xuat(TOADO a[], int n)
{
	cout << "Toa do co khoang cach toi goc toa do theo thu tu giam dan la: \n";
	for (int i = 0; i < n; i++)
		cout << "(" << a[i].Hoanhdo << ", " << a[i].Tungdo << ")" << endl;
}