#include "2d.h"
#include <iostream>
#include<string.h>

using namespace std;
void twod::show_data(void){                         //мэдээлэл харуулах функцийн тодорхойлолт
            cout<<"-------------------"<<endl;
            cout<<name<<endl;
            cout<<"side: ";
            cout<<a<<endl;
            cout<<"area: ";
            cout<< area()<<endl;
            cout<<"perimeter: ";
            cout<< perimeter()<<endl;
        }
twod::twod(float a, int point):shape(a){            //параметртэй байгуулагч функцийн тодорхойлолт
    cout<<"created"<<endl<<"----------"<<endl;
    this->a = a;                                    //эх классын а хувьсагчид параметрээр дамжин орж ирсэн а хувьсагчийн утгыг дамжуулна
    this->x = new float[point];                     //2d shape-ын х хаяган хувьсагчид санах ой нөөцлөнө
    this->y = new float[point];                     //у хаяган хувьсагчид санах ой нөөцөлнө
    cout<<"----------"<<endl;                       
}
twod::~twod(){
    cout<<"deleted"<<endl;
    delete[] x;                                     //нөөцөлсөн санах ойг чөлөөлнө
    delete[] y;                                     //нөөцөлсөн санах ойг чөлөөлнө
}    