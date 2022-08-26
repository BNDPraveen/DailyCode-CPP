#include<bits/stdc++.h>
using namespace std;

void timeconv24(std::string s){
    int h1=s[0]-'0';
    int h2=s[1]-'0';
    int hh=h1*10+(h2%10);
    
    if(s[8]=='A'){
        if(hh==12){
            cout<<"00";
            for(int i=2;i<=7;i++){
                cout<<s[i];
            }
        }
        else {
            for(int i=0;i<=7;i++){
                cout<<s[i];
            }
        }
    }
    else{
        if(hh==12){
            hh=hh;
            cout<<hh;
            for(int i=2;i<=7;i++){
                cout<<s[i];
            }
        }
        else {
            hh=hh+12;
            cout<<hh;
            for(int i=2;i<=7;i++){
                cout<<s[i];
            }
        }
    }
}


int main(){
    string s;
    cin>>s;
    timeconv24(s);
}
