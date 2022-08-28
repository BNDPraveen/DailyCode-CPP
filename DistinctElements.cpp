#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int l=s.length();
    int i,j;
    for(i=0;i<l;i++){
        for(j=0;j<i;j++){
            if(s[i]==s[j])
                break;
        }
        if(i==j)
            cout<<s[i]<<" ";
    }  
    return 0;
}