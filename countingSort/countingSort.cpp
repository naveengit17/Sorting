
#include<bits/stdc++.h>
using namespace std;


void countingSort(int ar[],int end){
    int max1 = 0;
    for(int i =0 ;i<= end;i++){
        max1 = max (max1,ar[i]);
    }
    int count[max1+1];
    for(int i =0;i<=max1;i++) count[i]=0;
    for(int i =0;i<=end;i++) count[ar[i]]++;
    for(int i =  1;i<=max1;i++){
        count[i]+=count[i-1];
    }
    int temp[end+1];
    for(int i =0;i<=end;i++){
        temp[count[ar[i]] -1] = ar[i];
        count[ar[i]]--;
    }

    for(int i =0;i<=end ;i++) ar[i] = temp[i];
}


int main() 
{ 
    int arr[] = {12, 11, 13, 5, 6, 7}; 
    int arr_size = sizeof(arr)/sizeof(arr[0]); 
  
    for(int i =0;i<arr_size;i++) cout<<arr[i]<<" ";
    cout<<endl;
  
    countingSort(arr, arr_size -1);
  
    for(int i =0;i<arr_size;i++) cout<<arr[i]<<" ";
    cout<<endl;
   
}