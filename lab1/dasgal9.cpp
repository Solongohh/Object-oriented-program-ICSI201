#include <iostream>             //iostream san duudaj ogno

using namespace std;            //sangaas heregleh hereglegdehuun

int main(){                     //gol main funkts
    int i,n,j,tmp,count=0;      //i,n,j,tmp,count gsn huvisagc zarlsj ogno. count=0 gsn anhni utgatai
    cin >> n;                   //n huvisagcid garaas utga avna
    int a[n];                   //n hemjeestei a husnegtiig zarlaj bn
    for(i=0;i<n;i++){           //for davtalt guilgej a husnegted garaas utga oruulj bn
        cin >>a[i];             //a husnegted garaas utga oruulah uil yvts
    }
    for(i=0;i<n-1;i++){         //for davtalt guilgj bn. 
        for(j=0;j<n-1-i;j++){   //j ni 0ees n-1-i hurtel guine. n-1-i guih ucir ni a[i]iig a[i+1] haritsuulahad j ni n hurtel guivel davtalt yvagdahad suulin gishuunig daraagin gishuntei haritsuulj bolohgui.n-1-i buyu i iig hasaj ogoh ucir ni erembelegdsen toog dahij shalgahguin ucir
            if(a[j]>a[j+1]){    //a[j] deh gishuunig daraagin gishuuntei harutsuulj bn
                tmp=a[j];       //hooson huvisagcid a[j] utgig hadgalna
                a[j]=a[j+1];    //a[j]-d a[j+1] utgig hadgalna
                a[j+1]=tmp;     //a[j+1]-d tmp-d hadgalsan utgig hadgalna 
                count++;        //niit heden udaa bair solih uil yvts bolsnig toolj bn
            }
        }
        if(count==0){           //bair solih uil yvts hiigdsen esehig shalgaj. 
            break;              //0 udaa bair solison bol ug husnegt osohoor ali hediin erembelegdsen bn gj uzeed davtaltig zogsoono
        }else{                  //esreg tohioldold buyu bair soligdson bol
            count=0;            //countig dahin 0len davtalt urgeljilne
        }
    }
    cout <<"osohoor = ";        //osohoor gesen ugiig hevlej haruulna
    for(i=0;i<n;i++){           //a husnegtin buh elementiig hevlej haruulhin tuld for davtalt guilgej 
        cout <<a[i];            //hevleh uil yvts
    }

    cout <<endl;                //osohoor hevleh duussanii daraagin mor luu shiljuulj
    for(i=0;i<n-1;i++){         //for davtalt guilgj bn. 
        for(j=0;j<n-1-i;j++){   //j ni 0ees n-1-i hurtel guine. n-1-i guih ucir ni a[i]iig a[i+1] haritsuulahad j ni n hurtel guivel davtalt yvagdahad suulin gishuunig daraagin gishuntei haritsuulj bolohgui.n-1-i buyu i iig hasaj ogoh ucir ni erembelegdsen toog dahij shalgahguin ucir
            if(a[j]<a[j+1]){    //a[j] deh gishuunig daraagin gishuuntei harutsuulj bn
                tmp=a[j];       //a[j]-d a[j+1] utgig hadgalna
                a[j]=a[j+1];    //a[j]-d a[j+1] utgig hadgalna
                a[j+1]=tmp;     //a[j+1]-d tmp-d hadgalsan utgig hadgalna 
                count++;        //niit heden udaa bair solih uil yvts bolsnig toolj bn
            }
        }
        if(count==0){           //bair solih uil yvts hiigdsen esehig shalgaj
            break;              //0 udaa bair solison bol ug husnegt osohoor ali hediin erembelegdsen bn gj uzeed davtaltig zogsoono
        }else{                  //esreg tohioldold buyu bair soligdson bol
            count=0;            //countig dahin 0len davtalt urgeljilne
        }
    }
    cout <<"buurahaar = ";      //buurahaar gsn ugiig hevlej haruulna
    for(i=0;i<n;i++){           //a husnegtin buh elementiig hevlej haruulhin tuld for davtalt guilgej 
        cout <<a[i] ;           //hevleh uil yvts
    }
}  