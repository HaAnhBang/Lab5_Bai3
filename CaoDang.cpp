#include "CaoDang.h"

CaoDang::CaoDang()
{
    DiemThiTotNghiep = 0.0;
}

CaoDang::~CaoDang()
{
}

void CaoDang::Nhap()
{
    SinhVien::Nhap();
    cout << "\nNhap diem thi tot nghiep: "; cin >> DiemThiTotNghiep;
}

void CaoDang::Xuat()
{
    SinhVien::Xuat();
    cout << "\nDiem thi tot nghiep: " << DiemThiTotNghiep;
}

bool CaoDang::TotNghiep()
{
    if (TongTinChi >= 120 && DiemTrungBinh >= 5 && DiemThiTotNghiep >= 5)
        return true;
    else return false;
}

double CaoDang::GetDiemTrungBinh()
{
    return DiemTrungBinh;
}
