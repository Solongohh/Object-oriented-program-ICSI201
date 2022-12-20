#ifndef __shape__
#define __shape__

class shape{                //shape үндсэн класс тодорхойлолт
    protected:              //private хандалтын түвшинтэй
        float a;            //талын урт, радиус хадгалах хувьсагч
        char *name;         //нэр хадгалах хаяган хувьсагч 
    public:                 //public хандалтын түвшинтэй
        shape(float a);     //дүрсийн нэрийг хадгалах хаяган хувьсагч
};
#endif 