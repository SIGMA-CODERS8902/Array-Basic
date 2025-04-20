#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter element to be searched : ";
    cin>>x;
    //check mark
    bool flag=false;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x){
            flag=true;
        }
    }
        if(flag==true){
            cout<<x<<"element is present "<<endl;
        }
        else{
            cout<<"element is not present "<<endl;
        
        }
}