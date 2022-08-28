// https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem?isFullScreen=true
#include<bits/stdc++.h>
using namespace std;

int* breakingRecords(int n,int* a){
    int min=INT_MAX,max=a[0],count=0,flag=0;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
            count++;
        }   
        if(a[i]<a[0] && a[i]<min){
            min=a[i];
            flag++;
        }
    } 
    static int record[2]={count,flag};
    return record;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int *x=breakingRecords(n,a);
    for(int i=0;i<2;i++){
        cout<<*(x+i)<<" ";
    }
    return 0;
}
