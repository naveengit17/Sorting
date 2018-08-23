
#include<bits/stdc++.h>
using namespace std;


void merge(int ar[],int start,int md , int end){
    int c1[md - start + 2],c2[end - md +1];
    int k = 0;

    for(int i =start ;i<= md;i++){
        c1[k++] = ar[i];
    }
    c1[k] = INT_MAX;
    k=0;
    for(int i =md+1 ;i<= end;i++){
        c2[k++] = ar[i];
    }
    c2[k] = INT_MAX;
    int l=0;k=0;

    for(int i = start;i<=end;i++){
        if(c1[l] < c2[k]) ar[i] = c1[l++];
        else ar[i] = c2[k++];
    }

}




void mergeSort(int ar[],int start,int end){
    if(start < end){
        int mid = (start + end)/2;
        mergeSort(ar,start,mid);
        mergeSort(ar,mid + 1,end);
        merge(ar,start,mid,end);
    }
}


int main() 
{ 
    int arr[] = {12, 11, 13, 5, 6, 7}; 
    int arr_size = sizeof(arr)/sizeof(arr[0]); 
  
    for(int i =0;i<arr_size;i++) cout<<arr[i]<<" ";
    cout<<endl;
  
    mergeSort(arr, 0, arr_size - 1); 
  
    for(int i =0;i<arr_size;i++) cout<<arr[i]<<" ";
    cout<<endl;
   
}