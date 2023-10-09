#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void LietKe(float[], int);
void Nhap(float[], int&);

int main()
{
	float a[1000];
	int n;
	Nhap(a, n);

	LietKe(a, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "Nhap a" << i << " : ";
		cin>> a[i] ;
	}
}

void LietKe(float a[], int n)
{
	cout << "Bo ba gia tri thoa dieu kien x=y+z va x,y,z la ba gia tri khac nhau trong mang la: ";
	for (int i = 0; i <= n - 1; i++)
		for (int j = 0; j <= n - 1; j++)
			for (int k = 0; k <= n - 1; k++)
				if (i != j && j != k && i != k &&
					a[i] == a[j] + a[k])
				{
					cout << "(" << a[i] << ", " << a[j];
					cout << ", " << a[k] << ")" << endl;
				}
}