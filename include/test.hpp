/**
* @file Test.hpp
* @description Test.cpp sınıfı için gerekli fonksiyon ve değişkenlerin tanımlanması
* @course Veri Yapıları 2-A
* @assignment 2.Ödev
* @date 15/12/2022
* @author Mehmet Efe Erbaş - efe.erbas@ogr.sakarya.edu.tr - G201210093
**/

#ifndef test_hpp
#define test_hpp
#include "ikiliaramaagaci.hpp"
#include "doku.hpp"
#include "organ.hpp"
#include "kontrol.hpp"
#include "dosyaoku.hpp"
#include <iomanip>
#include <iostream>

class Test
{
    public:
    Test();
    void appMutation(OrganList** organ,int count);
    private:

};



#endif