/**
* @file kontrol.hpp
* @description Kontrol sınıfı için gerekli fonksiyon ve değişkenlerin kodsal bir şekilde oluşturulması
* @course Veri Yapıları 2-A
* @assignment 2.Ödev
* @date 15/12/2022
* @author Mehmet Efe Erbaş - efe.erbas@ogr.sakarya.edu.tr - G201210093
**/

#include "kontrol.hpp"
#include <iostream>

using namespace std;

Kontrol::Kontrol()
{
   file->readFile(file->fileName); 
}
bool Kontrol::isAVL(IkiliAramaAgaci* tree)
{
    if (!tree->isAVL())
        cout<<"#";
    else
        cout<<" ";
}
Kontrol::~Kontrol()
{
    //delete file;
}
