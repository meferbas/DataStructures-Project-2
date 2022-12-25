/**
* @file Queue.hpp
* @description Kuyruk sınıfı için gerekli fonksiyon ve değişkenlerin tanımlanması
* @course Veri Yapıları 2-A
* @assignment 2.Ödev
* @date 15/12/2022
* @author Mehmet Efe Erbaş - efe.erbas@ogr.sakarya.edu.tr - G201210093
**/

#ifndef queue_hpp
#define queue_hpp

#include <iostream>
using namespace std;
class queueNode
{
public:
    int item;
    queueNode *next;
    queueNode(int itm);
};
class Queue
{
private:
    queueNode *front;
    queueNode *back;
    int length;

public:
    Queue();
    ~Queue();
    void clear();
    int count();
    bool isEmpty();
    int peek();
    void enqueue(const int &item);
    void dequeue();
};
#endif