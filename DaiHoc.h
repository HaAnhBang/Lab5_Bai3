#ifndef DAIHOC_H
#define DAIHOC_H
#include "SinhVien.h"

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


#endif // DAIHOC_H
