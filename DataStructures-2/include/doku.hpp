/**
* @file doku.hpp
* @description doku sınıfı için gerekli fonksiyon ve değişkenlerin tanımlanması
* @course Veri Yapıları 2-A
* @assignment 2.Ödev
* @date 15/12/2022
* @author Mehmet Efe Erbaş - efe.erbas@ogr.sakarya.edu.tr - G201210093
**/


#ifndef doku_hpp
#define doku_hpp
#include "hucre.hpp"

#include <iostream>


using namespace std;
class Doku
{
public:
    
    Doku();
    Doku(Doku *data);
    ~Doku();
    void add(int data);
    int count, middleValue;
    friend ostream& operator<<(ostream& os,Doku& doku);
    void halveIt();
    Doku*next;
    Doku*prev;

private:
    Doku* data;
    Hucre *first;
};

#endif