//Question 1  First occurance an last occurance of an element in a sorted array 

 #include <iostream>
 using namespace std ;

 int firstoccurance(int arr[] , int size , int key){
   int start = 0 ;
   int end = size - 1 ;
   int mid = start + (end - start)/2 ;
   int firstindex = -1 ;
   while(start<=end){
     if(arr[mid]==key){
        firstindex = mid ;
        end = mid - 1;
     }
     else if (arr[mid] > key){
         end = mid - 1;
     }
     else if(arr[mid] < key){
         start = mid + 1 ;
     }
     mid = start + (end-start)/2 ;
   }
   return firstindex ;
 }

 int lastoccurance(int arr[] , int size , int key){
   int start = 0 ;
   int end = size - 1 ;
   int mid = start + (end - start)/2 ;
   int lastindex = -1 ;
   while(start<=end){
     if(arr[mid]==key){
        lastindex = mid ;
        start = mid + 1 ;
     }
     else if (arr[mid] > key){
         end = mid - 1;
     }
     else if(arr[mid] < key){
         start = mid + 1 ;
     }
     mid = start + (end-start)/2 ;
   }
   return lastindex ;
 }

 int main(){
    int arr1[7] = {0,1,1,1,2,3,4};
     cout << "The first occurance of the element is : " << firstoccurance(arr1,7,1);
     cout << "The last occurance of the element is : " << lastoccurance(arr1,7,1);
    return 0 ;
 }

//  Question 3 :Total number of occurances of the element in an array 

#include <iostream>
using namespace std ;

int firstocc(int arr[] , int size , int key ){
   int start = 0 ;
   int end = size - 1 ;
   int mid = start + (end-start)/2;
   int firstIndex = - 1 ;
   while(start<=end){
     if(key == arr[mid]){
       firstIndex = mid ;
       end = mid -1 ;
     }
     else if(key < arr[mid]){
        end = mid-1;
     }
     else if(key > arr[mid]){
        start = mid + 1 ;
     }
      mid = start + (end-start)/2;

   }
   return firstIndex ;
}

int lastocc(int arr[] , int size , int key ){
   int start = 0 ;
   int end = size - 1 ;
   int mid = start + (end-start)/2;
   int LastIndex = - 1 ;
   while(start<=end){
     if(key == arr[mid]){
       LastIndex = mid ;
       start = mid +1 ;
     }
     else if(key < arr[mid]){
        end = mid-1;
     }
     else if(key > arr[mid]){
        start = mid + 1 ;
     }
     mid = start + (end-start)/2;
   }
   return LastIndex ;
}

int main(){
    int arr[7] = {0,2,2,2,2,2,6};
     int first ;
     int last ;
     first = firstocc(arr,7,2);
     last = lastocc(arr,7,2);
     int result = (last - first) + 1 ;
     cout << result ;
    return 0 ;
}