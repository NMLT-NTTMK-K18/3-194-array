#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(float[], int &);
void LietKe(float[], int);

int main()
{
	float array[100];
	int n;

	Nhap(array, n);
	LietKe(array, n);

	return 0;
}

void Nhap(float a[], int &n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void LietKe(float a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		for (int j = 0; j <= n - 1; j++)
			if (i != j && a[i] <= a[j])
				cout << "(" << a[i] << ", " << a[j] << ")" << endl;
}