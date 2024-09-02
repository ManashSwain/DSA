// insertion sort 

#include <iostream>
using namespace std ;

int main(){
    int arr[6] = {12,43,1,211,9,78};
    int n = 6 ;
    
    for(int i = 1 ; i<n ; i++){
        int temp = arr[i];
        int j = i-1 ;
        for(; j>=0 ;j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
        }
        arr[j+1] = temp ;
    }

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] <<  " " ;
    }
    return 0 ;
}

// practice 

#include <iostream>
using namespace std ;

int main(){
    int arr[7] ={34,21,65,2121,0,1,3};
    int n = 7 ;
    for(int i = 1 ; i < n ; i++){
        int temp =  arr[i] ;
        int j = i-1 ;
        for(; j>=0 ; j--){
          if(arr[j] > temp){
            arr[j+1] = arr[j];
          }
          else {
            break;
          }
        }
        arr[j+1] = temp;
    }
    for(int i = 0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
    return 0 ;
}