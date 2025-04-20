#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
//logic
    int prev[n];
    prev[0]=-1;
    int max=arr[0];
    for(int i=1;i<n;i++){
        prev[i]=max;
        if(max<arr[i]) max= arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<prev[i]<<" ";
    }
}