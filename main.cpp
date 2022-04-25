#include <iostream>
#include <string>
#include "nguoi.h"
#include "SinhVien.h"
#include "QuanLySinhVien.h"
using namespace std;
int main() {
    //Nguoi  ng;
    //cin >> ng;
    //cout << ng;
    //cout <<"\n Tuoi: " <<ng.tinhTuoi();
    //SinhVien sv;
    //cin >> sv;
    //cout << sv;
    QuanLySinhVien qlsv(2);
    qlsv.nhap();
    qlsv.sapXep();
    qlsv.xuat();
    return 0;
}
