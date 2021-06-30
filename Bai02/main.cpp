#include "QLPT.h"


void main()
{
	QLPT a; // class Quản lýphi thuyền
	// Nhập vào danh sách các phi thuyền (Câu 1)
	cin >> a;
	//In ra danh sách các tất cả các phi thuyền (Câu 2)
	cout << a;
	// Xuất tổng số nhiên liệu đã tiêu thụ của mỗi loại phi thuyền với 3600 là số giây của 60 phút (Câu 3)
	a.XuatTongNhienLieuTheoLoai(3600);
	// Xuất tổng số nhiên liệu đã tiêu thụ của mỗi loại phi thuyền (Câu 4)
	a.XuatTongNhienLieu(3600);
}