#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int Max=INT_MIN;
    //int Max=arr[0];
    for(int i=0;i<=n-1;i++){
        if(arr[i]>Max){
            Max=arr[i];
        }
    }
    cout<<"Maximum : "<<Max;
}