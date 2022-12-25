/**
* @file kontrol.hpp
* @description Kontrol sınıfı için gerekli fonksiyon ve değişkenlerin tanımlanması
* @course Veri Yapıları 2-A
* @assignment 2.Ödev
* @date 15/12/2022
* @author Mehmet Efe Erbaş - efe.erbas@ogr.sakarya.edu.tr - G201210093
**/

#ifndef kontrol_hpp
#define kontrol_hpp
#include <iostream>
#include "ikiliaramaagaci.hpp"
#include "dosyaoku.hpp"

class Kontrol
{
    public:
    Kontrol();
    ~Kontrol();
    bool isAVL(IkiliAramaAgaci* tree);
    DosyaOku*file=new DosyaOku();
    
};

#endif