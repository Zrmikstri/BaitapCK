#include "PhiThuyen.h"

PhiThuyen::PhiThuyen()
{
	this->SoHieuPhiThuyen = "unknown";
	this->TenPhiThuyen = "unknown";
	this->alpha = 0;
	this->Loai = 0;
}

PhiThuyen::PhiThuyen(string SoHieuPhiThuyen, string TenPhiThuyen, int alpha)
{
	this->SoHieuPhiThuyen = SoHieuPhiThuyen;
	this->TenPhiThuyen = TenPhiThuyen;
	this->alpha = alpha;
}

PhiThuyen::~PhiThuyen()
{
}

void PhiThuyen::Nhap()
{
	cout << "Nhap so hieu phi thuyen: ";
	getline(cin, SoHieuPhiThuyen);
	cout << "Nhap ten phi thuyen: ";
	getline(cin, TenPhiThuyen);
}

void PhiThuyen::Xuat() const
{
	cout << "So hieu phi thuyen: " << SoHieuPhiThuyen;
	cout << "\nTen phi thuyen: " << TenPhiThuyen;
	cout << "\nalpha: " << alpha << endl;
}

string PhiThuyen::getSoHieuPhiThuyen() const
{
	return SoHieuPhiThuyen;
}

void PhiThuyen::setSoHieuPhiThuyen(string SoHieuPhiThuyen)
{
	this->SoHieuPhiThuyen = SoHieuPhiThuyen;
}

int PhiThuyen::getAlpha() const
{
	return alpha;
}

void PhiThuyen::setAlpha(int alpha)
{
	this->alpha = alpha;
}

int PhiThuyen::getLoai() const
{
	return this->Loai;
}

string PhiThuyen::getTenPhiThuyen() const
{
	return TenPhiThuyen;
}

void PhiThuyen::setTenPhiThuyen(string TenPhiThuyen)
{
	this->TenPhiThuyen = TenPhiThuyen;
}
