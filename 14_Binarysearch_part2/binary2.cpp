// Square root with more precision 

#include <iostream>
using namespace std ;

// finding square root 

 int squarerootInt(int x ){
    int start = 0 ;
      int end = x ;
      long long int mid = start + (end- start) / 2 ;
      long long int answer = -1 ;
      while(start <= end){
         long long int square = mid*mid ;
        if(square==x){
            return mid ;
        }
        else if(square < x){
            answer = mid ;
            start =  mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2 ;
      } 
      return answer ;
    }

    // finding more precision value 

    double getpre(int n , int precision , int tempsolution){
        double factor = 1 ;
        double ans = tempsolution ;
        for(int i = 0 ; i<precision ; i++ ){
            factor = factor/10 ;
          for(double j = ans ; j*j < n ; j=j+factor){
            ans = j ;
          }
        }
        return ans ;
    }

int main(){
    int n ;
    cout << "Enter the number" ;
    cin >> n;
    int tempsol = squarerootInt(n);
    cout << getpre(n , 3 , tempsol);

    return 0 ;
}