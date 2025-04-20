#include<iostream>
using namespace std;
void swapalternate(int arr[],int n){
    for(int i=0;i<n;i+=2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swapalternate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}