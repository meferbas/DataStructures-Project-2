/**
* @file organizma.hpp
* @description organizma sınıfı için gerekli fonksiyon ve değişkenlerin kodsal bir şekilde oluşturulması
* @course Veri Yapıları 2-A
* @assignment 2.Ödev
* @date 15/12/2022
* @author Mehmet Efe Erbaş - efe.erbas@ogr.sakarya.edu.tr - G201210093
**/

#include "organizma.hpp"
#include <iostream>

Organizma::Organizma()
{
   
}
void Organizma::Organism()
{
    rf->readFile(rf->fileName);
    cout<<setw(32)<<"----ORGANIZMA----"<<endl<<endl;
    for (int i = 0; i < rf->organCount; i++)
    {
        if (i % 100 == 0)
        {
            if (i!=0)
            {
                cout<<endl;
            }
            
        }
        test->isAVL(rf->organ[i]->tree);
        
    }

}
void Organizma::mutatedOrganism()
{
    system("cls");
        cout<<setw(40)<<"-->ORGANIZMA (MUTASYONA UGRADI)<--"<<endl<<endl;
        for (int i = 0; i < rf->organCount; i++)
        {
            if (i % 100 == 0)
            {
                if (i != 0)
                {
                   cout<<endl;
                }
                
            }
                mutasyon->appMutation(rf->organ,rf->organCount);
                test->isAVL(rf->organ[i]->tree);
        }
}