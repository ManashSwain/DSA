// Bubble sort 

#include <iostream>
using namespace std ;

int main(){
    int arr[7] = {10,34,765,0,32,43,432};
    // int arr[7] = {1,2,3,4,5,6,7};
    int n = 7 ;
    for(int i = 1 ; i < n ; i++){
        bool swapped = false ;
      for(int j = 0 ; j < n-i ; j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j] , arr[j+1]);
            swapped = true ;
        }
      }
      if(swapped == false){
         cout << "Break executed" ;
        break ;
      }
    }
    for (int i = 0 ; i < n ;i++){
        cout << arr[i] << " " ;
    }
    return 0 ;
}