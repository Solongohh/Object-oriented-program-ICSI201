#include<iostream>
#include "Matrix.h"

using namespace std;

main(){
    int rows,col;                               //мөр багана хадгалах хувьсагч зарлаж байна
    cout<<"rows: ";
    cin>>rows;                                  //гараас мөр хувьсагчид утга авна
    cout<<"columns: ";
    cin>>col;                                   //гараас багана хуьсагчид утга авна
    int n=rows*col;
    float values[n];                            //матрицын элементүүдийг хадгалах массив зарлаж байна
    cout<<"a matrix: ";
    for(int i=0;i<n;i++){
        cin>>values[i];                         //массивт гараас утга авч байна
    }
    Matrix a(values,rows,col);                  //а матриц класс зарлан массив болон мөр баганын хэмжээг дамжуулж өгнө
    float values1[n];
    cout<<"b matrix: ";
    for(int i=0;i<n;i++){
        cin>>values1[i];
    }
    Matrix b(values1,rows,col);                 //б матриц класс зарлан массив болон мөр баганын хэмжээг дамжуулж өгнө
    cout<<"----------------------"<<endl;
    cout<<"a+b: "<<endl;
    Matrix c=a+b;                               //с матриц зарлан а+б хариуг хэвлэж харуулна
    c.showData();
    cout<<"----------------------"<<endl;
    cout<<"a-b: "<<endl;
    Matrix d=a-b;                               //d матриц зарлан а-б хариуг хэвлэж харуулна
    d.showData();
    cout<<"----------------------"<<endl;
    cout<<"a*b: "<<endl;
    Matrix e=a*b;                               //e матриц зарлан а*б хариуг хэвлэж харуулна
    e.showData();
    cout<<"----------------------"<<endl;
    cout<<"a=b: "<<endl;
    a=b;                                        //а матриц-д б матриц-г оноох
    a.showData();
    cout<<"----------------------"<<endl;
    cout<<"a++: "<<endl;
    ++a;                                        //а матриц-г 1-ээр нэмэгдүүлж байна
    a.showData();
    cout<<"----------------------"<<endl;
    cout<<"a--: "<<endl;
    --a;                                        //а матриц-г 1-ээр хорогдуулж байна
    a.showData();
    cout<<"----------------------"<<endl;
    cout<<"a+=2: "<<endl;
    a+=2;                                       //а матриц-г 2-оор нэмэгдүүлж байна
    a.showData();
    cout<<"----------------------"<<endl;
    cout<<"a-=3: "<<endl;
    a-=3;                                       //а матриц-г 3-аар хорогдуулж байна
    a.showData();
    cout<<"----------------------"<<endl;
    cout<<"a*=2: "<<endl;
    a*=2;                                       //а матриц-г 2 дахин нэмэгдүүлж байна
    a.showData();
}