#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,3,2,5,1};
    int n=9;
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    cout<<ans;
}