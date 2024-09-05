// 1. Rotate an array 

// #include <iostream>
// using namespace std ;

// int main(){
// int arr[7] = {1,2,3,4,5,6,7};
// int n = 7 ;
// int k = 3 ;
// int temp[7];
//    for(int i = 0 ; i < n ; i++){
//     temp[(i+k)%n] = arr[i];
//    }
//    for(int i = 0 ; i < n ; i++){
//     cout << temp[i] << " ";
//    }
  
//     return 0 ;
// }

// 2. check if array is sorted and rotated

// leet code solution :
// class Solution {
// public:
//     bool check(vector<int>& nums) {
//       int count = 0 ;
//       int n = nums.size();
//       for(int i = 1 ; i<n ;i++){
//         if(nums[i-1]>nums[i]){
//             count++;
//         }
//       }
//       if(nums[n-1]>nums[0]){
//         count++;
//       }
//      if(count<=1){
//         return true;
//      }
//      return false;
//     }
// };

// 3.add 2 arrays 
// leet code solution 

// #include <bits/stdc++.h> 

// function for reversing 

// vector<int> reverse(vector<int> ans){
//   int i = 0 ;
//   int j = ans.size()-1;
//   while(i<=j){
// 	  swap(ans[j] , ans[i]);
// 	  i++;
// 	  j--;
//   }
//   return ans;
// }
// vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {

// 	int i = n-1 ;
// 	int j = m-1;
// 	int carry = 0;
// 	int sum = 0 ;
// 	vector <int> ans ;

// 	while(i >= 0 && j >= 0){
// 		int val1 = a[i];
// 		int val2 = b[j];
// 		 sum = val1 + val2 + carry ;
// 		carry = sum/10 ;
// 		sum = sum%10 ;
// 		ans.push_back(sum);
// 		i--;
// 		j--;
// 	}
// 	// case 1 : 1st array is larger 
// 	while(i >= 0){
//         sum = a[i] + carry ;
// 	   carry = sum/10 ;
// 		sum = sum%10 ;
// 		ans.push_back(sum);
// 		i--;

// 	}
// 	// case 2 : 2nd array is larger 
// 	while(j >= 0){
//         sum = b[j] + carry ;
// 	   carry = sum/10 ;
// 		sum = sum%10 ;
// 		ans.push_back(sum);
// 		j--;
// 	}
// 	// case 3 : when we have carry 
// 	while(carry != 0){
// 		 sum = carry ;
// 		carry = sum/10 ;
// 		sum = sum%10 ;
// 		ans.push_back(sum);
// 	}
// 	return reverse(ans);

// }
