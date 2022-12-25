/**
* @file hucre.hpp
* @description Hücre sınıfı için gerekli fonksiyon ve değişkenlerin kodsal bir şekilde oluşturulması
* @course Veri Yapıları 2-A
* @assignment 2.Ödev
* @date 15/12/2022
* @author Mehmet Efe Erbaş - efe.erbas@ogr.sakarya.edu.tr - G201210093
**/


#include "hucre.hpp"
#include <iostream>
using namespace std;

Hucre::Hucre(int data)
{
    this->data = data;
    this->next = 0;
    this->prev = 0;
}
Hucre::~Hucre()
{
    //dugum silme
}