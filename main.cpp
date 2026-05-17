#include <iostream>
#include <string>
#include "SinhVien.h"
using namespace std;

int main()
{
    int n, m;

    cout << "Nhap so sinh vien he cao dang: ";
    cin >> n;

    CaoDang** a = new CaoDang*[n];
    // Nhap danh sach sinh vien cao dang
    for (int i = 0; i < n; i++)
    {
        cout << "\n===== NHAP SINH VIEN CAO DANG THU " << i + 1 << " =====";
        a[i] = new CaoDang();
        a[i]->Nhap();
    }

    cout << "\nNhap so sinh vien he dai hoc: ";
    cin >> m;

    DaiHoc** b = new DaiHoc*[m];

    // Nhap danh sach sinh vien dai hoc
    for (int i = 0; i < m; i++)
    {
        cout << "\n===== NHAP SINH VIEN DAI HOC THU " << i + 1 << " =====";
        b[i] = new DaiHoc();
        b[i]->Nhap();
    }

    // Xuat danh sach sinh vien cao dang
    cout << "\n\n========== DANH SACH SINH VIEN HE CAO DANG ==========\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\n--- Sinh vien cao dang thu " << i + 1 << " ---";
        a[i]->Xuat();
        cout << endl;
    }

    // Xuat danh sach sinh vien dai hoc
    cout << "\n\n========== DANH SACH SINH VIEN HE DAI HOC ==========\n";
    for (int i = 0; i < m; i++)
    {
        cout << "\n--- Sinh vien dai hoc thu " << i + 1 << " ---";
        b[i]->Xuat();
        cout << endl;
    }

    // Xuat danh sach sinh vien du dieu kien tot nghiep
    cout << "\n\n========== SINH VIEN DU DIEU KIEN TOT NGHIEP ==========\n";

    bool coTotNghiep = false;

    for (int i = 0; i < n; i++)
    {
        if (a[i]->TotNghiep())
        {
            cout << "\n--- Cao dang ---";
            a[i]->Xuat();
            cout << endl;
            coTotNghiep = true;
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (b[i]->TotNghiep())
        {
            cout << "\n--- Dai hoc ---";
            b[i]->Xuat();
            cout << endl;
            coTotNghiep = true;
        }
    }

    if (!coTotNghiep)
    {
        cout << "Khong co sinh vien nao du dieu kien tot nghiep.\n";
    }

    // Xuat danh sach sinh vien khong du dieu kien tot nghiep
    cout << "\n\n========== SINH VIEN KHONG DU DIEU KIEN TOT NGHIEP ==========\n";

    bool coKhongTotNghiep = false;

    for (int i = 0; i < n; i++)
    {
        if (!a[i]->TotNghiep())
        {
            cout << "\n--- Cao dang ---";
            a[i]->Xuat();
            cout << endl;
            coKhongTotNghiep = true;
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (!b[i]->TotNghiep())
        {
            cout << "\n--- Dai hoc ---";
            b[i]->Xuat();
            cout << endl;
            coKhongTotNghiep = true;
        }
    }

    if (!coKhongTotNghiep)
    {
        cout << "Tat ca sinh vien deu du dieu kien tot nghiep.\n";
    }

    // Tim sinh vien dai hoc co diem trung binh cao nhat
    cout << "\n\n========== SINH VIEN DAI HOC CO DIEM TRUNG BINH CAO NHAT ==========\n";

    if (m > 0)
    {
        double maxtb = b[0]->GetDiemTrungBinh();

        for (int i = 1; i < m; i++)
        {
            if (b[i]->GetDiemTrungBinh() > maxtb)
                maxtb = b[i]->GetDiemTrungBinh();
        }

        for (int i = 0; i < m; i++)
        {
            if (b[i]->GetDiemTrungBinh() == maxtb)
            {
                b[i]->Xuat();
                cout << endl;
            }
        }
    }
    else
    {
        cout << "Khong co sinh vien dai hoc.\n";
    }

    // Tim sinh vien cao dang co diem trung binh cao nhat
    cout << "\n\n========== SINH VIEN CAO DANG CO DIEM TRUNG BINH CAO NHAT ==========\n";

    if (n > 0)
    {
        double maxtbcd = a[0]->GetDiemTrungBinh();

        for (int i = 1; i < n; i++)
        {
            if (a[i]->GetDiemTrungBinh() > maxtbcd)
                maxtbcd = a[i]->GetDiemTrungBinh();
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i]->GetDiemTrungBinh() == maxtbcd)
            {
                a[i]->Xuat();
                cout << endl;
            }
        }
    }
    else
    {
        cout << "Khong co sinh vien cao dang.\n";
    }

    // Dem so sinh vien khong du dieu kien tot nghiep moi loai
    int rescd = 0;
    int resdh = 0;

    for (int i = 0; i < n; i++)
    {
        if (!a[i]->TotNghiep())
            rescd++;
    }

    for (int i = 0; i < m; i++)
    {
        if (!b[i]->TotNghiep())
            resdh++;
    }

    cout << "\n\n========== SO SINH VIEN KHONG DU DIEU KIEN TOT NGHIEP ==========\n";
    cout << "He cao dang: " << rescd << endl;
    cout << "He dai hoc: " << resdh << endl;

    // Giai phong bo nho
    for (int i = 0; i < n; i++)
    {
        delete a[i];
    }

    for (int i = 0; i < m; i++)
    {
        delete b[i];
    }

    delete[] a;
    delete[] b;

    return 0;
}
