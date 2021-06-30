#include "MONKIEMTRA.h"

MONKIEMTRA::MONKIEMTRA():MONHOC()
{
    this->DiemHeSo3 = 0;
}

MONKIEMTRA::MONKIEMTRA(string MSMH, string TenMonHoc, float HeSoMonHoc, float DiemHeSo1, float DiemHeSo2, float DiemHeSo3):MONHOC(MSMH,TenMonHoc,HeSoMonHoc,DiemHeSo1,DiemHeSo2)
{
    this->DiemHeSo3 = DiemHeSo3;
}

MONKIEMTRA::~MONKIEMTRA()
{
}

float MONKIEMTRA::getDiemHeSo3() const
{
    return DiemHeSo3;
}

void MONKIEMTRA::setDiemHeSo3(float DiemHeSo3)
{
    this->DiemHeSo3 = DiemHeSo3;
}

float MONKIEMTRA::TinhDTKMH() const
{
    return (DiemHeSo1+DiemHeSo2*2+DiemHeSo3*3)/6;
}

istream& operator>>(istream& is, MONKIEMTRA& p)
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
    cout << "Nhap diem he so 3: ";
    cin >> p.DiemHeSo3;
    return is;
}

ostream& operator<<(ostream& os, MONKIEMTRA p)
{
    cout << "\nMSMH: " << p.MSMH;
    cout << "\nTen mon hoc: " << p.TenMonHoc;
    cout << "\nDiem he so 1: " << p.DiemHeSo1;
    cout << "\nDiem he so 2: " << p.DiemHeSo2;
    cout << "\nDiem he so 3: " << p.DiemHeSo3;
    cout << "\nDiem tong ket mon hoc: " << p.TinhDTKMH();
    return os;
}
