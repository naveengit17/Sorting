
#include<bits/stdc++.h>
using namespace std;




void heapify(int ar[],int i,int end){
    int left = 2*i + 1;
    int right = 2*i +2;
    int large = i;
    if(left <= end && ar[left] > ar[large]) large = left;

    if(right <= end && ar[right] > ar[large]) large = right;

    if(large != i){
        swap(ar[i],ar[large]);
        heapify(ar,large,end);
    }

}


void heapSort(int ar[],int end){
    for(int i = end/2; i>=0 ;i--){
        heapify(ar,i,end);
    }
    for(int i =end;i>=0;i--){
        swap(ar[i],ar[0]);
        heapify(ar,0,i-1);
    }
}


int main() 
{ 
    int arr[] = {12, 11, 13, 5, 6, 7}; 
    int arr_size = sizeof(arr)/sizeof(arr[0]); 
  
    for(int i =0;i<arr_size;i++) cout<<arr[i]<<" ";
    cout<<endl;
  
    heapSort(arr, arr_size -1);
  
    for(int i =0;i<arr_size;i++) cout<<arr[i]<<" ";
    cout<<endl;
   
}