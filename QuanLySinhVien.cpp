//
// Created by vincent on 4/26/22.
//

#include "QuanLySinhVien.h"
#include "SinhVien.h"
#include <iostream>
#include <string>
using namespace std;
bool comparator(string a,string b)
{
    return a>b;
}
void swap(SinhVien &a, SinhVien &b)
{
    SinhVien temp = a;
    a = b;
    b = temp;
}
//Bubble sort
void QuanLySinhVien::sapXep() {
    for (int i=0; i<this->n; i++)
        for (int j=0; j<n-i-1;++j)
            if (comparator(this->sv[j].hoTen, this->sv[j+1].hoTen))
                swap(this->sv[j], this->sv[j+1]);
}