// set stores unique elements 
// set returns elemenst in sorted order 

// insert function to insert elements 


#include <iostream>
#include <set>
using namespace std ;

int main(){
   set<int> s ;
  s.insert(876);
  s.insert(32);
  s.insert(65);
  s.insert(23);
  s.insert(7);
  s.insert(7);
  s.insert(1);
  s.insert(867);
  s.insert(867);
  for(int p : s){
    cout << p << " ";
  }
  cout << endl;
//   usage of iterators and erasing of elements
set<int>::iterator it = s.begin();
it++ ;
s.erase(it);
for(int pr : s){
    cout << pr << " ";
}
    return 0 ;
}