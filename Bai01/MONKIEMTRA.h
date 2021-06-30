#pragma once
#include "MONHOC.h"
class MONKIEMTRA :
    public MONHOC
{
    float DiemHeSo3;
public:
    MONKIEMTRA();
    MONKIEMTRA(string MSMH, string TenMonHoc, float HeSoMonHoc, float DiemHeSo1, float DiemHeSo2, float DiemHeSo3);
    ~MONKIEMTRA();
    float getDiemHeSo3()const;
    void setDiemHeSo3(float DiemHeSo3);
    float TinhDTKMH()const;
    friend istream& operator>>(istream& is, MONKIEMTRA& p);
    friend ostream& operator<<(ostream& os, MONKIEMTRA p);
};

