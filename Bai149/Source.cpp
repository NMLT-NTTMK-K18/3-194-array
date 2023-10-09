#include <iostream>
using namespace std;
void Nhap(float[], int&);
void NguyenHoa(float[], int);

int main()
{
	float arr[100];
	int n;

	Nhap(arr, n);
	NguyenHoa(arr, n);
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void NguyenHoa(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			a[i] = int(a[i] + 0.5);
		else
			a[i] = int(a[i] - 0.5);
	}
	cout << "Sau nguyen hoa: \n";
	for (int i = 0; i < n; i++)
		cout << "a[" << i << "] = " << a[i] << endl;
}