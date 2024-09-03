// stack : last in first out concept 
// 1.push
// 2.top
// 3.size 
// 4.empty
// 5. pop 

#include <iostream>
#include <stack>
using namespace std ;

int main(){
    stack<int> s ;
    s.push(78);
    s.push(478);
    s.push(678);
    s.push(7768);
    s.push(2578);
    s.pop();

     cout <<"The top element of the stack is : " <<  s.top()<< endl;
     cout <<"The size of the stack is : " <<  s.size()<< endl;
     cout <<"Is the stack is empty or not : " <<  s.empty()<< endl;

    return 0 ;
}