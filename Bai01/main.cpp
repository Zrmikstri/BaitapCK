#include "DANHSACHMONHOC.h"

int main()
{
	DANHSACHMONHOC a;
	cin >> a;
	cout << a;
	a.XuatMonHocDTKMHMax();
	cout << "\nDiem trung binh cuoi ki la: " << a.TinhDTBHK();
	return 0;
}