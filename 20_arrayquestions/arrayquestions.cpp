// 1. Reverse an array

#include <iostream>
using namespace std ;

int main(){
    int arr[5] = {76,1,74,21,78};
    int start = 0 ;
    int end = 4;
    while(start <= end){
        swap(arr[start] , arr[end]);
        start++ ;
        end-- ;
    }
    for(int i = 0 ; i<5 ; i++){
        cout << arr[i] << " ";
    }
    return 0 ;
}

// 2. Merge 2 sorted arrays

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> mergesorted(vector<int> & arr1, vector<int> & arr2, int m, int n)
// {
//     int i = 0;
//     int j = 0;
//     vector<int> arr3;
//     while (i < m && j < n)
//     {
//         if (arr1[i] <= arr2[j])
//         {
//             arr3.push_back(arr1[i]);
//             i++;
//         }
//         else
//         {
//             arr3.push_back(arr2[j]);
//             j++;
//         }
//     }
//     while (i < m)
//     {
//         arr3.push_back(arr1[i]);
//         i++;
//     }

//     while (j < n)
//     {
//         arr3.push_back(arr2[j]);
//         j++;
//     }


//     return arr3;

// }


// int main()
// {
//     // array 1
//     vector<int> arr1 = {12, 13, 14, 15};
//     // array 2
//     vector<int> arr2 = {5, 6, 7};
//     // size of array 1
//     int m = arr1.size();
//     // size of array 2
//     int n = arr2.size();
//     vector<int> result = mergesorted(arr1, arr2, m, n);
//     for (int i = 0; i < result.size(); i++)
//     {
//         cout << result[i] << " ";
//     }
//     return 0;
// }


// 3 Move 0 to end 

#include <iostream>
using namespace std ;

int main(){
    int arr[5]= {0,1,0,3,12};
    int size = 5 ;
    int i = 0 ;
    for(int j = 0 ; j<size ; j++){
        if(arr[j] !=0){
          swap(arr[j] , arr[i]);
          i++;
        }
    }
    for(int i = 0 ; i <5 ; i++){
        cout << arr[i] << " ";
    }
    return 0 ;
}