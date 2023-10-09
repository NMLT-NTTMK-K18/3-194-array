#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void LietKe(int[], int);
void Nhap(int[], int&);

int main()
{
	int n;
	int a[100000];
	Nhap(a, n);
	LietKe(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
	{
		a[i] = rand()%(200+1)-100;
	}
}

void LietKe(int a[], int n)
{ 
	cout << "Cac gia tri chan trong mang la: ";
	for (int i = 0; i <= n - 1; i++)
		if (a[i] % 2 == 0)
			cout << a[i] << setw(5);
	cout << endl;
	cout << "Cac gia tri le trong mang la: ";
	for (int i = 0; i <= n; i++)
		if (a[i] % 2 != 0)
			cout  << a[i] << setw(5);
}
