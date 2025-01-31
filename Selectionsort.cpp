#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,2,22,19,3,53,21,45,67,11};
    int size=10;
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(arr[j] < arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
    for(int k=0;k<10;k++){
        cout<<arr[k]<<endl;
    }
}