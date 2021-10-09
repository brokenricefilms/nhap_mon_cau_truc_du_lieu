#include "lop_hoc.h"

void nhap_lop_hoc(Lop_hoc &lop_hoc) {
  cout << "Nhập tên lớp: ";
  cin.getline(lop_hoc.ten_lop, 10);
  cout << "Nhập sỉ số: ";
  cin >> lop_hoc.si_so_lop;
  cout << "Nhập danh sách học sinh: ";
  for (int i = 0; i < lop_hoc.si_so_lop; i++) {
    cout << "Nhập học sinh thứ " << i << ": ";
    nhap_hoc_sinh(lop_hoc.danh_sach_hoc_sinh[i]);
  }
}

void xuat_lop_hoc(Lop_hoc lop_hoc) {
  cout << "Tên lớp: " << lop_hoc.ten_lop << endl;
  cout << "Sỉ số: " << lop_hoc.si_so_lop << endl;
  cout << "Danh sách học sinh: ";
  for (int i = 0; i < lop_hoc.si_so_lop; i++) {
    xuat_hoc_sinh(lop_hoc.danh_sach_hoc_sinh[i]);
  }
}

void them_hoc_sinh(Lop_hoc &lop_hoc, Hoc_sinh hoc_sinh, int vi_tri) {
  lop_hoc.number++;
  for (int i = lop_hoc.number; i >= vi_tri; i--) {
    for (int i = vi_tri; i < lop_hoc.number; i++) {
      lop_hoc.array[i - 1] = lop_hoc.array[i];
    }
    lop_hoc.number--;
  }
}

void xoa_hoc_sinh(Lop_hoc &lop_hoc, int vi_tri) {}

bool tim_hoc_sinh_tuyen_tinh(Lop_hoc lop_hoc, int &vi_tri) {
  char ma_can_tim[10];
  cout << "Nhập mã cần tìm: ";
  cin.getline(ma_can_tim, 10);

  for (int i = 0; i < lop_hoc.si_so_lop; i++) {
    if (strcmpi(lop_hoc.danh_sach_hoc_sinh[i].ma_hoc_sinh, ma_can_tim) == 0) {
      vi_tri = i;
      return true;
    }
  }
  return false;
}

bool tim_hoc_sinh_nhi_phan(Lop_hoc lop_hoc, int &vi_tri) {
  int left, right, mid;
  left = 0;
  right = lop_hoc.si_so_lop - 1;
  do {
    mid = (left + right) / 2;
    if (lop_hoc.array[mid] == x) {
      return true;
    } else if (lop_hoc.array[mid] < x) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  } while (left <= right);
}
