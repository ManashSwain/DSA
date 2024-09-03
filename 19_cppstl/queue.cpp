// Queue is first in and first out or first come first serve 

#include <iostream>
#include <queue>
using namespace std ;

int main(){
    queue<string> q ;
    q.push("Manash");
    q.push("Swain");
    q.push("Good morning");
    cout << "The first element of the queue is : " << q.front() <<endl;
    cout << "The size of the queue is : " << q.size() << endl;
    return 0 ;
}


