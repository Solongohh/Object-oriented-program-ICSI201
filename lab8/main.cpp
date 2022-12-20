#include "circle.h"                         //circle.h file холбож байна
#include "triangle.h"                       //triangle.h file холбож байна
#include "square.h"                         //square.h file холбож байна
#include<iostream>                          //iostream сан холбож байна
#include<string.h>


using namespace std;

main(){
    cout<<"uusgeh dursnii too: ";
    int n;
    cin>> n;
    twod *shapes[n];
    twod::number_ret();
    for(int i=0;i<n;i++){
label1: char name1[20];
        cout<<"shape: ";
        cin>>name1;
        float a;
        cout<<"a: ";
        cin>>a;
        float x,y;
        cout<<"x: ";
        cin>>x;
        cout<<"y: ";
        cin>>y;
        if(strcmp(name1,"square")==0){
            shapes[i]=new square(a,x,y);
            twod::number_ret();
            //square s1(a,x,y); 
        }else if(strcmp(name1,"triangle")==0){
            shapes[i]=new triangle(a,x,y);
            twod::number_ret();
            //triangle s2(a,x,y);
        }else if(strcmp(name1,"circle")==0){
            shapes[i]=new circle(a,x,y);
            twod::number_ret();
            //circle s3(a,x,y);
        }else{
            cout<<"square, triangle, circle bicne uu "<<endl;
            goto label1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(shapes[j]->area()>shapes[j+1]->area()){
                twod *tmp;
                tmp=shapes[j];
                shapes[j]=shapes[j+1];
                shapes[j+1]=tmp;
            }
        }
    }
    cout<<"----------"<<endl<<"sorted area"<<endl<<"----------"<<endl;
    for(int i=0;i<n;i++){
        shapes[i]->show_data();
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(shapes[j]->perimeter()>shapes[j+1]->perimeter()){
                twod *tmp;
                tmp=shapes[j];
                shapes[j]=shapes[j+1];
                shapes[j+1]=tmp;
            }
        }
    }
    cout<<"----------"<<endl<<"sorted perimeter"<<endl<<"----------"<<endl;
    for(int i=0;i<n;i++){
        shapes[i]->show_data();
    }
    twod::number_ret();
} 