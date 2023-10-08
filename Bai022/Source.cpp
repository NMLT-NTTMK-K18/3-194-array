#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void LietKe(int[], int);
void Nhap(int[], int&);
int main()
{
	int a[100000];
		int n;
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
		a[i] = rand() % (200 + 1) - 100;
}

void LietKe(int a[], int n)
{
	for (int i = 1; i <= n - 2; i++)
		if(a[i]<abs(a[i+1])&&a[i]>a[i-1])
			cout << a[i] << setw(5);
}