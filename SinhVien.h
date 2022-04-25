//
// Created by vincent on 4/26/22.
//

#ifndef TEST_SINHVIEN_H
#define TEST_SINHVIEN_H
#include "nguoi.h"
#include <string>
#include <iostream>
using namespace std;

class SinhVien : public Nguoi{
protected:
    string maSinhVien;
    string nganhHoc;
public:
    SinhVien(){
        this->socmnd = "";
        this->hoTen = "";
        this->queQuan = "";
        this->namSinh = 0;
        this->maSinhVien = "";
        this->nganhHoc = "";
    }
    SinhVien(string _socmnd, string _hoTen, string _queQuan, int _ngaySinh, string _maSinhVien, string _nganhHoc){
        this->socmnd = _socmnd;
        this->hoTen = _hoTen;
        this->queQuan = _queQuan;
        this->namSinh = _ngaySinh;
        this->maSinhVien = _maSinhVien;
        this->nganhHoc = _nganhHoc;
    }
    ~SinhVien(){
        this->socmnd = "";
        this->hoTen = "";
        this->queQuan = "";
        this->namSinh = 0;
        this->maSinhVien = "";
        this->nganhHoc = "";
    }
    // Input
    friend istream& operator >> (istream& is, SinhVien &obj){
        cin.ignore();
        cout << "\n Nhap CMND: ";  fflush(stdin); getline(is, obj.socmnd);
        cout << "\n Nhap ho ten: "; fflush(stdin); getline(is, obj.hoTen);
        cout <<"\n Nhap que quan: "; fflush(stdin); getline(is, obj.queQuan);
        cout <<"\n Nhap ma sinh vien: "; fflush(stdin); getline(is, obj.maSinhVien);
        cout <<"\n Nhap nganh hoc: "; fflush(stdin); getline(is, obj.nganhHoc);
        cout <<"\n Nhap nam sinh: "; is >> obj.namSinh;
    }
    //Output
    friend ostream& operator << (ostream& os, SinhVien &obj){
        cout << "\n CMND: "<< obj.socmnd;
        cout << "\n Ho ten: "<< obj.hoTen;
        cout << "\n Que quan: "<<obj.queQuan;
        cout << "\n Nam sinh:  "<< obj.namSinh;
        cout << "\n Ma sinh vien: "<<obj.maSinhVien;
        cout << "\n Nganh hoc: "<<obj.nganhHoc;
    }
};


#endif //TEST_SINHVIEN_H
