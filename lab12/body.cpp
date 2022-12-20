#include<iostream>
#include<string.h>
#include<math.h>
#include"body.h"
// #include<windows.h>
// void printxy(int x,int y,char *s){
//     SetConsoleCursorPosition();
// }
using namespace std;
char body::get_name(){
    return name;
}
coord body::get_position(){
    return position;
}
coord body::get_velocity(){
    return velocity;
}
double body::get_G(){
    return G;
}
double body::get_mass(){
    return mass;
}
void body::set_name(char _name){
    name=_name;
}
void body::set_position(coord pos){
    this->position.x=pos.x;
    this->position.y=pos.y;
}
void body::set_velocity(coord vel){
    this->velocity.x=vel.x;
    this->velocity.y=vel.y;
}
void body::set_mass(double _mass){
    this->mass=_mass;
}
void body::set_G(double _G){
    this->G=_G;
}

//funcs
double body::Dist(body &b){
    return sqrt(pow(this->velocity.x-b.velocity.x,2)+pow(this->velocity.y-b.velocity.y,2));
}
double body::Force(body &b){
    return G*this->mass*b.mass/pow(this->Dist(b),2);
}
//need solution
coord body::Sum(body &b,body &c,body &d,body &e,body &f,body &g){
    double F[6];
    coord vec[6];
    double len[6];
    body *a[6];
    a[0]=&b;
    a[1]=&c;
    a[2]=&d;
    a[3]=&e;
    a[4]=&f;
    a[5]=&g;

    for(int i;i<6;i++){
        F[i]=this->Force(*a[i]);
    }
    for(int i=0; i<6; i++){
        len[i] = this->Dist(*a[i]);
    }

    for(int i=0;i<6;i++){
        if(this->mass>a[i]->mass){
            vec[i].x=0;
            vec[i].y=0;
        }else{
            vec[i].x=a[i]->position.x-this->position.x;
            vec[i].y=a[i]->position.y-this->position.y;
        }
    }

    coord s;
    double x=0;
    double y=0;

    for(int i=0; i<6; i++){
        x += (F[i]/mass)*(vec[i].x/len[i]);
        y += (F[i]/mass)*(vec[i].y/len[i]);
    }
    s.x = x;
    s.y = y;
    return s;
}
void body::display(){
    cout<<this->name<<" "<<this->position.x<<" "<<this->position.y<<" "<<this->velocity.x<<" "<<this->velocity.y<<" "<<this->mass<<endl;
}
void body::change_velo(coord &s){
    velocity.x += s.x;
    velocity.y += s.y;
}
void body::change_pos(){
    position.x += velocity.x;
    position.y += velocity.y;
}