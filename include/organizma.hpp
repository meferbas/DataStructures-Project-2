/**
* @file organizma.hpp
* @description Organizma için gerekli fonksiyon ve değişkenlerin tanımlanması
* @course Veri Yapıları 2-A
* @assignment 2.Ödev
* @date 15/12/2022
* @author Mehmet Efe Erbaş - efe.erbas@ogr.sakarya.edu.tr - G201210093
**/

#ifndef organizma_hpp
#define organizma_hpp
#include "radix.hpp"
#include "dosyaoku.hpp"
#include "kontrol.hpp"
#include "test.hpp"

class Organizma
{

    public:
    Doku*ts;
    Kontrol* test=new Kontrol();
    Test* mutasyon= new Test(); 
    DosyaOku* rf = new DosyaOku();
    Organizma();
    void Organism();
    void mutatedOrganism();
    private:


};




#endif