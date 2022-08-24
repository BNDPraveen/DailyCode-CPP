/* In Bubble sort, largest element moves to right. So a swapping is done, when a smaller element is found on right side.
So to count number of swaps for an element, just count number of elements on right side which are smaller than it.
Array is [8, 22, 7, 9, 31, 19, 5, 13].
For 8, number of elements on right side which are smaller : 2 (7 and 5)
For 22 : 5 (7,9,19,5,13)
For 7 : 1, for 9 : 1, for 31 : 3, for 19 : 2, for 5 : 0, for 13 : 0
Adding all these, we get : 2+5+1+1+3+2 = 14
So 14 swaps will be done.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}