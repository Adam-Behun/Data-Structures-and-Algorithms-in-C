#include <iostream>
#include <vector>
using namespace std;

void ReverseVals(vector<int>& vctrVals){
    unsigned int i;
    int tmpVal;

    for (i = 0; i < vctrVals.size() / 2; ++i){
        tmpVal = vctrVals.at(i);
        vctrVals.at(i) = vctrVals.at(vctrVals.size() -1 -i);
        vctrVals.at(vctrVals.size() -1 -i) = tmpVal;
    }
}

void PrintVals(const vector<int>& vctrVals){
    unsigned int i;

    cout << endl << "Enter new values: ";

    for (i = 0; i < vctrVals.size(); ++i){
        cout << " " << vctrVals.at(i);
    }
    cout << endl;
}

int main(){
    const int NUM_VALUES = 8;
    vector<int> userValues(NUM_VALUES);
    int i;

    cout << "Enter " << NUM_VALUES << endl;
    for (i = 0; i < NUM_VALUES; ++i){
        cout << "Value: ";
        cin >> userValues.at(i);
    }

    ReverseVals(userValues);

    PrintVals(userValues);

    return 0;
}