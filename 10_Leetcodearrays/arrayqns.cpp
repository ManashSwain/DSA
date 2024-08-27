// Question 1 : Swap alternative elements in an array 

#include <iostream>
using namespace std ;

// function to swap alternatives  elements
void swapAlternate(int arr[] ,  int size){
   int i = 0 ;
   int temp ;
   while(i+1 < size){
    temp = arr[i];
    arr[i] = arr[i+1];
    arr[i+1] = temp ;
    i= i+2;
   }
}

// function to print array 

void printArr(int arr[] , int size){
  for( int i=0 ; i<size ; i++){
    cout << arr[i] << " " ;
  }
  cout << endl;
}

int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[6] = {1,2,3,4,5,6};
    swapAlternate(arr1,5);
    swapAlternate(arr2,6);
    printArr(arr1,5);
    printArr(arr2,6);
    return 0 ;
}

// Question 2  Find Unique element.
// code studio : https://www.naukri.com/code360/problems/find-unique_625159

// Question 3 : Find duplicates. 
// code studio : https://www.naukri.com/code360/problems/duplicate-in-array_893397

// Question 4 :  Array Intersection
//https://www.naukri.com/code360/problems/intersection-of-2-arrays_1082149

// Question 5 Pair sum. 
//https://www.naukri.com/code360/problems/pair-sum_697295

// Question 6 Triplets sum.
//https://www.naukri.com/code360/problems/triplets-with-given-sum_893028

// Question 7  sort 0 1 .

#include <iostream>
using namespace std ;
void printarr( int arr[] , int size){
   for(int i = 0 ; i<size ; i++){
    cout << arr[i] << " " ;
   }
   cout << endl;
}
void sortarr(int arr[] , int size){
    int i = 0 ;
    int j = size-1;
    while(i < j){
        while(arr[i]==0 && i<j ){
          i++;
        }
        while(arr[j]==1 && i<j){
         j--;
        }
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i] , arr[j]);
            i++ ;
            j--;
        }
    }
}

int main(){
    int arr[8] = {1,0,0,0,1,0,0};
    sortarr(arr,8);
    printarr(arr,8);
    return 0 ;
}

// Question 8  sort 0 1 2
//https://www.naukri.com/code360/problems/sort-0-1-2_631055

 //Question  9. unique no of occurance(1207 leetcode). 

 //Question 10. Find all duplicates in an array(442 leetcode).

