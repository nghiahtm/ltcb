#include <iostream>

using namespace std;

struct SinhVien
{
    string ten, mssv, lop;
    int tuoi, diem_toan, diem_hoa, diem_ly;
};

void nhap_diem(int &diem, string mon)
{
    cout << "Nhap diem " << mon << ": ", cin >> diem;
    while (diem > 10 || diem < 0)
    {
        cout << "Nhap lai diem " << mon << " : ", cin >> diem;
    };
}
void nhap_danh_sach_sinh_vien(SinhVien ds_sinh_vien[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhập họ và tên sinh viên: ", getline(cin, ds_sinh_vien[i].ten);
        cout << "MSSV: ", getline(cin, ds_sinh_vien[i].mssv);
        cout << "Lớp: ", getline(cin, ds_sinh_vien[i].lop);
        nhap_diem(ds_sinh_vien[i].diem_toan, "Toán");
        nhap_diem(ds_sinh_vien[i].diem_ly, "Lý");
        nhap_diem(ds_sinh_vien[i].diem_hoa, "Hoá");
        cout << (i == n - 1 ? "" : "\n------") << endl;
        cin.ignore();
    }
}

void xuat_danh_sach_sinh_vien(SinhVien ds_sinh_vien[], int n)
{
    cout << "--- Thông tin sinh viên ---" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Sinh viên:" << ds_sinh_vien[i].ten << " - MSSV: " << ds_sinh_vien[i].mssv << endl;
        cout << "Lớp: " << ds_sinh_vien[i].lop << endl;
        cout << "Điểm toán:" << ds_sinh_vien[i].diem_toan << endl;
        cout << "Điểm lý:" << ds_sinh_vien[i].diem_ly << endl;
        cout << "Diem hoa:" << ds_sinh_vien[i].diem_hoa << endl;
        cout << (i == n - 1 ? "" : "\n------") << endl;
    }
}
int main()
{
    int n;
    cout << "Nhập số lượng sinh viên: ", cin >> n;
    while (n < 0)
    {
        cout << "Nhập lại số lượng sinh viên: ", cin >> n;
    };
    SinhVien ds_sinh_vien[n];
    cin.ignore();
    nhap_danh_sach_sinh_vien(ds_sinh_vien, n);
    xuat_danh_sach_sinh_vien(ds_sinh_vien, n);
    return 0;
}