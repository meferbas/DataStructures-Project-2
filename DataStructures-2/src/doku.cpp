/**
* @file doku.hpp
* @description doku sınıfı için gerekli fonksiyon ve değişkenlerin kodsal bir şekilde oluşturulması
* @course Veri Yapıları 2-A
* @assignment 2.Ödev
* @date 15/12/2022
* @author Mehmet Efe Erbaş - efe.erbas@ogr.sakarya.edu.tr - G201210093
**/

#include "doku.hpp"
#include "dosyaoku.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

Doku::Doku()
{
    first=0;
    this->count=0;
}
Doku::~Doku()
{
    Hucre*tmp=first;
    while (tmp!=0)
    {
        Hucre*remove=tmp;
        tmp=tmp->next;
        delete remove;
    } 
}
void Doku::add(int data)
{
    Hucre* recent = new Hucre(data);
    if (first==0)
    {
        first=recent;
    }
    else
    {
        Hucre*tmp=first;
        while (tmp->next!=0)
        {
            tmp=tmp->next;
        }
        tmp->next=recent;  
    }
    this->count++;
}
ostream& operator<<(ostream& os,Doku& doku)
{
    return os;
}
void Doku::halveIt()
{
    Hucre*tmp = this->first;
    while (tmp!=0)
    {
        if (tmp->data % 2 == 0)
        {
            tmp->data=tmp->data/2;
        }
        tmp=tmp->next;
        
    }
    
}

