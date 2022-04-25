//
// Created by vincent on 4/25/22.
//

#include "nguoi.h"
#include <iostream>
#include <string>
using namespace std;

void Nguoi::set_socmnd(const string & _socmnd) {
    this->socmnd = _socmnd;
}
void Nguoi::set_hoTen(const string & _hoTen) {
    this->hoTen = _hoTen;
}
void Nguoi::set_queQuan(const string & _queQuan) {
    this->queQuan = _queQuan;
}
void Nguoi::set_namSinh(int _namSinh) {
    if (_namSinh > 2022)
        cout<<" Invalid nam sinh";
    else
        this->namSinh = _namSinh;
}

const string& Nguoi::get_socmnd() const {
    return this->socmnd;
}
const string& Nguoi::get_hoTen() const {
    return  this->hoTen;
}
const string& Nguoi::get_queQuan() const {
    return  this->queQuan;
}
int Nguoi::get_namSinh() const {
    return this->namSinh;
}
int Nguoi::tinhTuoi() const {
    return 2022 - this->namSinh;
}