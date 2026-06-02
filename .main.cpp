#include <iostream>
#include <string>
#include "notepad.h"

using namespace std;

int main() {
    int choice;
    string filename;

    do {
        cout << "\n--- Simple Notepad ---\n";
        cout << "1. Create/Write File\n";
        cout << "2. Read File\n";
        cout << "3. Append to File\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3) {
            cout << "Enter filename (e.g., notes.txt): ";
            cin >> filename;
        }

        switch (choice) {
            case 1: writeFile(filename); break;
            case 2: readFile(filename); break;
            case 3: appendFile(filename); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
