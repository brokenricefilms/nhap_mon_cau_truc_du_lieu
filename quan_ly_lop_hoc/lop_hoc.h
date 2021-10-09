#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <iostream>
using namespace std;

const int MAX = 100;

struct Lop_hoc{
    char ten_lop[50];
    int si_so_lop;
    Hoc_sinh danh_sach_hoc_sinh[MAX];
};

void nhap_lop_hoc(Lop_hoc &lop_hoc);
void xuat_lop_hoc(Lop_hoc lop_hoc);

void them_hoc_sinh(Lop_hoc &lop_hoc, Hoc_sinh hoc_sinh, int vi_tri);
void xoa_hoc_sinh(Lop_hoc &lop_hoc, int vi_tri);

bool tim_hoc_sinh_tuyen_tinh(Lop_hoc lop_hoc, int &vi_tri);
bool tim_hoc_sinh_nhi_phan(Lop_hoc lop_hoc, int &vi_tri);
