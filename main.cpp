#include <iostream>
#include <string>
#include <random>

using namespace std;

string generatePassword(int length) {
    const string charset = 
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "0123456789"
        "!@#$%^&*()_+-=[]{}|;:,.<>?";
    
    // Setup Mersenne Twister random number generator
    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<int> distribution(0, charset.length() - 1);

    string password = "";
    for (int i = 0; i < length; ++i) {
        password += charset[distribution(generator)];
    }

    return password;
}

int main() {
    int length;
    
    cout << "--- Secure Password Generator ---" << endl;
    cout << "Enter desired password length: ";
    cin >> length;

    if (length <= 0) {
        cout << "Length must be greater than 0." << endl;
        return 1;
    }

    string password = generatePassword(length);
    cout << "\nGenerated Password: " << password << endl;
    cout << "Keep it safe!" << endl;

    return 0;
}
