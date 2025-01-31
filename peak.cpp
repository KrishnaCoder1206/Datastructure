#include <iostream>
using namespace std;
int peakelement(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2; 
    }
    return s;
}
int main(){
    int arr[10]={1,20,40,60,80,65,44,22,11,1};
    cout<<"Peak element is at index "<<peakelement(arr,10);
}