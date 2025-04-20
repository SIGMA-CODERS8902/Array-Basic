#include<iostream>
using namespace std;
int main(){
    int marks[7]={23,34,56,78,79,56,67};
    for(int i=0;i<=6;i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }
}