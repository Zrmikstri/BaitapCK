#pragma once
#include "PhiThuyen.h"
class Rocketo :
    public PhiThuyen
{
    int HoaLuc;
public:
    Rocketo();
    Rocketo(string SoHieuPhiThuyen, string TenPhiThuyen, int alpha, int HoaLuc);
    ~Rocketo();
    void Nhap();
    void Xuat()const;
    int getHoaLuc()const;
    void setHoaLuc(int HoaLuc);
    int getNhienLieu(int T)const;
};

