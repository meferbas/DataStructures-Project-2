/**
* @file ikiliaramaagaci.hpp
* @description İkili Arama Ağacı için gerekli fonksiyon ve değişkenlerin tanımlanması
* @course Veri Yapıları 2-A
* @assignment 2.Ödev
* @date 15/12/2022
* @author Mehmet Efe Erbaş - efe.erbas@ogr.sakarya.edu.tr - G201210093
**/

#ifndef ikiliaramaagaci_hpp
#define ikiliaramaagaci_hpp
#include "doku.hpp"
//Node için farklı hpp cpp olustur
class Node
{
    public:
    Doku* data;
    Node(Doku* data);
    Node* left;
    Node* right;
    Node* next;
    int height;
};
class IkiliAramaAgaci
{

    public:
    IkiliAramaAgaci();
    ~IkiliAramaAgaci();
    void postOrder();
    bool isThere(int data);
    void add(Doku* data);
    void add(Node* &activeNode, Doku* data);
    void remove(int data); 
    bool isThere(int wanted, Node*active);
    int height();
    int height(Node* activeNode);

    int postOrder(Node* active, IkiliAramaAgaci* tree);

    void half();

    void half(Node* node);

    IkiliAramaAgaci*AddAndSort();
    bool isAVL(Node* root);
    bool isAVL();
    Node * root;
    int left,right;

    private:
    




};

#endif