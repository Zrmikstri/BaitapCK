#include "MONTHI.h"

MONTHI::MONTHI():MONHOC()
{
    DiemThiHetMon = 0;
}

MONTHI::MONTHI(string MSMH, string TenMonHoc, float HeSoMonHoc, float DiemHeSo1, float DiemHeSo2, float DiemThiHetMon):MONHOC(MSMH,TenMonHoc,HeSoMonHoc,DiemHeSo1,DiemHeSo2)
{
    this->DiemThiHetMon = DiemThiHetMon;
}

MONTHI::~MONTHI()
{
}

float MONTHI::getDiemThiHetMon() const
{
    return DiemThiHetMon;
}

void MONTHI::setDiemThiHetMon(float DiemThiHetMon)
{
    this->DiemThiHetMon = DiemThiHetMon;
}

float MONTHI::TinhDTKMH() const
{
    return ((DiemHeSo1+DiemHeSo2*2)/3+DiemThiHetMon)/2;
}

istream& operator>>(istream& is, MONTHI& p)
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
    cout << "Nhap diem thi het mon: ";
    cin >> p.DiemThiHetMon;
    return is;
}

ostream& operator<<(ostream& os, MONTHI p)
{
    cout << "\nMSMH: " << p.MSMH;
    cout << "\nTen mon hoc: " << p.TenMonHoc;
    cout << "\nDiem he so 1: " << p.DiemHeSo1;
    cout << "\nDiem he so 2: " << p.DiemHeSo2;
    cout << "\nDiem thi het mon: " << p.DiemThiHetMon;
    cout << "\nDiem tong ket mon hoc: " << p.TinhDTKMH();
    return os;
}
