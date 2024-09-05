// 1.Find the length of the string.

// #include <iostream>
// using namespace std ;

// int lengthString(char name[]){
//     int count = 0 ;
//   for(int i = 0 ; i < name[i] != '\0' ; i++){
//     count ++;
//   }
//   return count ;
// }

// int main(){
//     char name[20] ;
//     cout << "Enter your name : " ;
//     cin >> name ;
//     // name[3] = '\0';
//     cout << "Your name is : ";
//     cout << name << endl;
//     cout << "The length of your name is : " << lengthString(name) << endl;
//     return 0 ;
// }

// 2. reverse a string 

// #include <iostream>
// using namespace std ;

// // function to get the length of the string 

// int getLength(char name[]){
//   int count = 0 ;
//   for(int i = 0 ; i < name[i] != '\0';i++){
//     count++ ;
//   }
//   return count ;
// }

// // function to reverse a string 

// void reverseString(char name[] , int l){
//     int start = 0 ;
//     int end = l-1 ;
//     while(start<=end){
//         swap(name[end] , name[start]);
//         start++;
//         end--;
//     }
// }

// int main(){
//     char name[20] ;
//     cout << "Enter your name : ";
//     cin >> name ;
//     int length = getLength(name);
//     reverseString(name , length) ;
//     cout << name ;
//     return 0 ;
// }

// 3.check if a string is palindrome or not

// #include <iostream>
// using namespace std ;
// bool isPalindrome(char name[] ,  int length){
//    int start =  0 ;
//     int end = length - 1;
//     while(start<=end){
//         if(name[start]!=name[end]){
//             return 0;
//         }
//         else{
//            start++;
//            end--;
//         }
//     }
//     return 1 ;
// }

// int main(){

//    char name[10] = "nitin";
//     cout << name ;
//     int result = isPalindrome(name , 5);
//     cout << result;
//     return 0 ;
// }

// 6.maximum occuring characters

#include <iostream>
using namespace std;

char maxOccurance(string s ){
  int arr[26] = {0};
   
//    loop to update the index of occurances

for(int i = 0 ; i<s.size() ; i++ ){
    char ch = s[i];
    int index = 0 ;
    index = ch - 'a' ;
    arr[index]++;
}

// loop to get the max occurance and print it 

int maxi = -1 ;
int maxIndex = 0;
for(int j = 0 ; j<26 ;j++){
    if(arr[j]>maxi){
        // to get max no of occurance 
        maxi = arr[j];
        // to get the index 
        maxIndex = j ;

    }
}
return maxIndex + 'a';
}

int main(){
    string name ;
    cin >> name ;
    char maxocc = maxOccurance(name);
    cout << "The maximum occured character is :  " << maxocc ;
    return 0 ;
}


