#include "Shieldato.h"

Shieldato::Shieldato() :PhiThuyen()
{
    this->alpha = 20;
    this->BanKinh = 5 + rand() % ((30 + 1) - 5);
    this->Loai = 3;
}

Shieldato::Shieldato(string SoHieuPhiThuyen, string TenPhiThuyen, int alpha, int BanKinh) :PhiThuyen(SoHieuPhiThuyen, TenPhiThuyen, alpha)
{
    this->BanKinh = BanKinh;
}

Shieldato::~Shieldato()
{
}

void Shieldato::Nhap()
{
    PhiThuyen::Nhap();
}

void Shieldato::Xuat() const
{
    cout << "Loai phi thuyen: Shieldato\n";
    PhiThuyen::Xuat();
    cout << "Ban kinh: " << BanKinh << endl;
    cout << "So nguyen lieu da tieu thu sau 60 phut bay la: " << getNhienLieu(3600) << " dezo\n";
}

int Shieldato::getBanKinh()
{
    return BanKinh;
}

void Shieldato::setBanKinh(int BanKinh)
{
    this->BanKinh = BanKinh;
}

int Shieldato::getNhienLieu(int T) const
{
    return alpha * T + 2 * BanKinh * T;
}
