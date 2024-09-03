// maps stores values in key value format 
// we need to use first and second to get the values 

#include <iostream>
#include <map>
using namespace std ;

int main(){
   map<int , string> m ;
   m[1] = "Manash";
   m[2] = "beautiful";
   m[3] = "great";
   m[4] = "apple";
   m[5] = "html";
   m[6] = "science";
   m[7] = "robots";
//    another way of inserting 
m.insert({8, "ai"});
m.erase(7);
   for( auto pri : m){
    cout <<"key :" <<  pri.first << " ";
    cout <<"value : " <<  pri.second << " ";
   }
    return 0 ;
}