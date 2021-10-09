#include "lop_hoc.h"
#include "hoc_sinh.h"

int main()
{
    Lop_hoc lop_hoc;
    nhap_lop_hoc(lop_hoc);
    xuat_lop_hoc(lop_hoc);

    Hoc_sinh hoc_sinh;
    them_hoc_sinh(lop_hoc, hoc_sinh, 3);
    cout << "Danh sách sau khi thêm";
    xuat_lop_hoc(lop_hoc);

    int vi_tri = -1;
    bool ket_qua_tim_tuyen_tinh = tim_hoc_sinh_tuyen_tinh(lop_hoc, vi_tri);
    if (ket_qua_tim_tuyen_tinh == true)
    {
        cout << "Tìm thấy tại vị trí " << vi_tri << endl;
        xuat_hoc_sinh(hoc_sinh);
    }
    else
    {
        cout << "Không tìm thấy ";
    }

    return 0;
}
