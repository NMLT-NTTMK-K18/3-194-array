#include <iostream>
using namespace std;

void Nhap(float[], int &);
void Xuat(float[], int);
void ThemBaoToan(float[], int, float);
void insertIntoArray(float[], int, float, int);

int main()
{
    float array[100];
    int n;

    Nhap(array, n);

    cout << "Mang xep giam dan:" << endl;
    Xuat(array, n);

    return 0;
}

void Xuat(float a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
        cout << "array[" << i << "]: " << a[i] << endl;
}

void insertIntoArray(float a[], int n, float x, int i)
{
    for (int j = n; j >= i + 1; j--)
        a[j] = a[j - 1];
    a[i] = x;
}

void ThemBaoToan(float a[], int i, float x)
{
    a[i] = x;
    int right_after_index = i;
    for (int j = 0; j < i; j++)
        if ((a[j] <= a[right_after_index]) && (a[j] <= x))
        {
            right_after_index = j;
            break;
        }
    if (right_after_index != i)
        insertIntoArray(a, i, x, right_after_index);
}

void Nhap(float a[], int &n)
{
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        float x;
        cout << "Nhap a[" << i << "]: ";
        cin >> x;
        ThemBaoToan(a, i, x);
    }
}