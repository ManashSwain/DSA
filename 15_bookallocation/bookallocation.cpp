//  Book allocation problem 
 
//  #include <iostream>
//  using namespace std ;


// // possible solution checking 
// bool possiblesol(int arr[] , int mid , int sum , int s , int n ){
//    int student = 1 ;
//    int pages = 0 ;
//    for(int i = 0 ; i < n ; i++){
//     if(pages + arr[i] <= mid){
//     pages = pages + arr[i];
//    }
//    else {
//     student ++ ;
//     if(student > s || arr[i] > mid  ){
//     return false ;
//    }
   
//     pages = arr[i];
//    }
   
//    }
//    return true ;
// }
//  int main(){
//     int arr[4] = {10,20,30,40};
//     int s = 2 ; // students
//     int start = 0 ;
//     // size of array = 4 (n)
//     int n = 4 ;
//     int sum = 0 ;
//     for(int i = 0 ; i < n ; i++){
//       sum = sum+arr[i];
//     }
//     int end = sum ;
//     int mid = start + (end-start)/2 ;
//     int answer = -1 ;
//     while(start<=end){
//       if(possiblesol(arr,mid,sum,2,4)){
//         answer = mid ;
//         end = mid - 1;
//       }else{
//         start = mid + 1 ;
//       }
//       mid = start + (end-start)/2 ;
//     }

//     cout << "The solution is :" << answer << endl ;
//     return 0 ;
//  }

 

// Painters partition problem

// https://www.naukri.com/code360/problems/painter's-partition-problem_1089557?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=PROBLEM


// Aggressive cows 

// https://www.naukri.com/code360/problems/aggressive-cows_1082559?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=SOLUTION





