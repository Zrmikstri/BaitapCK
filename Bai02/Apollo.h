#pragma once
#include "PhiThuyen.h"
class Apollo :
    public PhiThuyen
{
    int SoNguoi;
public:
    Apollo();
    Apollo(string SoHieuPhiThuyen, string TenPhiThuyen, int alpha, int SoNguoi);
    ~Apollo();
    void Nhap();
    void Xuat()const;
    int getSoNguoi()const;
    void setSoNguoi(int SoNguoi);
    int getNhienLieu(int T)const;
};

