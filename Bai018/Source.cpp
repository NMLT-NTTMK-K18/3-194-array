#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

string getInputFileName(int);
string getOutputFileName(int);
void Nhap(int[], int&, string);
void Xuat(int[], int, string);

void Xuat(int[], int);
void ThemViTri(int[], int&, int, int);
void ThemKhong(int[], int&);

int main()
{
	int b[200000];
	int n;
	for (int i = 0; i <= 13; i++)
	{
		string FileName = getInputFileName(i);
		Nhap(b, n, FileName);
		cout << "\n" << FileName << endl;
		Xuat(b, n);
		ThemKhong(b, n);

		cout << "\nMang sau khi bien doi:";
		Xuat(b, n);

		FileName = getOutputFileName(i);
		Xuat(b, n, FileName);
	}
	return 1;
}

string getInputFileName(int n)
{
	string fileName = string("intdata");
	if (n < 10)
		fileName += "0" + to_string(n) + ".inp";
	else
		fileName += to_string(n) + ".inp";
	return fileName;
}

string getOutputFileName(int n)
{
	string fileName = string("intdata");
	if (n < 10)
		fileName = "0" + to_string(n) + ".out";
	else
		fileName = to_string(n) + ".out";
	return fileName;
}

void Nhap(int a[], int& n, string filename)
{
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i < n; i++)
		fi >> a[i];
}

void Xuat(int a[], int n, string filename)
{
	ofstream fo(filename);
	fo << n << endl;
	for (int i = 0; i < n; i++)
		fo << setw(8) << a[i];
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(8) << a[i];
}

void ThemViTri(int a[], int& n, int vt, int x)
{
	for (int i = n - 1; i >= vt; i--)
		a[i + 1] = a[i];
	a[vt] = x;
	n++;
}

void ThemKhong(int a[], int& n)
{
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 != 0)
			ThemViTri(a, n, i + 1, 0);
}