// PROJECT EULER
// PROBLEM 59
// XOR Decryption

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;


char * keygen() {

    static char randkey[3];
    char alphabet [26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y',   'z'};
    
    for (int i = 0; i < sizeof(randkey); i++) {

        randkey[i] = alphabet[rand() % 26];


    }

    return randkey;

}

int main(int argc, char *argv[]) {
    
    string line;
    ifstream file (argv[1]);
    vector<int> vect;
    vector<int> decrypt;
    char key [3] = {'a', 'b', 'c' };
    string almostkey  = argv[2];


    cout << keygen();



    if (file.is_open()) {

        while (getline(file,line)) {

            //TODO: Code goes for decipher goes
            //here
            
            stringstream ss(line);

            int i;

            while(ss >> i) {


                vect.push_back(i);

                if (ss.peek() == ',') {
                    ss.ignore();

                }

            }

            for (i = 0; i < vect.size(); i++) {
                
                decrypt.push_back(i ^ almostkey[0]);
                
                for (int k = 1; k < 2; k++) {
                    
                    decrypt.push_back(i ^ almostkey[k]);
                    i++;

                }

            }

        }

        file.close();

    } else {
        
        cout << "can't open file";

    }

    for (int i = 0; i < decrypt.size(); i++) {

        cout << (char) decrypt.at(i) << endl;
    }

    return 0;

}
