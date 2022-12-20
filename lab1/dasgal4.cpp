#include <iostream>                                     //iostream sang duudaj bn

using namespace std;                                    //sangaas heregleh hereglegdehuun

int main(){                                             //gol funkts
    int n=6,p=0,i;
    float k;                                            //n=5,p=0 gsn anhni utgatai huvisagc,k,i huvisagcig zarlaj ogc bn.
    for(i=1;i<=n;i++){                                  //for davtalt guilgej bn i ni 1ees n hurtel 1 1eer nemegdene
        p=p+i;                                          //n hurtelh tooni niilber oloh heseg.p iin anhni utga 0 gj ogson. uun deer 1 2 3 gh metcilen n hurtel nemegdene
    }
    k=float(p)/n;                                       //arifmetik dundaj bodoj olj bn

    cout    <<"N hurtelh toonii niilber = "<<p<< endl   //olson n hurtelh tooni niilberiig hevlen haruulj bn
            <<"aripmetik dundaj = "<<k;                 //olson arifmetik dundajig hevlen haruulj bn
}