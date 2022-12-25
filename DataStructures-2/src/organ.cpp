/**
* @file organ.hpp
* @description Orgam sınıfı için gerekli fonksiyon ve değişkenlerin kodsal bir şekilde oluşturulması
* @course Veri Yapıları 2-A
* @assignment 2.Ödev
* @date 15/12/2022
* @author Mehmet Efe Erbaş - efe.erbas@ogr.sakarya.edu.tr - G201210093
**/

#include "organ.hpp"
#include "ikiliaramaagaci.hpp"
#include <iostream>

using namespace std;
OrganList::OrganList()
{
    this->tree=new IkiliAramaAgaci();
}
OrganList::~OrganList()
{
    delete tree;
}
