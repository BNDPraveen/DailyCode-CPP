#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==1)
        cout<<n<<" is a prime number";
    else
        cout<<n<<" is not a prime number";
}