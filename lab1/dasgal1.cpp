#include <iostream>         //iostream sang duudaj bna

using namespace std;        //san dotroos heregleh hereglegdehuun

int main()                  //gol funkts 
{
    int a, b, c, max;       //a,b,c,max gesen huvisagc zarlaj bn
    cin >> a>> b>> c;       //a,b,c huvisagcind garaas utga avc bn
    if(a>=b && a>=c){       //a ni b bolon c ees ih uu gsn nohtsol oruulj bn
        max=a;              //deerh nohtsol biylesen tohioldold max huvisagcid a-g hadgalj avna
    }else if(b>a && b>=c){  //ehnii nohtsol biyleegui bol b ni a bolon c ees ih uu gdgig shalgah nohtsol
        max=b;              //nohtsol biylevel max-d b-g hadgalj avna
    }else{                  //a bolon b ih uu gsn nohtsol biyleegui tul c-g automataar ih hemeen uzne
        max=c;              //max huvisagcid c-g hadgalan avc bn
    }
        cout<<max;          //etssin ur dun.max-d hadgalj avsan utgig hevlen haruulna
}