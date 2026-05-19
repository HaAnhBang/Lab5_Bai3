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




