#include "SinhVien.h"

#include <iostream>
using namespace std;

SinhVien::SinhVien()
{
    MaSoSinhVien = 0;
    HoTen = "";
    DiaChi = "";
    TongTinChi = 0;
    DiemTrungBinh = 0.0;
}

SinhVien::~SinhVien()
{
}

void SinhVien::Nhap()
{
    cout << "\nNhap ma so sinh vien: "; cin >> MaSoSinhVien;
    cin.ignore();
    cout << "\nNhap ho ten: " ; getline(cin,HoTen);
    cout << "\nNhap dia chi: "; getline(cin,DiaChi);
    cout << "\nNhap tong tin chi: "; cin >> TongTinChi;
    cout << "\nNhap diem trung binh: "; cin >> DiemTrungBinh;
}

void SinhVien::Xuat()
{
    cout << "\nMa so sinh vien: " << MaSoSinhVien;
    cout << "\nHo ten: " << HoTen;
    cout << "\nDia chi: " << DiaChi;
    cout << "\nTong tin chi: " << TongTinChi;
    cout << "\nDiemTrungBinh: " << DiemTrungBinh;
}

bool SinhVien::TotNghiep()
{
    return false;
}

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
