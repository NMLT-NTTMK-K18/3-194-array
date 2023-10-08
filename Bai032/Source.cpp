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
	for (int k = 0; k < n; k++)
		a[k] = rand() % (200 + 1) - 100;
	for (int j = 0; j < n; j++)
		a[j] = rand() % (200 + 1) - 100;
	
}

void LietKe(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		for (int j = 0; j <= n - 1; j++)
			for (int k = 0; k <= k - 1;k++)
				if (i != j && j != k && i != k &&
					a[i] == a[j] + a[k])
				{
					cout << "(" << a[i] << "," << a[j];
					cout << "," << a[k] << ")" << endl;
				}
}