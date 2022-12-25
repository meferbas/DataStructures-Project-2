/**
* @file hucre.hpp
* @description hücre sınıfı için gerekli fonksiyon ve değişkenlerin tanımlanması
* @course Veri Yapıları 2-A
* @assignment 2.Ödev
* @date 15/12/2022
* @author Mehmet Efe Erbaş - efe.erbas@ogr.sakarya.edu.tr - G201210093
**/

#ifndef hucre_hpp
#define hucre_hpp

class Hucre
{
public:
    int data;
    Hucre(int data);
    ~Hucre();
  
    Hucre *next;
    Hucre *prev;
private:
};

#endif