#include <iostream>

using namespace std;
/*
 * input: Thư viện sách. Sách: Tên sách, mã quyển, tác giả, nhà xuất bản, ngày,đơn giá, số lượng
 * output: tổng tiền, sách có đơn cao nhat, danh sách
 */
struct Sach
{
    string ten, ma, tac_gia,nxb,ngay_xuat_ban;
    int don_gia, so_luong;
};

void nhap_gia(int &gia)
{
    cout << "Nhap gia " << ": ", cin >> gia;
    while (gia < 1000)
    {
        cout << "Gia sach không nhỏ hơn 1000 đ" << endl;
        cout << "Nhap lai gia sach ", cin >> gia;
    };
}

void nhap_so_luong(int &so_luong)
{
    cout << "Nhap so luong sach " << ": ", cin >> so_luong;
    while (so_luong < 1)
    {   cout << "Số lượng không được nhỏ hơn 1" <<endl;
        cout << "Nhap lai so luong sach ", cin >> so_luong;
    };
}


void nhap_danh_sach_thu_vien(Sach thu_vien[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhập sách: ", getline(cin, thu_vien[i].ten);
        cout << "Mã sách: ", getline(cin, thu_vien[i].ma);
        cout << "Tác giả: ", getline(cin, thu_vien[i].tac_gia);
        cout << "NXB: ", getline(cin, thu_vien[i].nxb);
        cout << "Ngày: ", getline(cin, thu_vien[i].ngay_xuat_ban);
        nhap_gia(thu_vien[i].don_gia);
        nhap_so_luong(thu_vien[i].so_luong);
        cout << (i == n - 1 ? "" : "\n------") << endl;
        cin.ignore();
    }
}

int vi_tri_gtln_sach(Sach thu_vien[], int n){
    int gtln = 0;
    for (int i = 1; i < n; ++i) {
        if(gtln < thu_vien[i].don_gia)
        {
            gtln = i;
        }
    }
    return gtln;
}
void xuat_danh_sach_thu_voen(Sach thu_vien[], int n)
{
    int tong_gia_sach = 0;
    cout << "--- Thông tin sách ---" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Sách: " << thu_vien[i].ten <<  endl;
        cout << "Mã sách: "<< thu_vien[i].ma <<  endl;
        cout << "Tác giả: " << thu_vien[i].tac_gia <<  endl;
        cout << "NXB: " <<thu_vien[i].nxb <<  endl;
        cout << "Ngày: " << thu_vien[i].ngay_xuat_ban <<  endl;
        cout << "Số lượng: " << thu_vien[i].so_luong <<  endl;
        cout << "Giá sách 1 quyển: " << thu_vien[i].don_gia << "đ" <<  endl;
        cout << "Tổng giá sách: "<< thu_vien[i].so_luong * thu_vien[i].don_gia << " đ"<< endl;
        tong_gia_sach += (thu_vien[i].so_luong * thu_vien[i].don_gia);
        cout << "\n------" << endl;
    }
    int vi_tri_max = vi_tri_gtln_sach(thu_vien, n);
    cout << "Tổng tất cả: " << tong_gia_sach << " đ" << endl;
    cout << "Cuốn sách " << thu_vien[vi_tri_max].ten << " - Mã: s" << thu_vien[vi_tri_max].ma << " Có giá trị lớn nhất trong đơn hàng: " << thu_vien[vi_tri_max].don_gia << " đ/1 quyển";
}

void chay_chuong_trinh()
{
    int n;
    cout << "Nhập số lượng sách: ", cin >> n;
    while (n < 1)
    {
        cout << "Nhập lại số lượng sách: ", cin >> n;
    };
    Sach thu_vien[n];
    cin.ignore();
    nhap_danh_sach_thu_vien(thu_vien, n);
    xuat_danh_sach_thu_voen(thu_vien, n);
}
int main()
{
    chay_chuong_trinh();
    return 0;
}