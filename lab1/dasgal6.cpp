#include <iostream>             //iostream sang duudah

using namespace std;            //sangaas heregleh hereglegdehuun

int main(){                     //gol funkts
    int n,i,max,min;            //n,i,max,min huvisagc zarlaj ogno
    cin >>n;                    //n huvisagcid garaas utga avc bn
    int a[n];                   //n hemjeestei a husnegt zarlaj ogc bn
    for(i=0;i<n;i++){           //i ni 0ees n hurtel davtalt guih
        cin >>a[i];             //n hemjeest a husnegtiin buh elemented utga garaas avc bn
    }
    max=a[0];                   //max-d a husnegtin ehnii gishuunig hiij ogno ingesneer tsaashaa jishihed amar
    min=a[0];                   //min-d a husnegtiin ehnii utgig onooj ogoh
    for(i=1;i<n;i++){           //i ni 1ees n hurtel guih davtalt guih
        if(max<a[i]){           //max-d bga toonoos ih too bnu shalgah
            max=a[i];           //maxaas ih too oldvol max-d oruulah
        }
        if(min>a[i]){           //min-d bga toonoos baga too bnu shalgah
            min=a[i];           //min-d bga toonoos baga too oldvol min-d oruulah
        }
    }
    cout << "max = "<<max<<endl;//oldson max-iin utgig hevleh
    cout << "min = "<<min;      //oldson min-iin utgig hevleh
}