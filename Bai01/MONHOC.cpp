#include "MONHOC.h"

MONHOC::MONHOC()
{
    this->MSMH = "0";
    this->TenMonHoc = "unknown";
    this->HeSoMonHoc = this->DiemHeSo1 = this->DiemHeSo2 = 0;
}

MONHOC::MONHOC(string MSMH, string TenMonHoc, float HeSoMonHoc, float DiemHeSo1, float DiemHeSo2)
{
    this->MSMH = MSMH;
    this->TenMonHoc = TenMonHoc;
    this->HeSoMonHoc = HeSoMonHoc;
    this->DiemHeSo1 = DiemHeSo1;
    this->DiemHeSo2 = DiemHeSo2;
}

MONHOC::~MONHOC()
{
}

string MONHOC::getMSMH() const
{
    return MSMH;
}

void MONHOC::setMSMH(string MSMH)
{
    this->MSMH = MSMH;
}

string MONHOC::getTenMonHoc() const
{
    return TenMonHoc;
}

void MONHOC::setTenMonHoc(string TenMonHoc)
{
    this->TenMonHoc = TenMonHoc;
}

float MONHOC::getHeSoMonHoc() const
{
    return HeSoMonHoc;
}

void MONHOC::setHeSoMonHoc(float HeSoMonHoc)
{
    this->HeSoMonHoc = HeSoMonHoc;
}

float MONHOC::getDiemHeSo1() const
{
    return DiemHeSo1;
}

void MONHOC::setDiemHeSo1(float DiemHeSo1)
{
    this->DiemHeSo1 = DiemHeSo1;
}

float MONHOC::getDiemHeSo2() const
{
    return DiemHeSo2;
}

void MONHOC::setDiemHeSo2(float DiemHeSo2)
{
    this->DiemHeSo2 = DiemHeSo2;
}

float MONHOC::TinhDTKMH() const
{
    return 0.0f;
}

istream& operator>>(istream& is, MONHOC& p)
{
    cout << "\nNhap ma so mon hoc: ";
    getline(cin, p.MSMH);
    cout << "Nhap ten mon hoc: ";
    getline(cin, p.TenMonHoc);
    cout << "Nhap he so mon hoc: ";
    cin >> p.HeSoMonHoc;
    cout << "Nhap diem he so 1: ";
    cin >> p.DiemHeSo1;
    cout << "Nhap diem he so 2: ";
    cin >> p.DiemHeSo2;
    return is;
}

ostream& operator<<(ostream& os, const MONHOC& p)
{
    cout << "\nMSMH: " << p.MSMH;
    cout << "\nTen mon hoc: " << p.TenMonHoc;
    cout << "\nDiem he so 1: " << p.DiemHeSo1;
    cout << "\nDiem he so 2: " << p.DiemHeSo2;
    return os;
}
