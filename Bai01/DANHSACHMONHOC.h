#pragma once
#include "MONHOC.h"
#include "MONTHI.h"
#include "MONKIEMTRA.h"
#include <vector>
class DANHSACHMONHOC
{
	int SoMonThi;
	int SoMonKiemTra;
	vector <MONHOC*> DSMH;
public:
	DANHSACHMONHOC();
	~DANHSACHMONHOC();
	friend istream& operator>>(istream& is, DANHSACHMONHOC& p);
	friend ostream& operator<<(ostream& os,const DANHSACHMONHOC& p);
	float TinhDTBHK()const;
	void XuatMonHocDTKMHMax()const;
};

