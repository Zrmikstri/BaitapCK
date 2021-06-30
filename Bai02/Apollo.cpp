#include "Apollo.h"
Apollo::Apollo() :PhiThuyen()
{
    this->alpha = 10;
    this->SoNguoi = 5 + rand() % ((20 + 1) - 5);
    this->Loai = 1;
}

Apollo::Apollo(string SoHieuPhiThuyen, string TenPhiThuyen, int alpha, int SoNguoi) :PhiThuyen(SoHieuPhiThuyen, TenPhiThuyen, alpha)
{
    this->SoNguoi = SoNguoi;
}

Apollo::~Apollo()
{
}

void Apollo::Nhap()
{
    PhiThuyen::Nhap();
}

void Apollo::Xuat() const
{
    cout << "Loai phi thuyen: Apollo\n";
    PhiThuyen::Xuat();
    cout << "So nguoi:" << SoNguoi << endl;
    cout << "So nguyen lieu da tieu thu sau 60 phut bay la: " << getNhienLieu(3600) << " dezo\n";
}

int Apollo::getSoNguoi() const
{
    return SoNguoi;
}

void Apollo::setSoNguoi(int SoNguoi)
{
    this->SoNguoi = SoNguoi;
}

int Apollo::getNhienLieu(int T) const
{
    return (alpha + SoNguoi) * T;
}
