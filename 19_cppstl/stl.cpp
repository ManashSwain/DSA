// STL 

// 1. size function 
//  2. at function 
// 3. front function
// 4 . back function 
// 5. empty function


#include <iostream>
#include <array>
using namespace std ;

int main(){
    int basic[3] = {1,2,3};
    array<int , 4> arr = {12,32,34,21};
    //  we can use inbuilt functions thats why we are using 

    // 1.size function 

    int size = arr.size();
    for(int i = 0 ; i<size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "The size of the array is : " << size << endl;

    //  2. at function 

    cout << "The element at index 2 is : "  << arr.at(2) << endl ;

    // 3. front function 

    cout << "The element at starting index is : " << arr.front() << endl ;

    // 4 . back function 

    cout << "The element at last index is : " << arr.back() << endl; 

    // 5. empty function 

    cout << "If the array is empty or not : " << arr.empty() << endl;

    return 0 ;
}