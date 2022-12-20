#include <iostream>                     //iostream san duudaj bn

using namespace std;                    //sangaas heregleh hereglegdehuun

int main(){                             //gol funkts
    int i,n,count=0;                    //i,n,count huvisagc zarlaj bn. count ni 0 gsn anhnii utgatai
    cin >>n;                            //n huvisagcid garaas utga oruulna
    for(i=1;i<=n;i++){                  //i ni 1ees n hurtel davtalt guine
        if(n%i==0){                     //garaas oruulsan too 1ees ter too hurtel huvaagdaj bnu gedgiig shalgaj bn
            count++;                    //heden too huvaagdsaniig toolno
        }
    }
    if(count==2){                       //huvaagdagc ni 2 bnu ugui yu gdgig shalgana. ucir ni anhni too oortoo bolon 1iin toond l huvaagdana
        cout <<n<<" anhnii too mon";    //ug nohtsol biylevel anhnii too monucir hevlej haruulna
    }else{                              //esreg togioldol buyu 2oos deesh huvaagctai uyd
        cout <<n<<" anhnii too bish";   //anhnii too bish hemeen hevlej haruulj bn
    }
}