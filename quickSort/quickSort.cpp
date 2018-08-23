
#include<bits/stdc++.h>
using namespace std;


int quick(int ar[],int start,int end){
    int pivot = ar[end];

    int i = start -1;
    

    for(int k = start ; k< end;k++){
        if(ar[k] < pivot){
            i++;
            int temp = ar[k];
            ar[k] = ar[i];
            ar[i] = temp;
        }
    }
    swap(ar[i+1],ar[end]);
    return i+1;

}




void quickSort(int ar[],int start,int end){
    if(start < end){
        int partition = quick(ar,start,end);
        quickSort(ar,start,partition -1);
        quickSort(ar,partition +1 ,end);
    }
}


int main() 
{ 
    int arr[] = {12, 11, 13, 5, 6, 7}; 
    int arr_size = sizeof(arr)/sizeof(arr[0]); 
  
    for(int i =0;i<arr_size;i++) cout<<arr[i]<<" ";
    cout<<endl;
  
    quickSort(arr, 0, arr_size - 1); 
  
    for(int i =0;i<arr_size;i++) cout<<arr[i]<<" ";
    cout<<endl;
   
}