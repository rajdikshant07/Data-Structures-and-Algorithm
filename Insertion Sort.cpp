#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n=6;
    int arr[6]={3,7,4,6,8,2};
    insertion_sort(arr, n);
    print(arr, n);
    return 0;
}

