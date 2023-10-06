#include <iostream>
using namespace std;

void NhapMang(float[], int n);
void ConLonNhat(float[], int, int&, int&);
float TongCon(float[], int, int, int);

int main()
{
	float a[1000];
	int n; cin >> n;
	int vtd, vtc;
	NhapMang(a, n);
	ConLonNhat(a, n, vtd, vtc);
	cout << vtd << " " << vtc;
	return 0;
}

void NhapMang(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

float TongCon(float a[], int n, int vt, int l)
{
	float s = 0;
	for (int i = 0; i < l; i++)
		s += a[vt + i];
	return s;
}

void ConLonNhat(float a[], int n, int& vtd, int& vtc)
{
	vtd = vtc = 0;
	float sln = a[0];
	for (int l=1;l<=n;l++)
		for (int vt=0;vt<=n-1;vt++)
			if (TongCon(a, n, vt, l) > sln)
			{
				vtd = vt;
				vtc = vt + l - 1;
				sln = TongCon(a, n, vt, l);
			}
}