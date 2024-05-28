#include <iostream>
using namespace std; // omitting namespace

int main()
{
    cout << "Hello World!\n";
    for (int i = 0; i <= 9; ++i) { //forloop der von 0 bis 9 zaehlt
        cout << i << " "; //gibt Wert i und einen Abstand aus
    }

    cout << endl; //Neue Zeile

    for (int i = 9; i >= 0; --i) { //forloop der von 9 bis 0 zaehlt
        cout << i << " ";
    }

    return 0; // Beendung des Programmes
}
