// list
// 1. push_back
// 2. push_front
// 3. size
// 4. pop_back
// 5. pop_front
// 6. front
// 7. back 

#include <iostream>
#include <list>
using namespace std ;

int main(){
    // creating a list 

list<int> n ;
n.push_back(20);
n.push_back(674520);
n.push_back(2650);
n.push_back(2056);
n.push_back(2720);
n.push_front(6657);
for(int element : n){
    cout << element  << endl;
}
cout << "The element in first index is : " << n.front() << endl;
cout << "The element in last index is : " << n.back() << endl;
cout << "The size of the list is :" << n.size() << endl;
    return 0 ;

}