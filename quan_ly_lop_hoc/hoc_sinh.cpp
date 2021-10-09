#include "hoc_sinh.h"

void nhap_hoc_sinh(Hoc_sinh &hoc_sinh) {
  fflush(stdin);
  cout << "Nhập mã: ";
  cin.getline(hoc_sinh.ma_hoc_sinh, 10);
  cout << "Nhập họ tên: ";
  cin.getline(hoc_sinh.ho_ten, 50);
  cout << "Nhập điểm toán: ";
  cin >> hoc_sinh.diem_toan;
  cout << "Nhập điểm văn: ";
  cin >> hoc_sinh.diem_van;
}

void xuat_hoc_sinh(Hoc_sinh hoc_sinh) {
  cout << "Mã: " << hoc_sinh.ma_hoc_sinh << endl;
  cout << "Họ và tên: " << hoc_sinh.ho_ten << endl;
  cout << "Điểm toán: " << hoc_sinh.diem_toan << endl;
  cout << "Diểm văn: " << hoc_sinh.diem_van << endl;
}
