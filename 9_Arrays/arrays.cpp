// Basic array example :

#include <iostream>
using namespace std ;

int main(){
    // method 1 : 
    // initialization of an array 
    int marks[5];
    //  filling data in an array 
    marks[0] = 65;
    marks[1] = 67;
    marks[2] = 43;
    marks[3] = 87;
    marks[4] = 34;
    cout << "Marks at index 0 is : " << marks[0] << endl;
    cout << "Marks at index 1 is : " << marks[1] << endl;
    cout << "Marks at index 2 is : " << marks[2] << endl;
    cout << "Marks at index 3 is : " << marks[3] << endl;
    cout << "Marks at index 4 is : " << marks[4] << endl;

    // Method 2 : 

     int score[4] = {43,54,23,23};
     cout << "Score at index 0 is : " << score[0] << endl;
    cout << "Score at index 1 is : " << score[1] << endl;
    cout << "Score at index 2 is : " << score[2] << endl;
    cout << "Score at index 3 is : " << score[3] << endl;

    // Another method 
    int newarr[15] = {34,67};
    for(int i= 0 ; i <=14 ;i++){
        cout << "The value at index " << i << " is " << newarr <<i <<endl;
    } 

    return 0 ;
}

// Implementing arrays in functions 
// printing all the elements from array by using functions 

#include <iostream>
using namespace std ;

void printarr(int newarr[] , int size){
   for(int i = 0 ; i < size ; i++){
     cout << newarr[i] << endl;
   };
}

int main(){
int myarr[5] ={7,54,32,64,23};
printarr(myarr , 5);
int size = sizeof(myarr)/ sizeof(int);
cout << size  << endl;
    return 0 ;
}

// Get minimum and maximum element from an array 

#include <iostream>
using namespace std ;

// Function to get the maximum element in an array 
int getmax(int num[] , int size){

    int max = -23476; // instead of number in leetcode it is INT_MIN
    for(int i = 0 ; i < size ; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    return max ;
}

// Function to get the minimum value in an array 

int getmin(int num[] , int size){
    int min = 789439 ; // instead of number in leetcode it is INT_MAX
    for(int i = 0 ; i <size ; i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    return min ;
}

int main(){
    int size;
    cin>>size;
    int marks[100];
    for(int i = 0 ; i<size ; i++){
        cin >> marks[i];
    }
    cout << "The highest element in an array is : " << getmax(marks,size)  << endl;
    cout << "The lowest element in an array is : " << getmin(marks , size) << endl;
    return 0 ;
} 

// 4.take input from the user and store it in an array and add the elements to get the sum .

#include <iostream>
using namespace std ;

int getSum(int arr[] , int size){
    int sum = 0 ;
    for(int i = 0 ; i<size ; i++){
        sum = sum + arr[i];
    }
  return sum ;
}

int main(){
    int size ;
    cin >> size ;
    int arr[100];
    for(int i = 0 ; i < size ; i++){
        cin >> arr[i];
    }
   cout << "The sum of the elements in an array is : " << getSum(arr,size) << endl;
    return 0 ;
}

// Linear search 

#include <iostream>
using namespace std ;

bool isPresent (int arr[] , int size , int key){
   for(int i = 0 ; i<size ;i++){
    if(arr[i]==key){
        return true;
    }
   }
   return false ;
}

int main(){
    int size ;
    cout << "Enter the size of the array" << endl;
    cin >> size ;
  
    int arr[100];
    for(int i = 0 ; i<size ; i++){
        cin >> arr[i];
    };
      int key ;
    cout << "Enter the element to search in the array" << endl;
    cin >> key ;
    bool result ;
    result = isPresent(arr,size,key);
    if(result==true){
        cout << "The element is present in the array" << endl;
    }
    else {
        cout << "The element is not present in the array" << endl;
    }
    return 0 ;
}

// Reverse an array 

#include <iostream>
using namespace std ;

int reverse(int arr[] , int size){
   int start = 0 ;
   int end = size - 1 ;
   while(start<end){
      swap(arr[start] ,arr[end]);
      start++ ;
      end--;
   }
}

void printarr(int arr[] , int size){
   for(int i = 0 ; i < size ; i++){
    cout << arr[i] << " " ;
   }
}

int main(){
    int arr1[5] = {12,45,21,54,67} ;
    int arr2[6] = {11,12,13,14,15,16};
     reverse(arr1, 5);
     reverse(arr2, 6);
     printarr(arr1,5);
     printarr(arr2,6);
    return 0 ;
}

// Question 2.fill all the elements by number 0 in an array .

#include <iostream>
using namespace std ;

int main(){
     int arr[100000] = {0};
     for(int i = 0 ; i <100000 ;i++){
        cout << "The value at index " << i << " is " << arr[i] << endl;
     }
    return 0;
}

// Question 3.fill all the elements by  number 1 in an array .

#include <iostream>
using namespace std ;

void printValue(int arr[] , int size){
    for(int i = 0 ; i < size ; i++){
         arr[i] = 1 ;
         cout << " The value at index " << i << " is " << arr[i] << endl; ;
    }
}

int main(){
 int size = 100000 ;
  int arr[100000] ;
  printValue(arr, size);
  return 0 ;
}

// Question 1 : Initialize an array of size 100000 and fill the entire array by some value. 

#include <iostream>
using namespace std ;

void printarr(int arr[] , int size){
    for(int i = 0 ; i <size ; i++){
        arr[i] = {679};
        cout  << "The value at index " << i << " is " << arr[i] << endl;
    }
}

int main(){
    int size = 100000 ;
    int arr[100000];
    printarr(arr , size);
    return 0 ;
}




