#pragma once
#include "MONHOC.h"
class MONTHI :
    public MONHOC
{
    float DiemThiHetMon;
public:
    MONTHI();
    MONTHI(string MSMH, string TenMonHoc, float HeSoMonHoc, float DiemHeSo1, float DiemHeSo2, float DiemThiHetMon);
    ~MONTHI();
    float getDiemThiHetMon()const;
    void setDiemThiHetMon(float DiemThiHetMon);
    float TinhDTKMH()const;
    friend istream& operator>>(istream& is, MONTHI& p);
    friend ostream& operator<<(ostream& os, MONTHI p);
};

