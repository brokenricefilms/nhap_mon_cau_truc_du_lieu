#include <cmath>
#include <iostream>
using namespace std;

const int MAX = 1000;

struct hoc_sinh{
    char ma_hoc_sinh[MAX];
    char ho_ten[MAX];
    int diem_van;
    int diem_toan;
};

void nhap_hoc_sinh(Hoc_sinh &hoc_sinh);

void xuat_hoc_sinh(Hoc_sinh hoc_sinh);
