//
// Created by vincent on 4/25/22.
//

#ifndef TEST_NGUOI_H
#define TEST_NGUOI_H

// SYSTEM INCLUDES
#include<iostream>
#include<string>
using namespace std;

//Class Nguoi definition
class Nguoi{
public:
    string socmnd, queQuan;
    int namSinh;
    string hoTen;
public:
    Nguoi(){
        this->socmnd = "";
        this->hoTen = "";
        this->queQuan = "";
        this->namSinh = 0;
    }
    Nguoi(string _socmnd, string _hoTen, string _queQuan, int _namSinh){
        this->socmnd = _socmnd;
        this->hoTen = _hoTen;
        this->queQuan = _queQuan;
        this->namSinh = _namSinh;
    }
    ~Nguoi(){
        this->socmnd = "";
        this->hoTen = "";
        this->queQuan = "";
        this->namSinh = 0;
    }
    //Setter functions
    void set_socmnd(const string& = "");
    void set_hoTen(const string& = "");
    void set_queQuan(const string& = "");
    void set_namSinh(int = 0);
    //Getter functions
    const string& get_socmnd()const;
    const string& get_hoTen() const;
    const string& get_queQuan() const;
    int get_namSinh() const;

    /*
     * Calculate Tuoi
     * @param void
     * return namHienTai - namSinh */
    int tinhTuoi() const;

    // Input
    friend istream& operator >> (istream& is, Nguoi &obj){
        cin.ignore();
        cout << "\n Nhap CMND: ";  fflush(stdin); getline(is, obj.socmnd);
        cout << "\n Nhap ho ten: "; fflush(stdin); getline(is, obj.hoTen);
        cout <<"\n Nhap que quan: "; fflush(stdin); getline(is, obj.queQuan);
        cout <<"\n Nhap nam sinh: "; is >> obj.namSinh;


    }
    //Output
    friend ostream& operator << (ostream& os, Nguoi &obj){
        cout << "\n CMND: "<< obj.socmnd;
        cout << "\n Ho ten: "<< obj.hoTen;
        cout << "\n Que quan: "<<obj.queQuan;
        cout << "\n Nam sinh:  "<< obj.namSinh;
    }


};
#endif //TEST_NGUOI_H
