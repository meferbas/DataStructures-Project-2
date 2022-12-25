/**
* @file main.hpp
* @description programın derlenmesi ve ekran çıktısı için gerekli fonksiyonların çağrılması
* @course Veri Yapıları 2-A
* @assignment 2.Ödev
* @date 15/12/2022
* @author Mehmet Efe Erbaş - efe.erbas@ogr.sakarya.edu.tr - G201210093
**/

#include <iostream>
#include <iomanip>
#include "radix.hpp"
#include "dosyaoku.hpp"
#include "kontrol.hpp"
#include "organizma.hpp"
#include "test.hpp"
#include <iomanip>
using namespace std;


int main()
{   
    Organizma * organism= new Organizma();
    organism->Organism();
    do
    {
        if (cin.get())
        organism->mutatedOrganism();
        else
         cout<<"Mutasyon icin Enter tuslayiniz.";

    } while (!cin.get());
    cout<<"\n";
    system("pause");
    
}