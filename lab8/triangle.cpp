#include "triangle.h"               //triangle.h header file холбож байна
#include <math.h>
#include<iostream>

using namespace std;
float triangle::perimeter(){        //периметр функц тодорхойлолт
    return 3*a;                     //периметрийг олон буцааж байна
}
float triangle::area(){             //талбай олох функцийн тодорхойлолт
    float h=sqrt(a*a-a/2*a/2);      //гурвалжны өндөрийг олж байна
    return a*h/2;                   //талбайг олон буцааж байна
}
void triangle::coordinate(){        //координатын цэгийг олох функц тодорхойлолт
    float h=sqrt(a*a-a/2*a/2);
    x[1]=x[0]+a/2;          //х у цэгүүдийг олж байна
    y[1]=y[0]-h;
    x[2]=x[0]-a/2;
    y[2]=y[0]-h;
}
triangle::triangle(float a, float x1, float y1):twod(a,3){
        name=new char[9];
        strcpy(name,"triangle");
        cout << "triangle area s: " << this->area() << endl;
        cout << "triangle perimeter p: " << this->perimeter() << endl;
        this->x[0]=x1;
        this->y[0]=y1;
        cout << "coordinate"<<endl;
        coordinate();
        for(int i=0;i<3;i++){
            cout << "x: "<<x[i]<<endl;
            cout << "y: "<<y[i]<<endl;
        }
}
triangle::~triangle(){
    delete[] name;
}