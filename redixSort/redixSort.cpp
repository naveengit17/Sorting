
#include<bits/stdc++.h>
using namespace std;

vector<int> V[10],V1[10];

void store(int i , int data ){
    V1[data % 10*i].push_back(data);
}


int getCount(int i){
    int sum =0;
    while(i>0){
        i=i/10;
        sum++;
    }
    return sum;
}

void redixSort(int ar[],int end){
    int countDigit=0;
    for(int i =0;i<end;i++){
        countDigit = max(countDigit,getCount(ar[i]));
    }
    for(int i=1;i<=countDigit;i++){
        for(int ii=0;ii<10;ii++) V1[i].clear();
        for(int j =0;j<end;j++){
            store(i,ar[i]);
        }
    
        for(int ii=0;ii<10;ii++) V[i].clear();
        for(int ii=0;ii<10;ii++){
            for(int k=0;k<V1[ii].size();k++) V[ii].push_back(V1[ii][k]);
        }
    }
    int idx = 0;
    for(int ii=0;ii<10;ii++){
            for(int k=0;k<V[ii].size();k++) 
                ar[idx++] = V[ii][k];
    }
}


int main() 
{ 
    int arr[] = {12, 11, 13, 5, 6, 7}; 
    int arr_size = sizeof(arr)/sizeof(arr[0]); 
  
    for(int i =0;i<arr_size;i++) cout<<arr[i]<<" ";
    cout<<endl;
  
    redixSort(arr, arr_size);
  
    for(int i =0;i<arr_size;i++) cout<<arr[i]<<" ";
    cout<<endl;
   
}