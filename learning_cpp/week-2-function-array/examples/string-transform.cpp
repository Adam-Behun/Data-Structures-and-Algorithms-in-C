#include <iostream>
#include <string>
using namespace std;

void StrSpaceToHyphen(string& modStr){
    unsigned int i; // Loop index

    for (i = 0; i < modStr.size(); ++i){
        if (modStr.at(i) == ' '){
            modStr.at(i) = '-';
        }
    }
}

int main(){
    string userStr; // Input string from user

    cout << "Enter a string with spaces: " << endl;
    getline(cin, userStr);

    StrSpaceToHyphen(userStr);

    cout << "String with hyphens: ";

    cout << userStr << endl;

    return 0;      
}