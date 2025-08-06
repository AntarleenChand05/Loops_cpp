#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; ++i) {
        for (int s = 1; s <= (5 - i); ++s) {
            cout<< " ";
        }
        for (int a = 1; a <= i; ++a) {
            cout<< "*";
        }
        cout<<endl;
    }
    return 0;
}


/*output

    *
   **
  ***
 ****
*****  
*/
