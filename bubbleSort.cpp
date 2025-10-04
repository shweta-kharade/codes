#include<iostream>
#include<vector>
using namespace std;

int bubbleSort(vector<int>&arr){
 for(int i=0;i<arr.size();i++){
    for(int j=i+1;j<arr.size();j++){
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        }
    }
 }


}


int main(){
    
    vector<int>arr = {1,3,5,6,4};
    bubbleSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
    















   }






    

