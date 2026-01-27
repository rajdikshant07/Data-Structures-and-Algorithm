#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
     for(int i=0;i<n-1;i++){
         for(int j=0;j<n-1-i;j++){
             if(arr[j]>arr[j+1]){
                 int temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
            }
        }
    }
}
 
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n=6;
    int arr[6]={5,3,4,1,7,8};
    bubble_sort(arr,n);
    print(arr,n);
    
    return 0;
}
