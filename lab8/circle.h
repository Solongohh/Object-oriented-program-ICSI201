#include "2d.h"                  //2d.h header file холбож байна
#ifndef __circle__
#define __circle__


class circle:public twod{        //2dshape классаас удамшина
public:
   float area();                 //талбай олох функц
   float perimeter();            //периметр олох функц
   void coordinate();            //координатын цэгүүдийг олох функц
   circle(float a, float x1, float y1);//параметртэй байгуулагч функц зарлалт
   ~circle();
};
#endif 