/**
* @file queue.hpp
* @description Kuyruk sınıfı için gerekli fonksiyon ve değişkenlerin kodsal bir şekilde oluşturulması
* @course Veri Yapıları 2-A
* @assignment 2.Ödev
* @date 15/12/2022
* @author Mehmet Efe Erbaş - efe.erbas@ogr.sakarya.edu.tr - G201210093
**/

#include "queue.hpp"
#include <iomanip>
#include <iostream>
using namespace std;
queueNode::queueNode(int itm)
{
    item = itm;
    next = NULL;
}
Queue::Queue()
{
    front = back = NULL;
    length = 0;
}
Queue::~Queue()
{
    clear();
}
void Queue ::clear()
{
    while (!isEmpty())
        dequeue();
}
int Queue::count()
{
    return length;
}
bool Queue::isEmpty()
{
    return length == 0;
}
int Queue::peek()
{
    if (isEmpty())
        throw "Queue is empty";
    return front->item;
}
void Queue::enqueue(const int &item)
{
    queueNode *last = new queueNode(item);
    if (isEmpty())
        front = back = last;
    else
    {
        back->next = last;
        back = last;
    }
    length++;
}
void Queue::dequeue()
{
    if (isEmpty())
        throw "Queue is empty";
    queueNode *eskiOn = front;
    front = front->next;
    delete eskiOn;
    length--;
}
