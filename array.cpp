#include<iostream>
using namespace std;

bool prime(int arr[]){
    for(int i=0; i<5; i++){
        int freq = 0;
        for(int j=i+1; j<5; j++){
            if(arr[i]==arr[j]){
                freq++;
                for(int k=2; k<=freq/2; k++){
                    if(freq%k!=0){
                        return true;
                    }
                    else{
                        return false;
                    }
                }
            }
            
        }
        
        }
    }

int main(){

    int arr[5] = {1,2,3,4,5};

   cout<<prime(arr);
}
