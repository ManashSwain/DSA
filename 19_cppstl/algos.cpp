#include <iostream>
#include <algorithm>
#include <vector>

using namespace std ;

int main(){
    vector<int> s;
    s.push_back(12);
    s.push_back(13);
    s.push_back(14);
    s.push_back(15);
    cout << binary_search(s.begin() , s.end() , 14) << endl;

    // getting min and max values 

    int a = 89 ;
    int b = 789 ;
    cout << "The minimum value is : " << min(a,b) << endl;
    cout << "The maximum value is : " << max(a,b) << endl;
    string str = "Manash";
    reverse(str.begin() , str.end());
    cout << str << endl;
    return 0 ;
}