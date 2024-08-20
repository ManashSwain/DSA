// Bitwise operator 

#include <iostream>  
using namespace std ;

int main(){
    int a = 4 ;
    int b = 5 ;
    cout << "The value of a&b is" << (a&b) << endl;
    cout << "The value of a|b is" << (a|b) << endl;
    cout << "The value of ~a is" << (~a) << endl;
    cout << "The value of a^b is" << (a^b) << endl;
    return 0 ;
}


// Left shift and right shift operators 

#include <iostream>
using namespace std ;

int main(){

    cout << (4>>2) << endl;
    cout << (15<<3) << endl;
    cout << (19>>2) << endl;
    cout << (16<<4) << endl;
    return 0 ;
}

// Increment and decrement operators 

#include <iostream>
using namespace std ;

int main(){
    int i = 7 ;
    cout << (i++) << endl;
    cout << (i--) << endl;
    cout << (--i) << endl;
    cout << (i++) << endl;
    cout << (++i) << endl;
    cout << (i++) << endl;
    cout << (--i) << endl;
    return 0 ;
}

// Question 1 :
#include <iostream>
using namespace std ;

int main(){
    int a , b = 1;
    a = 10 ;
    if(++a){
        cout << b ;
    }
    else {
        cout << ++b;
    }
    return 0 ;
}

// Answer : 1 

// Question 2 : 
#include <iostream>
using namespace std;

int main(){
    int a = 1;  
    int b = 2;
    if(a-- > 0 && ++b > 2){
        cout << "Stage1 - inside If";
    }else {
        cout << "Stage 2 - Inside else";
    }
    cout <<a << " " << b << endl ; 
    return 0 ;
}

// Answer : Stage1 - inside If0 3

// Question 3 : 

#include <iostream>
using namespace std ;

int main(){
    int a = 1 ;
    int b = 2 ;
    if(a-- > 0 || ++b > 2){
        cout << "Stage 1 - Inside if";
    }else {
        cout << "Stage 2 - inside else";
    }
    cout << a << " " << b << endl;
    return 0 ;
}

//  Answer : Stage 1 - Inside if0 2
//  Note : in or condition if 1st is getting true then it will not check the second one 

// Question 4 :
#include <iostream>
using namespace std ;

int main(){
    int number = 3 ;
    cout << (25 * (++number));
    return 0 ;
}

// Answer : 100 

// Question 5 :

#include <iostream>
using namespace std;

int main(){
    int a = 1 ;
    int b = a++ ;
    int c = ++a;
    cout << b ;
    cout << c;
    return 0 ;
}

// Answer :  1 3

// Basic For loop 

#include <iostream>
using namespace std ;

int main(){
    int n ;
    cout << "Enter the value of n : " << endl;
    cin >> n ;
    for(int i = 1 ; i <=n ; i++){
        cout << i << endl;
    }
    return 0 ;
}

// Another For loop syntax 

#include <iostream>
using namespace std ;

int main(){
    int i = 1 ;
    for(; ;){
        if(i <=10 ){
          cout << i << endl ;
        }
        else {
            break;
        }
      i++ ;
    }
    return 0 ;
}

// Note : We can give multiple initilizations ,conditions and increment/decrement operators in for loop 

 #include <iostream>
 using namespace std ;

 int main(){
    for(int a = 3 , b = 5 ; a<=20 ,  b<=30 ; a-- , b++){
        cout << a << endl;
        cout << b << endl;
    }
    return 0 ;
 }

//  Note: while seclaring integer : should declare only once 
//  example : int a = 3 , b =6 and not int a = 6 , int b = 7 

#include <iostream>
using namespace std ;

int main(){
    int n ;
    int sum = 0 ;
    cout << "Enter the value of n : " << endl;
    cin >> n ;
    for(int i = 1 ; i <= n ; i ++){
      sum = sum + i;
    }
    cout << sum ;
    return 0 ;
}

// Question 7 : Print Fibonacci sequence from 1 - N using for loop 

#include <iostream>
using namespace std;

int main(){
    int n ;
    cout << "Enter the value of n :" << endl;
    cin >> n ;
    int a = 0 ;
    int b = 1 ;
    cout << " " << a ;
    cout << " " << b ;
    for(int i = 0 ; i <= n ; i++){
       int sum ;
       sum = a + b ;
       a = b ;
       b = sum; 
       cout << " " << sum ;
    }
    return 0 ;
}

// Question 8 : Print whether a number is prime or not efficiently

#include <iostream>
using namespace std ;

int main(){
    int n ;
    int isprime = 1 ;
    cout << "Enter the number to check prime or not : " << endl;
    cin >> n ;
    for(int i = 2 ; i <n ; i++){
       if(n%i==0){
        isprime = 0;
        break;
       }
    }
    if(isprime == 0){
        cout << "The number is not a prime number" << endl;
    }
    else {
        cout << "The number is a prime number" << endl;
    }
    return 0 ;
}

// continue statement 

#include <iostream>
using namespace std;

int main(){
    for(int i = 1 ; i<=3 ; i++){
        cout << "1st" << endl;
        cout << "2nd" << endl;
        continue;
        cout << "3rd" << endl;
    }
    return 0 ;
}

// Question 9 : Guess the output

#include <iostream>
using namespace std ;

int main(){
    for(int i = 0 ; i <=5 ; i++){
      cout << i << " " ;
      i++ ;
    }
    return 0 ;
}

// Answer : 0 2 4 

// Question 10 :  Guess the output

#include <iostream>
using namespace std ;

int main(){
    for(int i = 0 ; i <=5 ; i--){
      cout << i << " " ;
      i++ ;
    }
    return 0 ;
}

// Answer : infinite 0 

// Question 11 :  Guess the output

#include <iostream>
using namespace std ;

int main(){
    for(int i = 0 ; i <=15 ; i+=2){
      cout << i << " " ;
      if(i&1){
        continue;
      }
      i++;
    }
    return 0 ;
}

// Answer : 0 3 5 7 9 11 13 15 

// Question 12 :  Guess the output

#include <iostream>
using namespace std ;

int main(){
   
    for(int i = 0 ; i <5 ; i++){
        for(int j = i ; j <=5 ; j++){
            cout << i << " " << j << endl;
         }
    }
    return 0 ;
}

// Answer : 0 0
// 0 1
// 0 2
// 0 3
// 0 4
// 0 5
// 1 1
// 1 2
// 1 3
// 1 4
// 1 5
// 2 2
// 2 3
// 2 4
// 2 5
// 3 3
// 3 4
// 3 5
// 4 4
// 4 5

// Question 13:

#include <iostream>
using namespace std ;

int main(){
   
    for(int i =0;i<5;i++){
        for(int j = i ; j <=5 ; j++){
            if(i+j == 10){
                break;
            }
            cout << i << " " << j <<endl;
        }
        
    }
    return 0 ;
}

// Answer :
// 0 0
// 0 1
// 0 2
// 0 3
// 0 4
// 0 5
// 1 1
// 1 2
// 1 3
// 1 4
// 1 5
// 2 2
// 2 3
// 2 4
// 2 5
// 3 3
// 3 4
// 3 5
// 4 4
// 4 5 

// Variable scoping 

#include <iostream>
using namespace std ;

int main(){
    int a = 6;
    
    if(1){
        int a = 8 ;
        cout << a << endl ;
        if(1){
            int a = 7879;
            if(1){
             int  a = 13;
             cout <<a  << endl;
            }
        }
    }
    cout << a << endl;
    return 0 ;
}

// Operator precedence :

#include <iostream>
using namespace std ;

int main(){
    int a = 78 ;
    int b = 87 ;
    cout << ((a-b)/2+78);
    return 0 ;
}




