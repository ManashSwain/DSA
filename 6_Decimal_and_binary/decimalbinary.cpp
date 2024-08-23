//  Question 1. Convert a decimal to binary

#include <iostream>
#include <math.h>
using namespace std ;

int main(){
    int n ;
    cin >>n ;
   int answer = 0 ;
   int i = 0 ;
   while(n!=0){ 
    int bit = n&1;
    answer = (pow(10,i)*bit) + answer ;
    n=n>>1;
    i++ ;
   }
   cout << answer << endl;
    return 0 ;
}
// Note : The above code will work perfectly in replit 

// 2. Convert a binary number to decimal number. 

#include <iostream>
#include <math.h>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
     int i = 0 ;
     int answer = 0 ;
     while(n!=0){
        int digit = n%10;
        if(digit!=0){
            answer = (pow(2,i) * digit) + answer;
        }
        n = n/10 ;
        i++ ;
     }
     cout << answer << endl;
    return 0 ;
}

// 3. Reverse an integer 

#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int answer = 0;
    while(n!=0){
      int digit = n%10 ;
      answer = (answer * 10) + digit;
      n = n/10 ;
    }
    cout << answer ;

    return 0 ;
}

// 4. convert negative number to binary format

#include <iostream>
#include <bitset>
using namespace std ;

int main(){
    int n ;
    cin >> n;
    if(n>=0){
        cout << "Enter negative number" << endl;
        return 1 ;
    }
    bitset<8> binary(n);
   cout << binary << endl;
    return 0 ;
}

