/**
* @file sistem.hpp
* @description Sistem sınıfı için gerekli fonksiyon ve değişkenlerin tanımlanması
* @course Veri Yapıları 2-A
* @assignment 2.Ödev
* @date 15/12/2022
* @author Mehmet Efe Erbaş - efe.erbas@ogr.sakarya.edu.tr - G201210093
**/


#ifndef sistem_hpp
#define sistem_hpp
#include "ikiliaramaagaci.hpp"
#include "organ.hpp"

class SistemNode
{
    public:
    SistemNode*left;
    SistemNode*right;
    int data;
    SistemNode(int data);
};
class SistemList
{
    public:
    SistemList();
    ~SistemList();
    OrganList**organ;
    IkiliAramaAgaci*tree;
    
    
    private:
    Doku* first;
    SistemNode* root;

};




#endif