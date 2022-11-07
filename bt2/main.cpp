#include <iostream>

using namespace std;
//input: +, - , x ,: , %, 2 số
// output: kết quả 2 số. Lặp lại chương trình
const string ds_phep_tinh[] = {
        "Cộng","Trừ","Nhân","Chia","Chia có dư"
};
void nhap_dau_phep_tinh(int &dau){
    cout << "Chọn STT để thực hiện phép tính: ",cin >> dau;
    while (dau <= 0 || dau > 5){
        cout << "Hãy nhập lại STT trong phạm vi từ 1 - 4: ",cin >> dau;
        cout << "Nhập lại STT: ",cin >> dau;
    }
    string phep_tinh = ds_phep_tinh[dau - 1];;
    cout << "Bạn đã chọn phép tính: " <<phep_tinh<< endl;
    cout << "Tiếp tục nhập 2 số để thực hiện phép tính: "<< endl;
}
void nhap_hai_so(int &a, int &b) {
    cout << "Nhập số thứ nhất: ",cin >> a;
    cout << "Nhập số thứ hai: ", cin >> b;
}

void tinh_ket_qua(int st1, int st2, int dau)
{
    cout << "Kết quả: ";
    switch (dau) {
        case 1:
            cout << st1 << " + " << st2 << " = " << st1 + st2;
            break;
        case 2:
            cout << st1 << " - " << st2 << " = " << st1 - st2;
            break;
        case 3:
            cout << st1 << " x " << st2 << " = " << st1 * st2;
            break;
        case 4:
            cout << st1 << " / " << st2 << " = " << (double)st1 / (double)st2;
            break;
        case 5:
            cout << st1 << " / " << st2 << " dư " << st1 % st2;
            break;
    }
}

void chay_chuong_trinh(){
    int dau, st1, st2;char tiep_tuc;
    cout << "---Menu---" <<  endl;
    cout << "1.Cộng\n2.Trừ\n3.Nhân\n4.Chia\n5.Chia lấy dư\n";
    nhap_dau_phep_tinh(dau);
    nhap_hai_so(st1,st2);
    tinh_ket_qua(st1, st2, dau);
    while (true)
    {
        cout << "\n\nBạn có muốn tiếp tục? Y/y để tiếp tục. N/n để dừng chương trình ", cin >> tiep_tuc;
        if(tiep_tuc == 'y'|| tiep_tuc =='Y')
        {
            nhap_dau_phep_tinh(dau);
            nhap_hai_so(st1,st2);
            tinh_ket_qua(st1, st2, dau);
        }
        else
        {
            break;
        }
    }
}

int main() {
    chay_chuong_trinh();
    return 0;
}
