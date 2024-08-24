// Basic switch Statement 

#include <iostream>
using namespace std ;

int main(){
    int standard ;
    cout << "Enter your class"  << endl;
    cin >> standard ;
    switch(standard){
        case 1 :
        cout<< "You are in standard 1" << endl;
        break;
        case 2 : 
        cout << "You are in standard 2" << endl;
        break;
        case 3 :
        cout << "You are in standard 3" << endl;
        break;
        case 4 :
        cout << "You are in standard 4" << endl;
        break;
        case 5 :
        cout << "You are in standard 5" << endl;
        break;
        default :
        cout << "Your standard is invalid" << endl;
        break;
    } 
    return 0 ;
}

// Question1 

#include <iostream>
using namespace std ;

int main(){
    int num ;
    cout << "Enter the number" << endl;
    cin >> num ;
    while(true){
       switch(num){
        case 1 :
        cout << "The number is 1 " << endl;
        exit(0);
         case 2 :
        cout << "The number is 2 " << endl;
        exit(0);
         case 3 :
        cout << "The number is 3 " << endl;
        exit(0);
         case 4 :
        cout << "The number is 4 " << endl;
        exit(0);
        default :
        cout << "The number is invalid" << endl;
        exit(0);
       }
    }
    return 0 ;
}

// Note : if you want to come out of infite loop use exit(0);
// break will not help to exit the loop .use exit and not both(exit and break)

// Question2 : Try break statements in switch cases . 

#include <iostream>
using namespace std ;

int main(){
    int standard ;
    cout << "Enter your class"  << endl;
    cin >> standard ;
    switch(standard){
        case 1 :
        cout<< "You are in standard 1" << endl;
        break;
        case 2 : 
        cout << "You are in standard 2" << endl;
        break;
        case 3 :
        cout << "You are in standard 3" << endl;
        break;
        case 4 :
        cout << "You are in standard 4" << endl;
        break;
        case 5 :
        cout << "You are in standard 5" << endl;
        break;
        default :
        cout << "Your standard is invalid" << endl;
        break;
    } 
    return 0 ;
}

// question 3 : Calclator problem.

#include <iostream>
using namespace std ;

int main(){
    int a , b ;
    char op ;
    cout << "Enter the first integer" << endl;
    cin >> a ;
    cout << "Enter the second integer" << endl;
    cin >> b ;
    cout << "Enter the arithmetic operation to perform" << endl;
    cin >> op ;
    switch(op){
    case '+' :
    cout << "Answer is : " << (a+b) << endl;
    break;
    case '-' :
    cout << "Answer is :" << (a-b) << endl;
    break;
    case '*' :
    cout << "Answer is : " << (a*b) << endl;
    break;
    case '/' : 
    cout << "Answer is : " << (a/b) << endl;
    break;
    case '%' :
    cout << "Answer is : " << (a%b) << endl;
    break;
    default : 
    cout << "The arithmetic operation is invalid" << endl;
     break;
    }
    return 0 ;
}

// Question 4. how many notes of 100 ,50,20 and 1 will be there in 1330 rupess .

#include <iostream>
using namespace std ;

int main(){
    int amount = 1330 ;
    int hundreds = 0 ;
    int fifitis = 0 ;
    int twenties = 0;
    int ones = 0 ;
    switch(1){
        case 1 :
        hundreds = amount/100 ;
        amount = amount%100;
        case 2 :
        fifitis = amount/50;
        amount = amount%50;
        case 3 :
        twenties = amount/20;
        amount = amount%20;
        case 4 :
        ones = amount/1;
        amount = amount%1;

    }
    cout << "The number of hundred notes is " << hundreds << endl;
    cout << "The number of fifety notes is " << fifitis << endl;
    cout << "The number of twenty notes is " << twenties << endl;
    cout << "The number of ones is " << ones << endl;
    return 0 ;
}

// Question 5.Write a function to calculate the power of the number.

#include <iostream>
using namespace std;

// function protytype 
int powerOfNum(int a , int b){
  int result ;
  int answer = 1;
  for(int i = 1 ; i<=b ;i++){
      answer = answer *a ;
  }
  return answer ;
}

int main(){
    int num1 , num2 ;
    cin >> num1 >> num2 ;
    int result = powerOfNum(num1,num2);
    cout << "The answer is : " <<  result << endl;
    return 0;
}

//  Question 6.Write a function to find whether a number is odd or even.

#include <iostream>
using namespace std ;

bool isEven(int n ){
    if(n%2==0){
        return true;
    }
    return false;
}

int main(){
   int n ;
   cin >> n ;
   int result = isEven(n);
   if(result==1){
    cout << "The number is even" << endl;
   }
   else {
    cout << "The number is odd" << endl;
   }
    return 0 ;
}

// Question 7.find nCr 

#include <iostream>
using namespace std ;

int fact(int n){
    int result = 1;
    for(int i =1  ; i<=n; i++){
       result = result * i;
    }
    return result ;
}

int nCr(int n ,int r){
   int numerator = fact(n);
   int denominator = fact(r) * fact(n-r);
   int result = numerator/denominator ;
   return result;
}

int main(){
  int a , b ;
  cin >> a >> b ;
  int result = nCr(a,b);
  cout << result ;
    return 0 ;
}

// Question  8.counting from 1-n (print from 1 to n). 

#include <iostream>
using namespace std ;

void printNum(int a){
  for(int i = 1 ; i <=a ; i++){
    cout << i << " " ;
  }
}
// void menas function does not return anything 

int main(){
    int num ;
    cin >> num;
    printNum(num);
    return 0 ;
}

// 9.To check whether a number is prime or not.

#include <iostream>
using namespace std ;

bool isPrime(int n){
    for(int i=2 ; i<n ; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
  int num ;
  cin >> num;
  int result = isPrime(num);
  if(result==false){
    cout << "The number is not prime" << endl;
  }
  else {
    cout << "The number is prime" << endl;
  }
    return 0 ;
}

// Question 10.Arithmetic progression program

#include <iostream>
using namespace std ;

int ap(int n){
  int result ;
  result = ((3*n) + 7);
  return result ;
}

int main(){
   int n ;
   cin >> n ;
   int result = ap(n);
   cout << result ;
    return 0 ;
}

// 11.To find the number of set bits in given 2 numbers.

#include <iostream>
using namespace std ;

int setBits(int n){
    int bit;
    int count = 0 ;
          
     while(n!=0){
      bit = n&1;
       if(bit==1){
        count =count + 1 ;
     }
     n = n>>1 ;
     }
     return count;
}

int main(){
   int n1, n2 ;
   cin >> n1  >> n2;
   int result = setBits(n1) + setBits(n2) ;
   cout << result ;
    return 0 ;
}

// Question 12. Fetch last number in Fibonacci series .

#include <iostream>
using namespace std;

int fibb(int n ){
    int sum = 0 ;
     int a = 0 ;
        int b = 1 ;
        if(n==1){
            return 0 ;
        }
        if(n==2){
            return 1;
        }
    for(int i = 1 ; i <=n-2 ; i++){
         sum = a + b ;
        a = b ;
        b = sum ;
    }
    return sum ;
}

int main(){
   int n ;
   cin >> n ;
   int result = fibb(n);
   cout << result ;
    return 0 ;
}

// 13.Guess the output .

#include <iostream>
using namespace std;

void update(int a){
    a=a/2;
}
int main(){
    int a = 10;
    update(a);
    cout << a << endl;
    return 0;
}

// Answer : 10

// 14.Guess the output .

#include <iostream>
using namespace std;

int updates(int a){
    a-=5;
    return a ;
}
int main(){
    int a = 15;
    updates(a);
    cout << a << endl;
    return 0;
}

// Answer : 15 

// 15.Guess the output:

#include <iostream>
using namespace std;

int updates(int a){
    int ans = a* a;
    return ans ;
}
int main(){
    int a = 14;
     a = updates(a);
    cout << a << endl;
    return 0;
}

// Answer : 196 