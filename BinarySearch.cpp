#include <iostream>
using namespace std;
int firstOccurence(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans;
    while(s<e){
        if(mid==key){
            ans=mid;
            e=mid-1;
        }
        else if(key>mid){
            s=mid+1;
        }
        else if(key<mid){
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
int lastOccurence(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans;
    while(s<e){
        if(mid==key){
            ans=mid;
            s=mid+1;
        }
        else if(key>mid){
            s=mid+1;
        }
        else if(key<mid){
            e=mid-1;
        }
        mid=(s+e)/2;
        
    }
    return ans;
}
int main(){
    int arr[6]={1,2,3,3,3,5};
    int first=firstOccurence(arr,6,3);
    int last=lastOccurence(arr,6,3);
    cout<<"the first occurence of 3 is at index"<<first<<endl;
    cout<<"the first occurence of 3 is at index"<<last;
}