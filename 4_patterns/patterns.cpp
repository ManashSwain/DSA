// Pattern 1 :
// 1 2 3
// 1 2 3
// 1 2 3

#include <iostream>
using namespace std ;

int main (){
     int n ;
     cin >> n ;
     int i = 1 ;
     while(i<=n){
        int j = 1 ;
        while(j<=n){
            cout << j ;
            j = j + 1 ;
        }
        cout << endl;
        i = i + 1 ;
     }
    return 0 ;
}

// Pattern 2 :
// 3 2 1
// 3 2 1
// 3 2 1

#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int i = 1 ;
    while(i<=n){
        int j = 1 ;
        while(j<=n){
            cout << n-j+1  ;
            j = j + 1 ;
        }
        cout << endl;
        i = i + 1 ;
    }
  return 0 ;
}

// Pattern 3 :
// 1  2  3  4
// 5  6  7  8
// 9  10 11 12
// 13 14 15 16

#include <iostream>
using namespace std ;

int main (){
    int n ;
    cin >> n ;
    int num = 1 ;
    int i = 1 ;
    while(i<=n){
        int j = 1 ;
        while(j<=n){
            cout << num ;
            num = num + 1 ;
            j = j + 1 ;
        }
        cout << endl;
        i = i + 1 ;
    }
    return 0 ;
}

// Pattern 4 :
// *
// * *
// * * *
// * * * *

#include <iostream>
using namespace std;

int main(){
    int n ;
    cin >>n ;
    int i = 1 ;
    while(i<=n){
        int j = 1 ;
        while(j<=i){
            cout << "*" ;
            j = j + 1 ;
        }
        cout << endl;
        i = i + 1 ;
    }
    return 0 ;
}

// Pattern 5
// 1
// 2 2
// 3 3 3
// 4 4 4 4

#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int i = 1 ;
    while(i<=n){
        int j = 1 ;
        while(j<=i){
            cout << i;
            j = j + 1 ;
        }
        cout << endl;
        i = i + 1 ;
    }
    return 0 ;
}

// Pattern 6
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int num = 1 ;
    int i =1 ;
    while(i<=n){
        int j=1 ;
        while(j<=i){
            cout << num ;
            num = num + 1 ;
            j = j + 1 ;
        }
        cout << endl;
        i = i + 1 ;
    }
    return 0 ;
}

// Pattern 7
// 1
// 2 3
// 3 4 5
// 4 5 6 7

#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n;
    int i = 1 ;
    while(i<=n){
        int j = 1 ;
        while(j<=i){
            cout << i + j - 1 ;
            j = j + 1;
        }
        cout << endl;
        i = i + 1 ;
    }
    return 0 ;
}

// Pattern 8
// 1
// 2 1
// 3 2 1
// 4 3 2 1

#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int i = 1 ;
    while(i<=n){
        int j = 1 ;
        while(j<=i){
            cout << i-j+1 ;
            j = j + 1;
        }
        cout << endl;
        i = i + 1 ;
    }
    return 0 ;
}

// Pattern 9 
// A A A
// B B B
// C C C

#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    char ch = 'A';
    int i = 1 ;
    while(i<=n){
        int j = 1 ;
        while(j<=n){
            cout << ch ;
            j = j + 1;
        }
        cout << endl;
        ch = ch + 1;
        i = i + 1;
    }
    return 0 ;
}

// Pattern 10
// A B C
// A B C
// A B C

#include <iostream>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    int i = 1;

    while(i<=n){
        int j = 1 ;
        char ch = 'A';
        while(j<=n){
            cout << ch;
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1 ;
    }
    return 0 ;
}

// Pattern 11
// A B C
// D E F
// G H I

#include <iostream>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    char ch = 'A';
    int i = 1;
    while(i<=n){
        int j = 1 ;
        while(j<=n){
            cout << ch ;
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0 ;
}

// Pattern 12
// A B C
// B C D
// C D E

#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int i = 1;
    while(i<=n){
    int j = 1;
    while(j<=n){
        char ch = 'A' + i + j -n + 1;
        cout << ch   ;
        j = j + 1;
    }
    cout << endl;
    i = i + 1 ;
    }
    return 0 ;
}

// Pattern 13
// A
// B B
// C C C
// D D D D

#include <iostream>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    int i = 1 ;
    while(i<=n){
        int j = 1 ;
        while(j<=i){
            char ch = 'A' + i -1 ;
            cout << ch ;
            j = j + 1 ;
        }
        cout << endl;
        i = i + 1;
    }
    return 0 ;
}

// Pattern 14
// A
// B C
// D E F
// G H I J

#include <iostream>
using namespace std ;

int main(){
    int  n ;
    cin >> n ;
    char ch = 'A';
    int i = 1 ;
    while(i<=n){
        int j = 1 ;
        while(j<=i){
            cout << ch;
            ch = ch + 1 ;
            j = j + 1 ;
        }
        cout << endl;
        i = i + 1 ;
    }
    return 0 ;
}

// Pattern 15
// A
// B C
// C D E
// D E F G

#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n;
    int i = 1 ;
    while(i<=n){
        int j = 1 ;
        while(j<=i){
            char ch = 'A' + i + j -2;
            cout << ch;
            j = j + 1 ;
        }
        cout << endl;
        i = i + 1 ;
    }
    return 0 ;
}

// Pattern 16
// D
// C D
// B C D
// A B C D

#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int i = 1 ;
    while(i<=n){
        int j = 1 ;
        while(j<=i){
            char ch = 'A' +j-i+n-1;
            cout << ch ;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0 ;
}

// Pattern 17
// A B C
// B C D
// C D E

#include <iostream>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    int i = 1;
    while(i<=n){
        int j = 1 ;
        while(j<=n){
            char ch = 'A' +i+j-2;
            cout << ch ;
            j = j + 1;
        }
        cout << endl;
        i = i + 1 ;
    }
    return 0 ;
}

// Pattern 18
//       *
//     * *
//   * * *
// * * * *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = 1;
        while (space <= n-i)
        {
            cout << " ";
            space = space + 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1 ;
    }
    return 0;
}

// Pattern 19 
// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int i = 1 ;
    while(i<=n){
        int j = 1 ;
        while(j<=n-i+1){
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1 ;
    }
    return 0 ;
}

// Pattern 20 
// * * * *
//   * * *
//     * *
//       *

#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int i = 1 ;
    while(i<=n){
     int space = 1 ;
     while(space <= i-1){
    cout << " ";
    space = space + 1;
     }
     int j = 1 ;
     while(j<=n-i+1){
       cout << "*";
       j = j + 1;
     }
     cout << endl;
     i = i + 1;
    }
    return 0 ;
}

// Pattern 21 
// 1 1 1 1 
//   2 2 2
//     3 3
//       4

#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int i = 1 ;
    while(i<=n){
        int space = 1 ;
        while(space <= i-1){
            cout << " ";
            space = space + 1;
        }
        int j = 1 ;
        while(j<=n-i+1){
            cout << i ;
            j = j + 1 ;
        } 
        cout << endl;
        i = i + 1 ;
    }
    return 0 ;
}


// Pattern 22 
//        1
//     2  2       
//   3 3  3
// 4 4 4  4


#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int i = 1 ;
    while(i<=n){
        int space = 1 ;
        while(space <= n-i){
            cout << " ";
            space = space + 1 ;
        }
        int j = 1 ;
        while(j<=i){
            cout << i;
            j = j + 1 ;
        }
        cout << endl;
        i = i + 1;
    }
    return 0 ;
}

// Pattern 23 
//  1 2 3 4
//    2 3 4
//      3 4
//        4


#include <iostream>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    int i = 1 ;
    while(i<=n){
        int space = 1 ;
        while(space <= i-1){
            cout << " ";
            space = space + 1 ;
        }
        int j = 1 ;
        while(j<=n-i+1){
            cout << i+j-1 ;
            j=j+1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0 ;
}

// Pattern 24
//        1
//      2 3
//    4 5 6
// 7 8 9 10

#include <iostream>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    int num = 1;
    int i = 1 ;
    while(i<=n){
        int space = 1 ;
        while(space <= n-i){
            cout << " ";
            space = space + 1 ;
        }
        int j = 1;
        while(j<=i){
            cout << num ;
            num = num + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1 ;
    }
    return 0 ;
}


// Pattern 25
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include <iostream>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    int i = 1 ;
    while(i<=n){
        int space = 1 ;
        while(space <= n-i){
            cout << " ";
            space = space + 1;
        }
        int j = 1 ;
        while(j<=i){
          cout << j;
          j = j + 1;
        }
        int k = 1 ;
        while(k<=i-1){
            cout << i-k ;
            k = k + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0 ;
}

// Pattern 26
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

#include <iostream>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    int i = 1 ;
    while(i<=n){
        int j = 1 ;
        while(j<=n-i+1){
            cout << j ;
            j = j + 1;
        }
        int k = 1 ;
        while(k<=i-1){
         cout << "*";
         k = k +1;
        }
        int l = 1 ;
        while(l<=i-1){
            cout << "*";
            l = l + 1;
        }
        int m = 1 ;
        while(m<=n-i+1){
            cout << n-i-m+2 ;
            m = m + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0 ;
}