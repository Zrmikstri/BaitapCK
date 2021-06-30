#pragma once
#include <iostream>
#include <string>
using namespace std;
class PhiThuyen
{
protected:
	string SoHieuPhiThuyen;
	string TenPhiThuyen;
	int alpha;
	int Loai;
public:
	PhiThuyen();
	PhiThuyen(string SoHieuPhiThuyen, string TenPhiThuyen, int alpha);
	virtual ~PhiThuyen();
	virtual void Nhap();
	virtual void Xuat()const;
	virtual string getSoHieuPhiThuyen()const;
	virtual void setSoHieuPhiThuyen(string SoHieuPhiThuyen);
	virtual string getTenPhiThuyen()const;
	virtual void setTenPhiThuyen(string TenPhiThuyen);
	virtual int getAlpha()const;
	virtual void setAlpha(int alpha);
	virtual int getNhienLieu(int T)const = 0;
	virtual int getLoai()const;
};
