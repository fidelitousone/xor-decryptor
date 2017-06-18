#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {;
    
    char ascii;
    int number;
    const unsigned int key = 42;

    cout << argv[1];

    cout << "Give Character: ";
    cin >> ascii;
    cout << "ascii value: " << (int) ascii << endl;
    cin >> number;
    cout << "ascii value of " << number << " " << (char) number;

    cout << "cipher of ascii " << ((int) ascii ^ key) << endl;
    return 0;

}
