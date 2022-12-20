#include <iostream>                 //iostream san duudaj bn

using namespace std;                //

int main(){                         //gol funkts
    int i,n,count=0;                //i,n,count huvisagc zarlaj bn. count ni 0 gsn anhnii utgatai
    cin >>n;                        //n huvisagcid garaas utga oruulna
    int a[n];                       //n hemjeestei a husnegt zarlaj bn
    for(i=0;i<n;i++){               //i ni 0ees n hurtel guih davtalt
        cin >>a[i];                 //a husnegted utga oruulah
    }
    for(i=0;i<n;i++){               //i ni 0ees n hurtel guih davtalt
        if(a[i]%2==0){              //a husnegtiin elementuudig 2t buhleer huvaagdah esehig shalgaj bn
            count++;                //2t buhleer huvaagdah buyu tegsh too oldoh burt countig nemegduulne.ene ni niit heden tegsh too oldohig toolno
        }
    }
    cout <<"tegsh too = "<<count;   //tegsh too hed oldsonig haruulah countig hevlen haruulna
}