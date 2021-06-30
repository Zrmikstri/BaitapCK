#pragma once
#include "PhiThuyen.h"
#include "Apollo.h"
#include "Rocketo.h"
#include "Shieldato.h"
#include <vector>
class QLPT
{
	int SoPhiThuyenApollo;
	int SoPhiThuyenRocketo;
	int SoPhiThuyenShieldato;
	vector <PhiThuyen*> DSPT;
public:
	QLPT();
	~QLPT();
	friend istream& operator >> (istream& is, QLPT& p);
	friend ostream& operator <<(ostream& os, const QLPT& p);
	void XuatTongNhienLieuTheoLoai(int T)const;
	void XuatTongNhienLieu(int T)const;
};

