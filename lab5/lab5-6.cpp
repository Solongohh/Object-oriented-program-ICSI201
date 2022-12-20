#include<iostream>

using namespace std;
class employee{
    public:
        char *name;
        char *possition;
};
main(){
    employee *a[5];
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
}