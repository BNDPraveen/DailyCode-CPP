//link https://www.hackerrank.com/challenges/funny-string/problem

#include<bits/stdc++.h>
using namespace std;

std::string funnyString(std::string s){
    int diff1,diff2;
    int l=s.length();
    bool flag=0;
    for(int i=0;i<l-1;i++){
        diff1=abs(s[i]-s[i+1]);
        diff2=abs(s[l-i-1]-s[l-i-2]);
        if(diff1==diff2)
            flag=1;
        else {
            static string s="Not Funny";
            return s;    
        }
    }
     static string s1="Funny";
     return s1;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<funnyString(s)<<endl;
    }
}
