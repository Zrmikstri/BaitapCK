#include "QLPT.h"

istream& operator>>(istream& is, QLPT& p)
{
    cout << "Nhap so phi thuyen Apollo: ";
    is >> p.SoPhiThuyenApollo;
    cout << "Nhap so phi thuyen Rocketo: ";
    is >> p.SoPhiThuyenRocketo;
    cout << "Nhap so phi thuyen Shieldato: ";
    is >> p.SoPhiThuyenShieldato;
    cin.ignore();
    p.DSPT.resize(p.SoPhiThuyenApollo+p.SoPhiThuyenRocketo+p.SoPhiThuyenShieldato);
    for (int i = 0;i < p.SoPhiThuyenApollo+p.SoPhiThuyenRocketo+p.SoPhiThuyenShieldato;++i)
    {
        if (i == 0) cout << "Nhap danh sach phi thuyen Apollo\n";
        else if (i == p.SoPhiThuyenApollo) cout << "Nhap danh sach phi thuyen Rocketo\n";
        else if (i == p.SoPhiThuyenApollo + p.SoPhiThuyenRocketo) cout << "Nhap danh sach phi thuyen Shieldato\n";
        if (i < p.SoPhiThuyenApollo)
            p.DSPT[i] = new Apollo;
        else if (i >= p.SoPhiThuyenApollo && i < p.SoPhiThuyenApollo + p.SoPhiThuyenRocketo)
            p.DSPT[i] = new Rocketo;
        else
            p.DSPT[i] = new Shieldato;
        p.DSPT[i]->Nhap();
    }
    return is;
}

ostream& operator<<(ostream& os, const QLPT& p)
{
    for (int i = 0;i < p.SoPhiThuyenApollo+p.SoPhiThuyenRocketo+p.SoPhiThuyenShieldato;i++)
    {
        p.DSPT[i]->Xuat();
        cout << "\n-------------------------------------\n";
    }
    return os;
}

QLPT::QLPT()
{
    this->SoPhiThuyenApollo = this->SoPhiThuyenRocketo = this->SoPhiThuyenShieldato = 0;
}

QLPT::~QLPT()
{
    for (int i = 0;i < SoPhiThuyenApollo + SoPhiThuyenRocketo + SoPhiThuyenShieldato;i++)
        delete DSPT[i];
    DSPT.resize(0);
}

void QLPT::XuatTongNhienLieuTheoLoai(int T) const
{
    int a = 0, r = 0, s = 0;
    for (int i = 0;i < SoPhiThuyenApollo+SoPhiThuyenRocketo+SoPhiThuyenShieldato;i++)
    {
        if (DSPT[i]->getLoai() == 1) a += DSPT[i]->getNhienLieu(T);
        else if (DSPT[i]->getLoai() == 2) r += DSPT[i]->getNhienLieu(T);
        else s += DSPT[i]->getNhienLieu(T);
    }
    cout << "So nhien lieu cac phi thuyen apollo da tieu thu la: " << a;
    cout << "\nSo nhien lieu cac phi thuyen rocketo da tieu thu la: " << r;
    cout << "\nSo nhien lieu cac phi thuyen shieldato da tieu thu la: " << s;
}

void QLPT::XuatTongNhienLieu(int T) const
{
    int s = 0;
    for (int i = 0;i < SoPhiThuyenApollo+SoPhiThuyenRocketo+SoPhiThuyenShieldato;i++)
        s += DSPT[i]->getNhienLieu(T);
    cout << "\nTong so nhien lieu da tieu thu la: " << s;
}
