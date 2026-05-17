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

class CaoDang : public SinhVien
{
    private:
        double DiemThiTotNghiep;
    public:
        CaoDang();
        ~CaoDang();
        void Nhap();
        void Xuat();
        bool TotNghiep();
        double GetDiemTrungBinh();
};

class DaiHoc : public SinhVien
{
    private:
        string TenLuanVan;
        double DiemLuanVan;
    public:
        DaiHoc();
        ~DaiHoc();
        void Nhap();
        void Xuat();
        bool TotNghiep();
        double GetDiemTrungBinh();
};


#endif // SINHVIEN_H
