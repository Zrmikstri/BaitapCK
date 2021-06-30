#pragma once
#include <iostream>
#include <string>
using namespace std;
class MONHOC
{
protected:
	string MSMH;
	string TenMonHoc;
	float HeSoMonHoc;
	float DiemHeSo1;
	float DiemHeSo2;
public:
	MONHOC();
	MONHOC(string MSMH, string TenMonHoc, float HeSoMonHoc, float DiemHeSo1, float DiemHeSo2);
	virtual ~MONHOC();
	string getMSMH()const;
	void setMSMH(string MSMH);
	string getTenMonHoc()const;
	void setTenMonHoc(string TenMonHoc);
	float getHeSoMonHoc()const;
	void setHeSoMonHoc(float HeSoMonHoc);
	float getDiemHeSo1()const;
	void setDiemHeSo1(float DiemHeSo1);
	float getDiemHeSo2()const;
	void setDiemHeSo2(float DiemHeSo2);
	virtual float TinhDTKMH()const=0;
	friend istream& operator>>(istream& is, MONHOC& p);
	friend ostream& operator<<(ostream& os, const MONHOC& p);
};

