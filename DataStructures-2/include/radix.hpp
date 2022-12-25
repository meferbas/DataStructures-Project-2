/**
* @file radix.hpp
* @description Radix sınıfı için gerekli fonksiyon ve değişkenlerin tanımlanması
* @course Veri Yapıları 2-A
* @assignment 2.Ödev
* @date 15/12/2022
* @author Mehmet Efe Erbaş - efe.erbas@ogr.sakarya.edu.tr - G201210093
**/

#ifndef radix_hpp
#define radix_hpp

#include "queue.hpp"
#include <cmath>

class Radix
{
private:
	int *numbers;
	int length;
	Queue **queues;
	int maxStep;

	int MaxStepNumber();
	int StepCount(int);
	int *QueueCurrentLengths();

public:
	Radix(int *, int);
	int *Sort();
	~Radix();
};


#endif