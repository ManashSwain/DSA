// vectors 

// 1.capacity function 
// 2. size function 
// 3.at function 
// 4. front function 
// 5. back function 
// 6. pop_back function 
// 7. clear function 
// note : when you clear the elements the previous capicity remains same 
//  another way of initiliazing vector 
// vector<int> v1(5,1)
// here 5 is the size of the array and 1 is the elements 
// copying a vector array 
// vector<int> v3(v1)
// here v3 is the new vectors name and we are copying the contents of v1 into v3 

#include <iostream>
#include <vector>
using namespace std ;

int main(){
    vector<int> v ;
    v.push_back(31);
    cout << "The capacity of the  vector array is : " <<  v.capacity() << endl;
    cout << "The size of the vector  array is " <<  v.size() << endl;

    v.push_back(62);
    cout << "The capacity of the  vector array is : " <<  v.capacity() << endl;
    cout << "The size of the vector  array is " <<  v.size() << endl;

    v.push_back(33);
    cout << "The capacity of the  vector array is : " <<  v.capacity() << endl;
    cout << "The size of the vector  array is " <<  v.size() << endl;

    v.push_back(74);
    cout << "The capacity of the  vector array is : " <<  v.capacity() << endl;
    cout << "The size of the vector  array is " <<  v.size() << endl;

   v.push_back(174);
    cout << "The capacity of the  vector array is : " <<  v.capacity() << endl;
    cout << "The size of the vector  array is " <<  v.size() << endl;
     
      cout << "The element at index 2 is : " << v.at(2) << endl;
       cout << "The first element of the vector array is : " << v.front() << endl;
      cout << "The last element of the vector array is : " << v.back() << endl;
      cout << "Before pop" << endl;
      for(int i = 0 ; i < v.size() ; i++){
         cout << v[i] << " ";
      }
      v.pop_back();
      cout << "after pop" << endl;
      for(int i = 0 ; i < v.size() ; i++){
         cout << v[i] << " ";
      }
       cout << "The size of the vector before clearing :" << v.size();
       v.clear();
       cout << "The size of the vector before clearing :" << v.size();
       cout << "Initializing in a new way" << endl;
      vector<int> v1(4,1);
      for(int i = 0 ; i < 4 ; i++){
        cout << v1[i] << " ";
      }
      vector<int> v3(v1);
      for(int i = 0 ; i < 4 ; i++){
        cout << v3[i] << " " ; 
      }
    return 0 ;
}