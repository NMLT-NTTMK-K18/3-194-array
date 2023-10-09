#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
void Nhap(string, float[], int&);
void Xuat(float[], int);

int main()
{
	float a[100];
	int n;
	string filename;

	Nhap(filename, a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(string filename, float a[], int& n)
{
	cout << "Nhap ten file: ";
	cin >> filename;
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i < n; i++)
		fi >> a[i];
}
void Xuat(float a[], int n)
{
	cout << n << endl;
	for (int i = 0; i < n; i++)
		cout << setw(10) << setprecision(5) << a[i];
}