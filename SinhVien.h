#ifndef SINHVIEN_H
#define SINHVIEN_H

#include <iostream>
#include <string>
using namespace std;
class SinhVien
{
    protected:
        int MaSoSinhVien;
        string HoTen;
        string DiaChi;
        int TongTinChi;
        double DiemTrungBinh;
    public:
        SinhVien();
        virtual ~SinhVien();
        virtual void Nhap();
        virtual void Xuat();
        virtual bool TotNghiep();
};


#endif // SINHVIEN_H
