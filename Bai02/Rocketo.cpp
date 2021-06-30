#include "Rocketo.h"

Rocketo::Rocketo() :PhiThuyen()
{
    this->alpha = 30;
    this->HoaLuc = 2 + rand() % ((5 + 1) - 2);
    this->Loai = 2;
}

Rocketo::Rocketo(string SoHieuPhiThuyen, string TenPhiThuyen, int alpha, int HoaLuc) :PhiThuyen(SoHieuPhiThuyen, TenPhiThuyen, alpha)
{
    this->HoaLuc = HoaLuc;
}

Rocketo::~Rocketo()
{
}

void Rocketo::Nhap()
{
    PhiThuyen::Nhap();
}

void Rocketo::Xuat() const
{
    cout << "Loai phi thuyen: Rocketo\n";
    PhiThuyen::Xuat();
    cout << "Hoa luc: " << HoaLuc << endl;
    cout << "So nguyen lieu da tieu thu sau 60 phut bay la: " << getNhienLieu(3600) << " dezo\n";
}

int Rocketo::getHoaLuc() const
{
    return HoaLuc;
}

void Rocketo::setHoaLuc(int HoaLuc)
{
    this->HoaLuc = HoaLuc;
}

int Rocketo::getNhienLieu(int T) const
{
    return alpha * T + HoaLuc * HoaLuc * T;
}
