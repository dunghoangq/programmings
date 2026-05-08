#include "../headers/std_lib_facilities.h"

int main() {
    cout << "Please enter your first, second names, and age.\n";
    string first = "???";
    string second = "???";
    int age = -1;

    cin >> first >> second >> age;
    cout << "Hello, " << first << second << " (age " << age << ")\n";
}