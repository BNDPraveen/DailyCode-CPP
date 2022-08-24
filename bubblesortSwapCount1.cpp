#include<bits/stdc++.h>
using namespace std;

int bubblesort(int a[],int n){
    int count =0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                count++;
            }
        }
    }
    return count;
}
void printArray(int* a,int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"swaps="<<bubblesort(a,n)<<endl;
    printArray(a,n);
    return 0;
}