#include <iostream>
using namespace std;

struct Complex
{
	float real;
	float imag;
};
typedef struct Complex COMPLEX;

void Nhap(COMPLEX[], int &);
void Xuat(COMPLEX[], int);
void sortArray(COMPLEX[], int);
void sortACouple(COMPLEX &, COMPLEX &);

int main()
{
	int n;
	COMPLEX array[100];

	Nhap(array, n);
	sortArray(array, n);
	Xuat(array, n);

	return 0;
}

void Nhap(COMPLEX a[], int &n)
{
	cout << "Nhap n: " << endl;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "NHAP SO PHUC THU " << i + 1 << " (x, y): ";
		cin >> a[i].real;
		cin >> a[i].imag;
	}
}

void Xuat(COMPLEX a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << "SO PHUC THU " << i + 1 << ": (" << a[i].real << ", " << a[i].imag << ")" << endl;
}

void sortArray(COMPLEX a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i; j < n; j++)
			sortACouple(a[i], a[j]);
}

void sortACouple(COMPLEX &a, COMPLEX &b)
{
	if (a.real < b.real)
		return;
	COMPLEX temp = a;
	a = b;
	b = temp;
}