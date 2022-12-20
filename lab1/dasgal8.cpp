#include <iostream>                 //iostream san duudaj bn

using namespace std;                //sangaas heregleh hereglegdehuun

float arith_mean(int a[],float n){    //arith_mean nertei float buyu butarhai utga butsaah funkts zarlaj bn
    int i,s=0;                      //i bolo s=0 anhni utgatai huvisagc zarlaj bn
    for(i=0;i<n;i++){               //i ni 0ees n hurtel guih davtalt
        s=s+a[i];                   //s ni niilber hadgalah huvisagc. s-d a husnegtiin buh utgig nemj ogno
    }
    return s/float(n);                     //arith_mean funkts s/n buyu aripmetik dundajiig butsaaj bn
}

int main(){                         //gol funkts
    int i,n;
    float m;                        //i,n,m huvisagc zarlaj
    cin >>n;                        //n huvisagcid garaas utga onooj ogno
    int a[n];                       //n hemjeestei a husnegt zarlasan bn
    for(i=0;i<n;i++){               //i ni 0ees n hurtel guih davtalt
        cin >>a[i];                 //n hemjeestei a husnegted garaas utga oruulj bn
    }
    m=arith_mean(a,n);              //arith_mean funktsig ashiglan n hemjeestei a husnegtin dundajig olj bn
    cout <<"aripmetik dundaj = "<<m;//olson dundajiig hevlej haruulj bn
}