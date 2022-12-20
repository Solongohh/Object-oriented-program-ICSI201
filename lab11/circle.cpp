#include "circle.h"             //circle.h header file холболт
#include <math.h>               //math сан холболт
#include<iostream>

using namespace std;
float circle::perimeter(){      //периметр функц тодорхойлолт
    this->perimeter1=2*3.14*a;
    return perimeter1;            //периметрийг олон буцааж байна
}
float circle::area(){           //талбай олох функцийн тодорхойлолт
        this->area1=3.14*a*a;
        return area1;        //талбайг олон буцааж байна
    }
void circle::coordinate(){

}
circle::circle(float a, float x1, float y1):twod(a,1){  //удамшиж байгаа класс руу а,1 дамжуулах байгуулагч функц тодорхойлолт
    name=new char[7];
    strcpy(name,"circle");
    this->area();
    this->perimeter();
        this->x[0]=x1;           //x[0] массивт параметрээс х1 утгыг оруулна     
        this->y[0]=y1;           //y[0] массивт параметрээс у1 утгыг оруулна  
}
circle::~circle(){
    delete[] name;
}