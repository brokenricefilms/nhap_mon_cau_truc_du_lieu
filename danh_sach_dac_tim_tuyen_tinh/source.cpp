#include "header.h"

void nhap_danh_sach(Danh_sach &danh_sach)
{
    cout << "Nhập số phần tử: ";
    cin >> danh_sach.number;
    cout << "Nhập danh sách phần tử: ";
    for (int i = 0; i < number; i++)
    {
        cout << "A[" << i << "]: ";
        cin >> danh_sach.array[i];
    }
}

void xuat_danh_sach(Danh_sach danh_sach)
{
    cout << "Số phần tử: " << danh_sach.number << endl;
    for (int i = 0; i < danh_sach.number; i++)
    {
        cout << danh_sach.array[i] << " ";
    }
    cout << endl;
}

void them_phan_tu(Danh_sach &danh_sach, int phan_tu, int vi_tri)
{
    danh_sach.number++;
    for (int i = danh_sach.number; i >= vi_tri; i--)
    {
        for (int i = vi_tri; i < danh_sach.number; i++)
        {
            danh_sach.array[i - 1] = danh_sach.array[i];
        }
        danh_sach.number--;
    }
}

bool tim_tuyen_tinh(Danh_sach danh_sach, int x)
{
    bool ket_qua = false;
    for (int i = 0; i < danh_sach.number; i++)
    {
        if (danh_sach.array[i] == x)
        {
            ket_qua = true;
            break;
        }
        return ket_qua;
    }
}

bool tim_nhi_phan(Danh_sach danh_sach, int x)
{
    int left, right, mid;
    left = 0;
    right = danh_sach.number - 1;
    do
    {
        mid = (left + right) / 2;
        if (danh_sach.array[mid] == x)
        {
            return true;
        }
        else if (danh_sach.array[mid] < x)
        {
            left =  mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    } while (left <= right);

    return false;
}
