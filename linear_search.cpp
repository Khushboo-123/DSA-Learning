#include<iostream>
using namespace std;


int linearSearch(int arr[] , int N ,int target){
    
    if(N == 0){
  return -1;
    }

    // run a for loop
    for(int i= 0 ; i<N;i++)
      
        if(arr[i] == target)

            return i;
    
    return -1;

 }


int main(){
    int arr[] = {32,76,45,90,2,50};
    int target = 90;
    int N = sizeof(arr)/sizeof(arr[0]);
    int result = linearSearch(arr, N, target);
    cout<<result;
    return 0;

}
