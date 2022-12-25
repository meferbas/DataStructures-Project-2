/**
* @file organ.hpp
* @description Organ için gerekli fonksiyon ve değişkenlerin tanımlanması
* @course Veri Yapıları 2-A
* @assignment 2.Ödev
* @date 15/12/2022
* @author Mehmet Efe Erbaş - efe.erbas@ogr.sakarya.edu.tr - G201210093
**/

#ifndef organ_hpp
#define organ_hpp
#include "ikiliaramaagaci.hpp"

class OrganList
{
    public:
    OrganList();
    ~OrganList();
    IkiliAramaAgaci *tree;
    

};


#endif