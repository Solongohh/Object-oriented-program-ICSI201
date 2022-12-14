#include<iostream>
#include <string.h>
using namespace std;

#define N 6500                                          //n хувьсагчид 6500 тогтмол утга оноож байна
#define zts 10000                                       //zts хувьсагчид 10000 тогтмол утга оноож байна
class employee{                                         //employee класс зарлаж байна
    public:                                             //public аар өгөгдөл функцуудыг зарлана
        int dugaar;                                     //дугаар нэртэй гишүүн өгөгдөл зарлаж байна
        char ner[20];                                   //нэр хадгалах хүснэгтэн өгөгдөл зарлаж байна. 
        char alban_tushaal[15];                         //албан тушаал гэсэн бичвэрэн өгөгдөл хадгалах массив зарлаж байна
        float ajillasan_t;                              //ажилласан цаг хувьсагч буюу гишүүн өгөгдөл зарлаж байна
        void garaani_utga_onooh();                      //гарааны утга оноох үйлдэл хийх функц зарлаж байна.
        void get_data(int i);                           //гишүүн өгөгдөлд утга гараас авах функц зарлаж байна.
        void show_data();                               //мэдээлэл дэлгэцэнд харуулах функц зарлаж байна
        float tsalin_bodoh();                           //цалин бодох үйлдэл хийх функц зарлалт
        float zahirlin_tsalin_bodoh();                  //захирлын цалин бодох үйлдэл хийх функц зарлалт
        float ajillasan_tsag_nemegduuleh(float x);      //ажилласан цагийг нэмэгдүүлэх үйлдэл хийнэ
};
void employee::garaani_utga_onooh(){                    //гарааны утга оноох функцийн тодорхойлолт хийх
    dugaar=1;                                           //дугаарт гарааны утга 1-ыг оноож байна
    strcpy(ner, "soko");                                //нэр гэсэн массивт соко гэсэн үг хадгалж байна
    strcpy(alban_tushaal, "systemin_shinjeec");         //албан тушаал массивт системийн шинжээч гэсэн өгөгдөл хадгалж байна
    ajillasan_t=1;                                      //ажилласан цагт 1 утга оноох
}
void employee::get_data(int i){                         //get data функц тодорхойлж өгнө
    dugaar=i;                                           //дугаар хувьсагчид i хадгална. өгөгдөл авах бүрт i нэмэгдэх учир нэг ёсны дугаарлаж байна гэсэн үг
    cout<<"ner: ";                                      //нэр: хэвлэж харуулна
    cin>>ner;                                           //нэр хувьсагчид гараас утга авна
    cout<<"alban tushaal: ";                            //албан тушаал: хэвлэж харуулна
    cin>>alban_tushaal;                                 //албан тушаал массивт өгөгдөл гараас хадгална
    cout<<"ajillasan_t: ";                              //ажилласан цаг: хэвлэж харуулна
    cin>>ajillasan_t;                                   //ажилласан цаг хувьсагчид гараас утга оруулна
}
void employee::show_data(){                             //show data функцийн тодорхойлолт хийж байна
    cout<<" dugaar: "<<dugaar<<endl;                    //дугаарт хадгалсан мэдээллийг хэвлэж харуулна
    cout<<" ner: "<<ner<<endl;                          //нэр массивт хадгалсан мэдээллийг хэвлэж харуулна
    cout<<" alban tushaal: "<<alban_tushaal<<endl;      //албан тушаал массивт хадгалсан өгөгдлийг хэвлэж харуулна
    cout<<" ajillasan tsag:"<<ajillasan_t<<endl<<endl;  //ажилласан цагийг хэвлэж харуулна
}
float employee::tsalin_bodoh(){                         //цалин бодох функцийн тодорхойлолт
    if(strcmp(alban_tushaal, "zahiral") == 0){          //албан тушаал массивт захирал гэсэн тэмдэгт мөрийн цуваа байна уу шалгаад байвал 0 ийг буцаана
        return zahirlin_tsalin_bodoh();                 //if нөхцөл биелэсэн тохиолдолд захирлын цалин бодох функцийг дуудаж ажиллуулна
    }
    float tsalin =ajillasan_t*N;                        //эсрэг тохиолдолд ажилчдын цалин бодно. ажилласан цагийг тогтмол 6500ара үржүүлнэ
    return tsalin;                                      //цалинг буцаана
}
float employee::ajillasan_tsag_nemegduuleh(float x){    //ажилласан цаг нэмэгдүүлэх фунзц тодорхойлж байна
    if(x<24 && x>0){                                    //параметрээс орж ирж буй утга 0ээс24 ын хоорон байна уу шалгах
        ajillasan_t += x;                               //нөхцөл биелэсэн тохиолдолд ажилласан цагийг нэмэгдүүлэх үйлдэл хийнэ
        return ajillasan_t;                             //ажилласан цагийг буцаана                        
    }else{                                              //эсрэг тохиолдолд
        return 0;                                       //0 утга буцаана
    }
}
float employee::zahirlin_tsalin_bodoh(){                //захирлын цалин бодох фунзцийн тодорхойлолт
    float zahiral_tsalin=ajillasan_t*zts;               //ажилласан цагийг 10000 тогтмолоор үржүүлнэ
    return zahiral_tsalin;                              //захирлын цалинг буцаана
}
main(){       
    int i = 2, j,n;                                     //i,j,n хувьсагч зарлаад i-д 2 утга оноож байна
    employee a[10];                                     //employee классд a[] массиван объект 10 хэмжээтэй зарлаж өгч байна
    a[1].garaani_utga_onooh();                          //а[] массивийн 1 дэх элементэд гарааны утга оноох функц дуудаж гарааны утга оноож өгч байна
    while(1){                                           //while давталт үнэн байхад биелэхээр дуудаж байна
        if (i<10)                                       //i нь 10 бага уу шалгах
        {                       
            cout<<endl<<"1.ajilcin nemj burtgeh"<<endl; //ажилчин нэмж бүртгэх хэвлэж харуулна
            cout<<"2.medeelel hevlej haruulah"<<endl;   //мэдээлэл хэвлэж харуулах хэвлэж харуулна
            cout<<"3.ajillasan tsag nemegduuleh"<<endl; //ажилласан цаг хэвлэж харуулах хэвлэж харуулна
            cout<<"4.tsalin bodoh"<<endl<<endl;         //цалин бодох хэвлэж харуулна
            cin>>n;                                     //n хувьсагчид гараас утга авна
            if(n==1){                                   //n-ыг 1 тэй тэнцүү байна уу гэдгийг шалгаж байна 
                int k=i;                                //k хувьсагчид i тоог хадгалж авах
                a[i++].get_data(k--);                   //а хүснэгтийн i нэмэгдүүж байгаад get data функц дуудаж ажиллуулна
            }else if(n==2){                             //n-ыг 2 той тэнцүү байна уу гэдгийг шалгаж байна 
                for(j = 1; j < i; j++)                  //j тоолуурын гишүүн 0ээс i хүртэл гүйнэ.
                {
                    a[j].show_data();                   //бүх мэдээллийг хэвлэж харуулна
                }
            }else if (n==3){                            //n-ыг 3 тай тэнцүү байна уу гэдгийг шалгаж байна 
                float x;                                //x бутархай тоо авах хувьсагч зарлаж байна
                cout<<"ajilcnii dugaar: ";              //ажилчны дугаар: хэвлэж харуулна
                cin>>i;                                 //i тоог гараас авна
                cout<<"ajillasan tsag: ";               //ажилласан цаг хэвлэж харуулна
                cin>>x;                                 //х хувьсагчид утга гараас авна
                a[i].ajillasan_tsag_nemegduuleh(x);     //i дугаартай гишүүний ажилласан цагийг нэмэгдүүлэх функц дуудаж байна
            }else if(n==4){                             //n-ыг 4 тэй тэнцүү байна уу гэдгийг шалгаж байна 
                cout<<"ajilcnii dugaar: ";              //ажилчны дугаар хэвлэж харуулна
                cin>>i;                                 //i хувьсагчид гараас утга оруулна. нэг ёсны аль ажилчины цалин бодох вэ гэдгээ оруулна
                cout<<a[i--].tsalin_bodoh();            //ажилчны цалинг бодно
            }
        }else{                                           //i 10аас их тохиолдолд
            cout<<"burtgelin too hyzgaartaa hursen"<<endl;//бүртгэлийн тоо хязгаартаа хүрсэн гэж хэвлэх
            break;                                       //давталтыг хүчээр дуусгах
        }
        

    }
}