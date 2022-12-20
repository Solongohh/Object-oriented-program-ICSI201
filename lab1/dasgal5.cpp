#include <iostream>                                //iostream sang duudaj bn

using namespace std;                               //sangaas duudaj heregleh hereglegdehuun

int main(){                                        //gol funkts
    int n,p=0,k=1,i;                               //n,i bolon p=0,k=1 gsn anhni utgatai huvisagc zarlaj bn
    cin >>n;  
    int a[n];                                      //n iin utgig garaas avc bn
    for(i=0;i<n;i++){ 
        cin >>a[i];                                //i ni 1ees n hurtel guih davtalt 
        p=p+a[i]; 
        k=k*a[i];                                  //1ees n hurtelh toon niilber olj bn
    }
    cout <<"niilber = "<<p<< endl;                 //olson n hurtelh tooni niilberig hevlen haruulah
    cout <<"urjver = "<<k;                         //olson n hurtelh toon urjveriig hevlen haruulah
}