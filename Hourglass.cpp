#include <iostream>
using namespace std;

int main() {
    int p[] = {6, 4, 2, 1, 2, 4, 6};
    int N = sizeof(p) / sizeof(p[0]);
    int W = 6;

    for (int i = 0; i < N; ++i) {
        int a = p[i];
        int emptySpace = W - a;
        int leftSpaces = emptySpace / 2;
        int rightSpaces = emptySpace - leftSpaces;

        for (int j = 0; j < leftSpaces; ++j) {
            cout << " ";
        }

        for (int k = 0; k < a; ++k) {
            cout << "*";
        }

        for (int l = 0; l < rightSpaces; ++l) {
            cout << " ";
        }

        cout << endl;
    }

    return 0;
}



/*OUTPUT
******
 ****
  **
  *
  **
 ****
******
*/
