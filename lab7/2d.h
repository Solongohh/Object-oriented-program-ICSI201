#include "shape.h"                          //shape.h header file холбож өгнө
#ifndef __2d__
#define __2d__
#include<string.h>


class twod: public shape{                   //shape ээс удамшсан 2Dshape класс тодорхойлолт
    public:                                 //public хандалтын түвшинтэй
        virtual float area()=0;             //ингэснээр удамшсан функцууд дахин тодорхойлолт хийж болно
        virtual float perimeter()=0;        //периметрийг удамшиж байгаа класс дахин тодорхойлно
        float *x;                           //координатын х-ыг хадгалах хаяган хувьсагч
        float *y;                           //координатын у-ыг хадгалах хувьсагч
        void show_data(void);               //мэдээлэл дэлгэцэлж харуулах функц
        virtual void coordinate()=0;        //координатын цэгүүдийг олох функц. дахин тодорхойлох шаардлагатай
        twod(float a, int point);           //параметртэй байгуулагч функц
        ~twod();                            //устгагч функц
};
#endif 