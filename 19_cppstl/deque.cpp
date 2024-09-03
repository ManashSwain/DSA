// dequeue means double ended queue 
// note : we can add elements and delete elements from both sides of the array 


#include <iostream>
#include <deque>

using namespace std ;

int main(){
    deque<int> a ;
    a.push_back(34);
    a.push_front(23);
    a.push_front(276);
    a.push_front(657);
    a.push_front(23564);
    a.push_front(2334);
     a.pop_back();
    a.pop_front();
    int size = a.size();
    for(int i = 0 ; i <size ; i++){
        cout << a[i] << " " << endl;
    }
    cout << "The element at index 2 is : " << a.at(2) << endl;
    cout << "The element at first index is : " << a.front() << endl;
    cout << "The element at last index is : " << a.back() << endl;
    cout << "Before erasing" << endl;
    a.erase(a.begin() , a.begin()+1);
    // here +1 means the first element or 0 index 
    cout << "after erasing" << endl;
    for(int i = 0 ; i <size ; i++){
        cout << a[i] << " " << endl;
    }
    return 0 ;
}