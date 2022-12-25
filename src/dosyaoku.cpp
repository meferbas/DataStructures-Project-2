/**
* @file dosyaoku.hpp
* @description Dosya Oku sınıfı için gerekli fonksiyon ve değişkenlerin kodsal bir şekilde oluşturulması
* @course Veri Yapıları 2-A
* @assignment 2.Ödev
* @date 15/12/2022
* @author Mehmet Efe Erbaş - efe.erbas@ogr.sakarya.edu.tr - G201210093
**/

#include "dosyaoku.hpp"
#include "ikiliaramaagaci.hpp"
#include "radix.hpp"
#include "hucre.hpp"
#include "doku.hpp"
#include "sistem.hpp"



#include <iostream>

using namespace std;

DosyaOku::DosyaOku()
{
    string tmp="";
    ifstream readFile;
    readFile.open(fileName);
    while (getline(readFile,tmp))
    {
        lineCount++;  
    }
    readFile.close();
    count=organCount=sistemCount=totalSpace=0;
    this->a=this->b=0;                                                     
}
void DosyaOku::createStructures()
{
    this->dynamicDoku=new Doku*[lineCount];
    organ=new OrganList*[lineCount/20];
    system= new SistemList*[lineCount/2000]; 
}
void DosyaOku::takeHeap()
{   
    int i=0;
    while (i<lineCount/20)
    {
        organ[i] = new OrganList();
        i++;
    }
    for (int i = 0; i < lineCount; i++)
    {
        dynamicDoku[i] = new Doku();
    }
    for (int i = 0; i < lineCount / 2000; i++)
    {
        system[i] = new SistemList();
    }   
}
int DosyaOku::readFile(string fileName)
{
    createStructures();
    takeHeap();
    ifstream readingFile;
    readingFile.open(fileName);

    if (readingFile.is_open())
    {
        while (getline(readingFile,lineLength))
        {
            int x=0;
            tissue= dynamicDoku[count];

            istringstream ss(lineLength);
            while (ss>>value)
            {
                numbers[x]=value;
                totalSpace++;
                x++;
            }
            
            Radix* rdx =new Radix (numbers, totalSpace);
            int *inLine =rdx->Sort();
            for (int k = 0; k < totalSpace; k++)
            {
                tissue->add(inLine[x]);
            }
            
            tissue->middleValue= inLine[totalSpace/2];
            
          
            count++;
            addOrgan(tissue);

            delete[] inLine;
            delete rdx;
            totalSpace=0;

        }
    }

}
void DosyaOku::addOrgan(Doku *data)
{
    organ[organCount]->tree->add(data);
    if (count % 20 == 0)
    {
       if (count != 0)
       {
         organCount++;
       }
       
    }
    
}
