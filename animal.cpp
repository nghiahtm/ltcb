#include <iostream>

using namespace std;

struct
{
    string loai, sound, food;
    int number_legs;
} Meo, Cho, Ga, Bo;

void chon_menu(int &n)
{
    cout << "Chọn menu động vật bao gồm: mèo,chó,gà bò" << endl;
    cout << "1. Mèo\n2. Chó\n3. Gà\n4. Bò" << endl;
    cout << "------" << endl;
    cout << "Nhập menu bạn muốn xem loài nào: ", cin >> n;
    while (n <= 0 || n > 4)
    {
        cout << "------" << endl;
        cout << "Nhập lại menu bạn muốn xem: ", cin >> n;
    }
}

void xuat_loai_dong_vat(int n)
{
    switch (n)
    {
    case 1:
        Meo.loai = "Mèo cảnh";
        Meo.sound = "meo meo";
        Meo.food = "cá";
        Meo.number_legs = 4;
        cout << "Bạn đã chọn mèo" << endl;
        cout << "Loại: " << Meo.loai << endl;
        cout << "Kêu: " << Meo.sound << endl;
        cout << "Thức ăn: " << Meo.food << endl;
        cout << "Số chân: " << Meo.number_legs << endl;
        break;
    case 2:
        Cho.loai = "Chó nhà";
        Cho.sound = "gâu gâu";
        Cho.food = "xương";
        Cho.number_legs = 4;
        cout << "Bạn đã chọn chó: " << endl;
        cout << "Loại: " << Cho.loai << endl;
        cout << "Kêu: " << Cho.sound << endl;
        cout << "Thức ăn: " << Cho.food << endl;
        cout << "Số chân: " << Cho.number_legs << endl;
    case 3:
        Ga.loai = "Gia súc";
        Ga.sound = "cuc cuc";
        Ga.food = "cám";
        Ga.number_legs = 2;
        cout << "Bạn đã chọn gà: " << endl;
        cout << "Loại: " << Ga.loai << endl;
        cout << "Kêu: " << Ga.sound << endl;
        cout << "Thức ăn: " << Ga.food << endl;
        cout << "Số chân: " << Ga.number_legs << endl;
        break;
    case 4:
        Bo.loai = "Gia súc";
        Bo.sound = "moo moo";
        Bo.food = "cỏ";
        Bo.number_legs = 4;
        cout << "Bạn đã chọn bò: " << endl;
        cout << "Loại: " << Bo.loai << endl;
        cout << "Kêu: " << Bo.sound << endl;
        cout << "Thức ăn: " << Bo.food << endl;
        cout << "Số chân: " << Bo.number_legs << endl;
        break;
    default:
        cout << "Sai rồi";
        break;
    }

    cout << "-------" << endl;
}

void chay_truong_chinh(int n, int menu_con)
{

    while (true)
    {
        chon_menu(n);
        xuat_loai_dong_vat(n);
        cout << "Bạn có muốn tiếp tục?" << endl;
        cout << "1. Có\n0. Không" << endl;
        cout << "Nhập: ", cin >> menu_con;
        while (menu_con != 1 && menu_con != 0)
        {
            cout << "Nhập lại đúng giá trị để tiếp tục: ", cin >> menu_con;
        }
        cout << "----" << endl;
        if (menu_con == 1)
        {
            chon_menu(n);
            xuat_loai_dong_vat(n);
        }
        else
        {
            cout << "Chương trình kết thúc xin cảm ơn!" << endl;
            break;
        }
    }
}

int main()
{
    int n, menu_con;
    cout << "--- MENU ---" << endl;
    chay_truong_chinh(n, menu_con);
    return 0;
}