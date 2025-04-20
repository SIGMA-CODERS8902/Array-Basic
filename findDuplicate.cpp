#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,3};
    int n=6;
    int ans=0;
    //xoring all element of array
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    //xor[1,n-1]
    for(int i=1;i<n;i++){
        ans=ans^i;
    }
    cout<<ans;
}