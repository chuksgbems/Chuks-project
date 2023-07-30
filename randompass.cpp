#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Define the length of the password
    const int PASSWORD_LENGTH = 10;

    // Define the set of characters to choose from
    const string CHARACTERS = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-={}[]|\\:;'<>?,./";

    // Generate the password
    string password = "";
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        int randomIndex = rand() % CHARACTERS.length();
        password += CHARACTERS[randomIndex];
    }

    // Print the password
    cout << "Your password is: " << password << endl;

    return 0;
}