// Conditionals and loops 

// 1. Program to find a is greater or b is greater(take the values of a and b from user)

#include <iostream>
using namespace std ;

int main(){
    int a , b ;
    cout << "Enter the value of A : " << endl ;
    cin >> a ;
    cout << "Enter the value of B : " << endl ;
    cin >> b ;
    if(a>b){
        cout << "A is greater" << endl;
    }
    else {
        cout << "B is greater" << endl;
    }
    return 0 ;
}

// 2. Program to find whether a number is +ve ,-ve or 0 

#include <iostream>
using namespace std ;

int main(){
    int num ;
    cout << "Enter the number : " << endl;
    cin >> num ;
    if(num > 0){
        cout << "The number is positive" << endl;
    }
    else if(num < 0){
        cout << "The number is negative" << endl ;
    }
    else {
        cout << "Thee number is 0" << endl;
    }
    return 0 ;
}


// 3. Find the output 

   #include <iostream>
   using namespace std ;

   int main(){
    int a = 9 ;
    if(a==9){
        cout << "Nine" <<endl;
    }
    if(a>0){
        cout << "Positive" << endl;
    }
    else{
        cout << "Negative" << endl;
    }
    return 0 ;
   }

//    My answer : 
//   Nine 
//  Positive 

// 4. Find the output 

    #include <iostream>
   using namespace std ;

   int main(){
    int a = 2 ;
    int b = a+ 1 ;
    if((a=3)==b){
        cout << a << endl;
    }
    else {
        cout << a+ 1 << endl;
    }
    return 0 ;
   }

//    Answer : 3 (if will be executed and a value will be changed to 3 )

//    5. Find the output 

    #include <iostream>
   using namespace std ;

   int main(){
    int a = 24 ;
    if(a>20){
        cout << "Love" << endl;
    }
    else if(a==24){
        cout << "Lovely" << endl;
    }
    else {
        cout << "Babbar" << endl;
    }
    cout << a ;
    return 0 ;
   }

//    Answer : Love 
//             24 

// 6. Take one input from the user ,display lower case , uppercase or number.

#include <iostream>
using namespace std ;

int main(){
    char value ;
    cout << "Enter a single character  we will find number or lower case or uppercase " << endl;
    cin >> value ;
    if(value >= 48 && value <= 57 ){
        cout << "It is a number" << endl;
    }
    else if (value >= 65 && value <= 90){
        cout << "It is a uppercase letter" << endl;
    }
    else if (value >= 97 && value <= 122 ){
       cout << "It is a lowercase letter" << endl;
    }
    return 0 ;
}

// 7. Print N natural numbers using while loop 

#include <iostream>
using namespace std;

int main(){
    int num ;
    cout << "Enter the value of n : " << endl ;
    cin >> num ;
    int i = 1 ;
    while(i<=num){
        cout << i << endl;
        i = i + 1 ;
    }
    return 0 ;
}

// 8. Print sum of N natural numbers using while loop

#include <iostream>
using namespace std;

int main(){
    int num ;
    cout << "Enter the number : " << endl;
    cin >> num ;
    int i = 1 ;
    int sum = 0 ;
    while(i<=num){
        sum = sum + i ;
        i = i + 1 ;
    };
    cout << sum << endl;
    return 0 ;
}

// 9. Print sum of even natural numbers.

#include <iostream>
using namespace std ;

int main(){
    int num ;
    cout << "Enter the number : " << endl;
    cin >> num ;
    int i =2 ;
    int sum = 0 ;
    while(i<=num){
        sum = sum + i ;
        i = i + 2 ;
    }
    cout << sum << endl;
    return 0 ;
}

// 10. Convert fahreneit to celcius. 

#include <iostream>
using namespace std;

int main(){
    int temperature ;
    float output ;
    cout << "Enter the temperature in fahreneit : " << endl;
    cin >> temperature ;
    output = 0.55*(temperature-32);
    cout << output << endl;
    return 0 ;
}

// 11. To check wheter a number is prime or not 

#include <iostream>
using namespace std ;

int main(){
     int num ;
     cout << "Enter the number : " << endl;
     cin >> num ;
     int i = 2 ; 
     int isprime = 0;
     while(i<num){
        if(num%i==0){
           isprime = 1 ;
        }
        i = i + 1 ;
     }
     if(isprime==1){
        cout << "The number is not prime " << endl;
     }
     else {
        cout << "The number is prime" << endl;
     }
    return 0 ;
}


// 12. Print pattern 
//     * * *
//     * * *
//     * * *

#include <iostream>
using namespace std ;

int main(){
    int num ;
    cin >> num ;
    int i = 1 ;
    while(i<=num){
        int j = 1 ;
        while(j<=num){
            cout << "*" ;
            j = j + 1 ;
        }
        cout << endl;
        i = i + 1 ;
    }
    return 0 ;
}

// 13. Print pattern
//     1 1 1
//     2 2 2
//     3 3 3

#include <iostream>
using namespace std ;

int main (){
    int n ;
    cin >> n ;
    int i = 1 ;
    while(i<=n){
        int j = 1 ;
        while(j<=n){
            cout << i ;
            j = j + 1 ;
        }
        cout << endl;
        i = i + 1 ;
    }
    return 0 ;
}

