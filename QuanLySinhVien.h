//
// Created by vincent on 4/26/22.
//

#ifndef TEST_QUANLYSINHVIEN_H
#define TEST_QUANLYSINHVIEN_H
#include "SinhVien.h"
#include <iostream>
#include <string>
using namespace std;

class QuanLySinhVien: public SinhVien{
protected:
    int n; // so luong
    SinhVien *sv;
public:
    QuanLySinhVien(int ssv){
        this->n = ssv;
        this->sv = new SinhVien[this->n];
    }
    QuanLySinhVien(SinhVien mSinhVien[]){
        this->n = *(&mSinhVien + 1) - mSinhVien;
        this->sv = mSinhVien;
    }
    ~QuanLySinhVien(){
        this->n = 0;
        delete[] sv;
    }
    //Input
    void nhap(){
        this->sv = new SinhVien[this->n];
        for (int i=0; i< this->n; ++i){
            cout<<"Nhap thong tin sv "<<i;
            cin>>this->sv[i];
        }
    }
    //Output
    void xuat(){
        for(int i=0;i<this->n;++i){
            cout<<this->sv[i];
            cout<<"\n------------------";
        }
    }
    //Sap xep theo ten
    virtual void sapXep();
};


#endif //TEST_QUANLYSINHVIEN_H
