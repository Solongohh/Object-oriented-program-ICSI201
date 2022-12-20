#include<iostream>
#include<fstream>
#include"body.h"
#include<string.h>
#include<vector>

using namespace std;

main(){
    body a[7];
    double m[7];
    double G;
    coord pos[7];
    coord vel[7];
    int i=0;
    string myText;
    ifstream MyReadFile("text.txt");
    //readfile
    while(getline(MyReadFile,myText)){
        if(i==0){
            sscanf(myText.c_str(),"%lf",&G);
            cout<<G<<endl;
            i++;
            continue;
        }
        char hh;
        //strcpy(_name,myText[1][0]);
        sscanf(myText.c_str(),"%c %lf %lf %lf %lf %lf",&hh,&pos[i].x,&pos[i].y,&vel[i].x,&vel[i].y,&m[i]);
        a[i-1].set_G(G);
        a[i-1].set_name(hh);
        cout<<myText;
        cout<<endl;
        i++;
    }
    MyReadFile.close();
    //set
    cout<<"----------------------------"<<endl;
    cout<<a->get_G()<<endl;
    for(int j=0;j<7;j++){ 
        a[j].set_mass(m[j+1]);
        a[j].set_position(pos[j+1]);
        a[j].set_velocity(vel[j+1]);
        a[j].display();
    }
    //main loop
    int test=0;
    while(1){
        for(int i=0; i<7; i++){
            coord da = a[i].Sum(a[(i+1)%7], a[(i+2)%7], a[(i+3)%7], a[(i+4)%7], a[(i+5)%7], a[(i+6)%7]);
            a[i].change_velo(da);
            a[i].change_pos();
        }
        a[1].display();
        test++;
        if(test == 50){
            break;
        }
    }
    cout << "loser bek bye2 _|_" << endl;
}