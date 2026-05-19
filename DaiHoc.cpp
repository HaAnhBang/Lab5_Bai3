#include "DaiHoc.h"

DaiHoc::DaiHoc()
{
    TenLuanVan = "";
    DiemLuanVan = 0.0;
}

DaiHoc::~DaiHoc()
{
}

void DaiHoc::Nhap()
{
    SinhVien::Nhap();
    cin.ignore();
    cout << "\nNhap ten luan van: "; getline(cin,TenLuanVan);
    cout << "\nNhap diem luan van: "; cin >> DiemLuanVan;
}

void DaiHoc::Xuat()
{
    SinhVien::Xuat();
    cout << "\nTen luan van: " << TenLuanVan;
    cout << "\nDiem luan van: " << DiemLuanVan;
}

bool DaiHoc::TotNghiep()
{
    if (TongTinChi >= 170 && DiemTrungBinh >= 5 && DiemLuanVan >= 5)
        return true;
    else return false;
}

double DaiHoc::GetDiemTrungBinh()
{
    return DiemTrungBinh;
}
