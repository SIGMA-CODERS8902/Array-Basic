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
    int Min=INT_MAX;
    //int Min=arr[0];
    for(int i=0;i<=n-1;i++){
        if(arr[i]<Min){
            Min=arr[i];
        }
    }
    cout<<"Minimum : "<<Min;
}