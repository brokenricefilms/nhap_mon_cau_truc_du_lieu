#include "header.h"

int main() {
  Danh_sach danh_sach;

  nhap_danh_sach(danh_sach);
  xuat_danh_sach(danh_sach);

  them_phan_tu(danh_sach, 6, 3);
  cout << "Danh sách sau khi kiểm tra là: " << endl;
  xuat_danh_sach(danh_sach);

  xoa_phan_tu(danh_sach, 4);
  cout << "Danh sách sau khi xóa";
  xuat_danh_sach(danh_sach);

  bool ket_qua_tim_tuyen_tinh = tim_tuyen_tinh(danh_sach, 3);
  if (ket_qua_tim_tuyen_tinh == true) {
    cout << "tìm thấy";
  } else {
    cout << "Không tìm thấy";
  }
  return 0;
}
