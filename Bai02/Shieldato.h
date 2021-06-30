#pragma once
#include "PhiThuyen.h"
class Shieldato :
    public PhiThuyen
{
    int BanKinh;
public:
    Shieldato();
    Shieldato(string SoHieuPhiThuyen, string TenPhiThuyen, int alpha, int BanKinh);
    ~Shieldato();
    void Nhap();
    void Xuat()const;
    int getBanKinh();
    void setBanKinh(int BanKinh);
    int getNhienLieu(int T)const;
};

