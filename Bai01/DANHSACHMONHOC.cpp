#include "DANHSACHMONHOC.h"

DANHSACHMONHOC::DANHSACHMONHOC()
{
    this->SoMonKiemTra = this->SoMonThi = 0;
}

DANHSACHMONHOC::~DANHSACHMONHOC()
{
    for (int i = 0;i < SoMonKiemTra + SoMonThi;i++)
        delete DSMH[i];
    DSMH.resize(0);
}

float DANHSACHMONHOC::TinhDTBHK() const
{
    float a = 0, b = 0, c = 0, d = 0;
    for (int i = 0;i < SoMonThi;i++)
    {
        a += DSMH[i]->TinhDTKMH() * DSMH[i]->getHeSoMonHoc();
        c += DSMH[i]->getHeSoMonHoc();
    }
    for (int i = SoMonThi;i < SoMonKiemTra + SoMonThi;i++)
    {
        b += DSMH[i]->TinhDTKMH() * DSMH[i]->getHeSoMonHoc();
        d += DSMH[i]->getHeSoMonHoc();
    }
    return (2*a+b)/(2*c+d);
}

void DANHSACHMONHOC::XuatMonHocDTKMHMax() const
{
    float max = DSMH[0]->TinhDTKMH();
    for (int i = 0;i < SoMonKiemTra + SoMonThi;i++)
        if (max < DSMH[i]->TinhDTKMH()) max = DSMH[i]->TinhDTKMH();
    cout << "\nMon hoc co diem tong ket mon hoc cao nhat la:";
    for (int i=0;i<SoMonKiemTra+SoMonThi;i++)
        if (DSMH[i]->TinhDTKMH() == max)
        {
            if (i < SoMonThi) cout << *(MONTHI*)DSMH[i];
            else cout << *(MONKIEMTRA*)DSMH[i];
            cout << "\n-------------------------------------------------";
        }
}

istream& operator>>(istream& is, DANHSACHMONHOC& p)
{
    cout << "Nhap so mon thi: ";
    cin >> p.SoMonThi;
    cout << "Nhap so mon kiem tra: ";
    cin >> p.SoMonKiemTra;
    p.DSMH.resize(p.SoMonKiemTra + p.SoMonThi);
    for (int i = 0;i < p.SoMonThi;i++)
        p.DSMH[i] = new MONTHI;
    for (int i = 0;i < p.SoMonKiemTra;i++)
        p.DSMH[i+p.SoMonThi] = new MONKIEMTRA;
    for (int i = 0;i < p.SoMonKiemTra + p.SoMonThi;i++)
    {
        cin.ignore();
        if (i == 0) cout << "Nhap danh sach cac mon thi \n";
        if (i == p.SoMonThi) cout << "Nhap danh sach cac mon kiem tra \n";
        if (i < p.SoMonThi) cin >> *(MONTHI*)p.DSMH[i];
        else cin >> *(MONKIEMTRA*)p.DSMH[i];
    }
    return is;
}

ostream& operator<<(ostream& os, const DANHSACHMONHOC& p)
{
    for (int i = 0;i < p.SoMonKiemTra + p.SoMonThi;i++)
    {
        if (i < p.SoMonThi) cout << *(MONTHI*)p.DSMH[i];
        else cout << *(MONKIEMTRA*)p.DSMH[i];
        cout << "\n-------------------------------------------------";
    }
    return os;
}


