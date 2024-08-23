// Reverse an integer 

#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int answer = 0 ;
    while(n!=0){
        int digit = n%10 ;
        answer = (10*answer) + digit ;
        n=n/10 ;
    }
    cout << answer ;
    return 0 ;
}

// complement of base 10 integer 

#include <iostream>
#include <math.h>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int answer = 0 ;
    int i = 0 ;
    while(n!=0){
        int bit , rev ;
        bit = n&1;
        rev = bit^1;
        if(rev==1){
          answer = ((pow(2 , i))*rev) + answer;
        }
        n=n>>1;
        i=i+1;
    }
    cout << answer ;
    return 0 ;
}


// Power of 2 

// Leet code answer :

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int num = 1;
        for (int i = 0; i <= 30; i++) {
            if (n == num) {
                return true;
            }
            if (num < INT_MAX / 2) {
                num = num * 2;
            }
        }
        return false;
    }
};