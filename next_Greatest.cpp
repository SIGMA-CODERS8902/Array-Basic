#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void next_greatest(int arr[],int n){
    

}
int main(){
    int n=12;
    int arr[n]={0,1,0,2,1,0,1,3,2,1,2,1};
    int next[n];
    next[n-1]=-1;
    int max=arr[n-1];
    for(int i=n-2;i>=0;i--){
        next[i]=max;
        if(max<arr[i]) max=arr[i]; 
    }
    for(int i=0;i<n;i++){
        cout<<next[i]<<" ";
    }
}