// Implementing binary search in even and odd length arrays 

#include <iostream>
using namespace std ;

int binarysearch(int arr[] , int size , int key){
    int start = 0 ;
    int end = size-1;
    int mid = start + (end-start)/2 ;
    while(start<=end){
        if(key == arr[mid]){
            return mid ;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        else {
            end = mid-1;
        }
         mid = start + (end-start)/2 ;
    }
    return -1 ;
}

int main(){

    int even[6] = {21,42,63,85,106,123};
    int odd[5] = {11,43,56,57,78};

    int res = binarysearch(even , 6 ,106 );
    int res2 = binarysearch(odd, 5 ,431 );
    cout << "The numbet 106 is at " <<  res << endl;
    cout << "The numbet 43 is at " <<  res2 << endl;

    return 0 ;
}