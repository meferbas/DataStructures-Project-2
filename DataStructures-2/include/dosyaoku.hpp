/**
* @file dosyaoku.hpp
* @description dosyaoku sınıfı için gerekli fonksiyon ve değişkenlerin tanımlanması
* @course Veri Yapıları 2-A
* @assignment 2.Ödev
* @date 15/12/2022
* @author Mehmet Efe Erbaş - efe.erbas@ogr.sakarya.edu.tr - G201210093
**/


#ifndef dosyaoku_hpp
#define dosyaoku_hpp
#include "hucre.hpp"
#include "organ.hpp"
#include "doku.hpp"
#include "sistem.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
class DosyaOku
{
    public:
        DosyaOku();
        ~DosyaOku();
        void addOrgan(Doku * data);
        void addSystem();
        string fileName= "veri.txt";
        int readFile(string);
        int numbers[100];  
        int lineCount=0;
        int organCount,sistemCount,count,totalSpace,value;
        void fillSystem();
        OrganList **organ;
        SistemList **system;
        Doku **dynamicDoku;
        Doku **DokuSira;
        int a,b;
        Doku* tissue;
        string lineLength;
        int z = 0;
        void takeHeap();
        void createStructures();
        

    private:
};





#endif