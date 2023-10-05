#include <iostream>
using namespace std;

void Nhap(float[], int&);
void LietKe(float[], int);

int main()
{
	float arr[500];
	int n;

	Nhap(arr, n);
	LietKe(arr, n);
	return 0;
}

void Nhap(float a[], int& nn)
{
	cout << "Nhap n: ";
	cin >> nn;
	for (int i = 0; i < nn; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}

void LietKe(float a[], int nn)
{
	for (int i = 0; i < nn; i++)
	{
		for (int j = 0; j < nn; j++)
		{
			if (i != j)
			{
				cout << "(" << a[i] << ",";
				cout << a[j] << ")";
				cout << ", ";
			}
		}
		cout << endl;
	}
}