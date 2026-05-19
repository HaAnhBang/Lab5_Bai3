#ifndef CAODANG_H
#define CAODANG_H
#include "SinhVien.h"

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
#endif // CAODANG_H
