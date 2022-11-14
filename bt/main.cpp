#include <iostream>
using namespace std;

void lam_bt1(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    int p1,p2;
    cin >> p1;
    cin >> p2;
    while (p2 < p1){
        cout << "Nhap lai gia tri khong duoc nho hon "<< p1 << "GT2: ";cin >> p2;
    }
    int result = 0;
    cout << "Cac phan tu nam trong khoang [" << p1 << " , " << p2 << "]: ";
    for(int i = 0;i < n;i++){
        if(p1 <= arr[i] && arr[i] <= p2){
            cout << " " << arr[i];
            result++;
        }
    }
    if(result == 0){
        cout << "Khong co gia tri thoa man";
    }else{
        cout << "\nCo: " << result << " gia tri nam trong khoang [" << p1 <<","<< p2<<"]";
    }
}

//Bt2
struct Sv{
    string ten,msv;
    double pGK,pCK,pTB;

};

void bt2(){
    Sv ds_sv[5];
    for(int i = 0 ; i < 5;i++){
        cout << "Msv: ", getline(cin,ds_sv[i].msv);
        cout << "Ho va ten: ", getline(cin,ds_sv[i].ten);
        cout << "Diem Giua ki: ",cin>> ds_sv[i].pGK;
        cout << "Diem Cuoi Ki: " ,cin >>  ds_sv[i].pCK;
        cin.ignore();
    }
    cout << "--- DS 5 sv ---" << endl;
    for(int i = 0 ; i < 5;i++){
        ds_sv[i].pTB = double (ds_sv[i].pCK + ds_sv[i].pGK) / 2.0;
        cout << "Msv: " << ds_sv[i].msv << endl;
        cout << "Ho va ten: " << ds_sv[i].ten<< endl;
        cout << "Diem Giua ki: " << ds_sv[i].pGK<< endl;
        cout << "Diem Cuoi Ki: " << ds_sv[i].pCK<< endl;
        cout << "Diem Trung binh: " << ds_sv[i].pTB<< endl;
        cout << "-----" << endl;
    }
    int max = 0;
    for(int i = 1 ; i < 5;i++){
        if(ds_sv[max].pTB < ds_sv[i].pTB)
        {
            max = i;
        }
    }
    cout << "SV: " << ds_sv[max].ten << " Co diem trung binh lon nhat trong 5 SV";
}
int main() {
    lam_bt1();
    //bt2();
    return 0;
}
