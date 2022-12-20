#include "2d.h"
#include <iostream>
#include<string.h>

using namespace std;
void twod::show_data(void){ 
            cout<<"-------------"<<endl;
            cout<<name<<endl;
            cout<<"side: ";
            cout<<a<<endl;
            cout<<"area: ";
            cout<< area1<<endl;
            cout<<"perimeter: ";
            cout<< perimeter1<<endl;
            cout<<endl;
        }

bool twod::operator<(twod &b){
    if(this->area1 < b.area1){
        return true;
    }
    return false;
}
bool twod::operator>(twod &b){
    if(this->area1 > b.area1){
        return true;
    }
    return false;
}
ostream & operator<<(ostream &out, const twod &c){
    out << "--------------------\n";
    out << "shape:    " << c.name << "\n";
    out << "area:     " << c.area1 << "\n";
    out << "perimetr: " << c.perimeter1 << endl;
    return out;
}
twod::twod(float a, int point):shape(a){            //параметртэй байгуулагч функцийн тодорхойлолт
    this->a = a;                                    //эх классын а хувьсагчид параметрээр дамжин орж ирсэн а хувьсагчийн утгыг дамжуулна
    this->x = new float[point];                     //2d shape-ын х хаяган хувьсагчид санах ой нөөцлөнө
    this->y = new float[point];                     //у хаяган хувьсагчид санах ой нөөцөлнө
}
twod::~twod(){
    delete[] x;                                     //нөөцөлсөн санах ойг чөлөөлнө
    delete[] y;                                     //нөөцөлсөн санах ойг чөлөөлнө
}  