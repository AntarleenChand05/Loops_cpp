#include <iostream>
using namespace std;

int main() {
    string correctPassword = "BCD9QTTU";
    string userInput;
    int attempts = 0;
    const int maxAttempts = 3;

    while (attempts < maxAttempts) {
        cout << "Enter the password: ";
        cin >> userInput;

        if (userInput == correctPassword) {
            cout << "✅ System Unlocked!" << endl;
            return 0;
        } else {
            attempts++;
            int attemptsLeft = maxAttempts - attempts;
            cout << "❌ Incorrect Password. ";
            if (attemptsLeft > 0)
                cout << "Attempts left: " << attemptsLeft << endl;
        }
    }

    cout << " Too many failed attempts. System is locked." << endl;
    return 0;
}
/* OUTPUT : 
Enter the password: BCD9QTTU
✅ System Unlocked!
 -------------------------------
  Enter the password: bcdGSDJ
❌ Incorrect Password. Attempts left: 2
Enter the password: 638hilfig
❌ Incorrect Password. Attempts left: 1
Enter the password: 
*/

