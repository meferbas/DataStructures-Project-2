/**
* @file ikiliaramaagaci.hpp
* @description İkili Arama Ağacı sınıfı için gerekli fonksiyon ve değişkenlerin kodsal bir şekilde oluşturulması
* @course Veri Yapıları 2-A
* @assignment 2.Ödev
* @date 15/12/2022
* @author Mehmet Efe Erbaş - efe.erbas@ogr.sakarya.edu.tr - G201210093
**/

#include <iostream>
#include "ikiliaramaagaci.hpp"
#include <cmath>
using namespace std;

Node::Node(Doku* data)
{
    this->data=data;
    next=0;
    left=0;
    right=0;
    height=0;
}

IkiliAramaAgaci::IkiliAramaAgaci()
{
    root=0;
}
void IkiliAramaAgaci::add(Node* &activeNode, Doku*data)
{
    if (activeNode==NULL)
        activeNode= new Node(data);
    else if (activeNode->data->middleValue>data->middleValue)
        add(activeNode->left, data);
    else if (activeNode->data->middleValue==data->middleValue)
        add(activeNode->left, data);
    else if (activeNode->data->middleValue<data->middleValue)
        add(activeNode->right, data);
    else
        return;
}
void IkiliAramaAgaci::add(Doku* data)
{
    add(root, data);
}
int IkiliAramaAgaci::height()
{
    return height(root);
}
int IkiliAramaAgaci::height(Node* activeNode)
{
    if (activeNode)
    {
        return 1+max(height(activeNode->left),height(activeNode->right));
    }
    return 0;   
}
IkiliAramaAgaci*IkiliAramaAgaci::AddAndSort()
{
    IkiliAramaAgaci*tree = new IkiliAramaAgaci();
    postOrder(this->root,tree);
    return tree;
}
int IkiliAramaAgaci::postOrder(Node*active,IkiliAramaAgaci*tree )
{
    if (active==0)
    {
       return 0;
    }
    else
    {
        postOrder(active->left,tree);
        postOrder(active->right,tree);
        tree->add(active->data);

    }
    
}
void IkiliAramaAgaci::half()
{
    half(this->root);
}
void IkiliAramaAgaci::half(Node* active)
{
    if (active != NULL)
    {
        half(active->left);
        half (active->right);
        active->data->halveIt();
    }
    
}
bool IkiliAramaAgaci::isAVL()
{
    return isAVL(root);
}
bool IkiliAramaAgaci::isAVL(Node* root)
{
    if (root==NULL)
    {
        return 1;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    if (abs(lh - rh) <= 1 && isAVL(root->left) && isAVL(root->right))
    {
        return 1;
    }
    else
     return 0; 
}
IkiliAramaAgaci::~IkiliAramaAgaci()
{
    
}


