/**
* @file Test.hpp
* @description Test sınıfı için gerekli fonksiyon ve değişkenlerin kodsal bir şekilde oluşturulması
* @course Veri Yapıları 2-A
* @assignment 2.Ödev
* @date 15/12/2022
* @author Mehmet Efe Erbaş - efe.erbas@ogr.sakarya.edu.tr - G201210093
**/

#include "test.hpp"
#include <iostream>

Test::Test()
{
    
}
void Test::appMutation(OrganList** organ, int number)
{
    for (int i = 0; i < number; i++)
    {
        if (organ[i]->tree->root->data->middleValue%50==0)
        {
           organ[i]->tree->half();
           organ[i]->tree= organ[i]->tree->AddAndSort();
        } 
    }
}