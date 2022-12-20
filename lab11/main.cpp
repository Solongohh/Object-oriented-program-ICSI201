#include<iostream>
#include"circle.h"
#include"square.h"
#include"triangle.h"

using namespace std;
template <class Elm> class node{
    public:
        Elm _t;
        node<Elm> *next=NULL;
};
template <class T> class Linkedlist{
    public:
        static int len;
        ~Linkedlist(){
            if(head==NULL){
                while(len){
                    nd=head->next;
                    delete head;
                    head=nd;
                }
            }
        }
        node<T>* nd;
        node<T>* head;
        node<T>* tail;

    //functions    
        void add(T t){
            if(len==0){
                len=1;
                nd=new node<T>;
                
                nd->_t=t;
                head=nd;
                tail=nd;
            }else{
                len++;
                nd=new node<T>;
                nd->_t=t;
                tail->next=nd;
                tail=tail->next;
            }
        }
        void insert(T t,int index){
            if(index>len){
                cout<<"error"<<endl;
                exit(0);
            }else{
                nd = new node<T>;
                nd->_t=t;
                node<T> *p=head;
                for(int a=0; a<index-1; a++){
                    p=p->next;
                }
                node<T> *q=p->next;
                p->next=nd;
                nd->next=q;
                len++;
            }
        }
        //get function
        T get(int index){
            if(index<len){
                node<T> *p=head;
                for(int a=0; a<index; a++){
                    p=p->next;
                }
                return p->_t;
            }else{
                exit(0);
            }
        }
        void del(int index){
            if(index<len){
                node<T> *p=head;
                for(int a=0; a<index-1; a++){
                    p=p->next;
                }
                node<T>* q=p->next->next;
                delete p->next;
                p->next = q;
                len--;
            }
        }
        int length(){
            return len;
        }
        //normal type
        void display(){
            nd = head;
            if(typeid(nd->_t).name()[0] != 'P'){
                for(int i=0; i<len; i++){
                    cout << nd->_t << endl;
                    nd = nd->next;
                }
            }else{
                for(int i=0; i<len; i++){
                    cout << *(nd->_t) << endl;
                    nd = nd->next;
                }
            }
        }
        void sort(){
            node<T>* first;
            node<T>* second;
            if(typeid(nd->_t).name()[0] != 'P'){
                for(int i=0; i<len-1; i++){
                    nd= head;
                    for(int j=0; j<len-1-i; j++){
                        first= nd;
                        second= nd->next;
                        if(first->_t < second->_t){
                            T tmp;
                            tmp= first->_t;
                            first->_t= second->_t;
                            second->_t= tmp;
                        }
                    nd= nd->next;
                    }
                }
            }else{
                for(int i=0; i<len-1; i++){
                    nd= head;
                    for(int j=0; j<len-1-i; j++){
                        first= nd;
                        second= nd->next;
                        if(*(first->_t) < *(second->_t)){
                            T tmp;
                            tmp= first->_t;
                            first->_t= second->_t;
                            second->_t= tmp;
                        }
                    nd= nd->next;
                    }
                }
            }
        }
};
template <class T> int Linkedlist<T>::len = 0;

int main(){
    /*
    Linkedlist<twod*> list;
    triangle t1(2,1,1),t2(3,1,1),t3(4,1,1);
    square s1(2,2,2),s2(3,2,2),s3(4,2,2);
    circle c1(2,3,3),c2(3,3,3),c3(4,3,3);
    list.add(&c1);
    list.add(&c2);
    list.add(&c3);
    list.add(&s1);
    list.add(&s2);
    list.add(&s3);
    list.add(&t1);
    list.add(&t3);
    list.add(&t2);
    int n=list.length();
    cout<<"sorted: "<<endl;
    list.sort();
    list.display();
    */
   /*Linkedlist<int> test;
   test.add(0);
   test.add(5);
   test.add(1);
   test.add(3);
   test.add(9);
   test.add(5);
   test.add(7);
   test.add(2);
   test.display();
    */
}