#include <cmath>
#include <iostream>
using namespace std;

const int MAX = 100;

struct Danh_sach
{
    int number;
    int array[MAX];
};

void nhap_danh_sach(Danh_sach &danh_sach);

void xuat_danh_sach(Danh_sach &danh_sach);

void them_phan_tu(Danh_sach &danh_sach, int phan_tu, int vi_tri);

void xoa_phan_tu(Danh_sach &danh_sach, int vi_tri);

bool tim_tuyen_tinh(Danh_sach danh_sach, int x);

bool tim_nhi_phan(Danh_sach danh_sach, int x);
