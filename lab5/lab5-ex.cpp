#include <iostream>
#include <string.h>

using namespace std;
class employee
{                                    // employee class тодорхойлж байна
private:                             // private хандалтын түвшинтэй байна
    char *name;                      // name хаяган хувьсагч зарлаж байна
    char *alban_tushaal;             // alban_tushaal хаяган хувьсагч зарлаж байна
    float ajillasan_t;               //ажилласан цаг float төрлийн утга авах хувьсагч зарлаж байна
    char *ID;                        // ID хаяган хувьсагч зарлаж байна
public:                              // public хандалтын түвшин
    void set_name(char *s);          // name private хандалтын түвшинтэй хувьсагчид хандаж утга оноох функц
    void set_alban_tushaal(char *s); // alban_tushaal private хандалтын түвшинтэй хувьсагчид хандаж утга оноох функц
    char set_ID(char *s);            // ID private хандалтын түвшинтэй хувьсагчид хандаж утга оноох функц
    void copy(employee &s);          //хуулагч функц зарлаж байна
    void show_data(void);            //мэдээллийг дэлгэцэлж харуулах функц
    char *get_name(void)
    {                // name private хандалтын түвшинтэй хувьсагчид хандах функц
        return name; //нэр буцаана
    }
    char *get_alban_tushaal(void)
    {                         // alban_tushaal private хандалтын түвшинтэй хувьсагчид хандах функц
        return alban_tushaal; //албан тушаал буцаана
    }
    char *get_ID(void)
    {              // ID private хандалтын түвшинтэй хувьсагчид хандах функц
        return ID; // ID буцаана
    }
    employee();  //байгуулагч функц зарлаж байна
    ~employee(); //устгагч функц зарлаж байна
};
void employee::set_name(char *s)
{ // Set_name функц тодорхойлолт
    if (name != NULL)
    { //санах ой нөөцөлсөн байсан эсэхийг шалгаад нөөцөлсөн байвал санах ойг чөлөөлнө
        delete[] name;
    }
    name = new char[strlen(s) + 1]; //шинэ санах ой нөөцлөнө. ингэхдээ орж ирсэн хүснэгтийн хэмжээгээр нөөцөлнө
    strcpy(name, s);                //нөөцөлсөн санах ой доо орж ирсэн утгыг хуулна
}
void employee::set_alban_tushaal(char *s)
{ // Set_alban_tushaal функц тодорхойлолт
    if (alban_tushaal != NULL)
    { //санах ой нөөцөлсөн байсан эсэхийг шалгаад нөөцөлсөн байвал санах ойг чөлөөлнө
        delete[] alban_tushaal;
    }
    alban_tushaal = new char[strlen(s) + 1]; //шинэ санах ой нөөцлөнө. ингэхдээ орж ирсэн хүснэгтийн хэмжээгээр нөөцөлнө
    strcpy(alban_tushaal, s);                //нөөцөлсөн санах ой доо орж ирсэн утгыг хуулна
}
char employee::set_ID(char *s)
{ // Set_ID функц тодорхойлолт
    if (ID != NULL)
    { //санах ой нөөцөлсөн байсан эсэхийг шалгаад нөөцөлсөн байвал санах ойг чөлөөлнө
        delete[] ID;
    }
    ID = new char[strlen(s) + 1]; //шинэ санах ой нөөцлөнө. ингэхдээ орж ирсэн хүснэгтийн хэмжээгээр нөөцөлнө
    strcpy(ID, s);                //нөөцөлсөн санах ой доо орж ирсэн утгыг хуулна
}
void employee::copy(employee &s)
{ // Set_copy функц тодорхойлолт
    if(ID!=NULL){
        delete[] ID;
    }
    ID=new char[strlen(s.ID)+1];
    strcpy(ID,s.ID);
    if (name != NULL)
    { // name-д санах ой нөөцөлсөн байсан эсэхийг шалгаад нөөцөлсөн байвал санах ойг чөлөөлнө
        delete[] name;
    }
    name = new char[strlen(s.name) + 1]; //шинэ санах ой нөөцлөнө. ингэхдээ орж ирсэн хүснэгтийн хэмжээгээр нөөцөлнө
    strcpy(name, s.name);                //нөөцөлсөн санах ой доо орж ирсэн утгыг хуулна
    if (alban_tushaal != NULL)
    { // alban_tushaal-д санах ой нөөцөлсөн байсан эсэхийг шалгаад нөөцөлсөн байвал санах ойг чөлөөлнө
        delete[] alban_tushaal;
    }
    alban_tushaal = new char[strlen(s.alban_tushaal) + 1]; //шинэ санах ой нөөцлөнө. ингэхдээ орж ирсэн хүснэгтийн хэмжээгээр нөөцөлнө
    strcpy(alban_tushaal, s.alban_tushaal);                //нөөцөлсөн санах ой доо орж ирсэн утгыг хуулна
}
employee::employee()
{                                //анхдагч байгуулагч функц тодорхойлолт
    ID = new char[5];            // ID-д 5 хэмжээтэй char төрлийн санах ой нөөцөлж байна
    strcpy(ID, "NULL");                 // ID-д NULL гэсэн утга оноож байна хамгийн сүүлийн байранд /0 байна
    name = new char[5];          // name-д 5 хэмжээтэй char төрлийн санах ой нөөцөлж байна
    strcpy(name, "NULL");               // name-д NULL гэсэн утга оноож байна хамгийн сүүлийн байранд /0 байна
    alban_tushaal = new char[5]; // alban_tushaal-д 5 хэмжээтэй char төрлийн санах ой нөөцөлж байна
    strcpy(alban_tushaal, "NULL");     // alban_tushaal-д NULL гэсэн утга оноож байна хамгийн сүүлийн байранд /0 байна
    ajillasan_t = 0;             //Ажилласан цагт 0 утга оноох
}
employee::~employee()
{                           //устгагч функц тодорхойлолт
    delete[] name;          // name нөөцөлсөн санах ойг чөлөөлөх
    delete[] alban_tushaal; // alban_tushaal нөөцөлсөн санах ойг чөлөөлөх
}
void employee::show_data()
{                                                         // show data функцийн тодорхойлолт хийж байна
    cout << " ID: " << get_ID() << endl;                  //ажилласан цагийг хэвлэж харуулна
    cout << " name: " << get_name() << endl;              //нэр массивт хадгалсан мэдээллийг хэвлэж харуулна
    cout << " position: " << get_alban_tushaal() << endl; //албан тушаал массивт хадгалсан өгөгдлийг хэвлэж харуулна
    // cout<<" tsalin: "<< tsalin;               //цалин хэвлэж харуулна
    cout << endl
         << endl; //мөр шилжүүлнэ
}
main()
{
    char a[20], b[20], c[20]; // 20хэмжээтэй хүснэгт үүсгэж байна
    employee d[5];            // 5 объект зарлаж байна
    for (int i = 0; i < 5; i++)
    { //давталт гүйлгэнэ. 5 объектэд утга оноохын тулд
    label1:
        int count = 0;
        cout << "number: " << i << endl;
        cout << "ID: ";
        cin >> a; //а хувьсагчид ID авна
        for (int j = 0; j <= i; j++)
        { // 0-i хүртэл гүйдэг нь өмнө нь давтагдсан эсэхийг шалгахын тулд
            if (strcmp(a, d[j].get_ID()) == 0)
            { //энд давтагдсан эсэхийг шалгах үйлдэл хийж байна

                count = 1; //давтагдсан тохиолдол гарвал count нь 1 болно
                break;
            }
        }
        if (count == 0)
        {                   //давтагдсан тохиолдол гараагүй буюу count-ын анхны утга өөрчлөгдөөгүй байвал утга онооно
            d[i].set_ID(a); // ID-д а хувьсагчид оруулсан утгыг хуулна.
            cout << "name: ";
            cin >> b;         // b массивт нэр хадгална
            d[i].set_name(b); //нэрийг Set хийж объектэд дамжуулна
            cout << "position: ";
            cin >> c;                  // c массивт албан тушаал хадгална
            d[i].set_alban_tushaal(c); //хадгалсан утгыг албан тушаалд дамжуулна
        }
        else
        { // ID давтагдал гарсан тохиолдолд:
            cout << "-------------" << endl;
            cout << "burtgeltei hereglegc bn" << endl;
            cout << "-------------" << endl;
            goto label1; // label1 рү шилжих буюу дахин ID-д гараас утга авна.
        }
    }
    for (int i = 0; i < 5; i++)
    { //бүх мэдээллийг дэлгэцэнд харуулна
        d[i].show_data();
    }
    for (int i = 0; i < 5; i++)
    { //эрэмбэлэх үйлдэл хийхийн тулд давхар давталт гүйж байна
        for (int j = 0; j < 4; j++)
        {
            if (strcmp(d[j].get_name(), d[j + 1].get_name()) > 0)
            {                   //нэрээр нь жишнэ
                employee tmp;   // tmp employee зарлаж байна. байрыг солиход хоосон хувьсагч хэрэг болдог
                tmp.copy(d[j]); //байрыг нь солихын тулд хуулагч функц ашиглан хуулж байна
                d[j].copy(d[j + 1]);
                d[j + 1].copy(tmp);
            }
        }
    }
    cout << "object exch" << endl;
    cout << "sorted" << endl;
    for (int i = 0; i < 5; i++)
    { //байр солигдсоны дараах мэдээллийг хэвлэж харуулна
        d[i].show_data();
    }
    employee *e[5]; //хаяган хүснэгт үүсгэж байна.
    for (int i = 0; i < 5; i++)
    {                        //
        e[i] = new employee; //
        e[i]->copy(d[i]);    //
    }
    for (int i = 0; i < 5; i++)
    { //эрэмбэлэх үйлдэл хийхийн тулд давхар давталт гүйж байна
        for (int j = 0; j < 4; j++)
        {
            if (strcmp(e[j]->get_name(), e[j + 1]->get_name()) > 0)
            {                  //нэрээр нь жишнэ
                employee *tmp; // tmp employee зарлаж байна. байрыг солиход хоосон хувьсагч хэрэг болдог
                tmp = e[j];    //байрыг нь солихын тулд хуулагч функц ашиглан хуулж байна
                e[j] = e[j + 1];
                e[j + 1] = tmp;
            }
        }
    }
    cout << "pointer exch" << endl;
    cout << "sorted" << endl;
    for (int i = 0; i < 5; i++)
    { //байр солигдсоны дараах мэдээллийг хэвлэж харуулна
        e[i]->show_data();
    }
}