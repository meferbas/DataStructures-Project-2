/**
* @file sistem.hpp
* @description Sistem sınıfı için gerekli fonksiyon ve değişkenlerin kodsal bir şekilde oluşturulması
* @course Veri Yapıları 2-A
* @assignment 2.Ödev
* @date 15/12/2022
* @author Mehmet Efe Erbaş - efe.erbas@ogr.sakarya.edu.tr - G201210093
**/

#include "sistem.hpp"
#include "dosyaoku.hpp"
#include <iostream>

using namespace std;
SistemList::SistemList()
{
    organ=new OrganList*[100];
}
SistemList::~SistemList()
{

}
SistemNode::SistemNode(int data)
{
    this->data=data;
    left=0;
    right=0;
}
