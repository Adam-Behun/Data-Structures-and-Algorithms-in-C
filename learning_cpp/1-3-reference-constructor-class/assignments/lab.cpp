#include <array> // using the array library for some loop functionality
#include <iostream>
using namespace std;

class TravelLog {
private:
  double _elapsedTime[1000] = {0}; // All the time data will be stored in this array.
  double _speed[1000] = {0};       // All the speed data will be stored in this array.
  int entry = 0;                   // for the addInputs function
  int k = 0;

public:
  TravelLog();  // constructor declaration
  ~TravelLog(); // destructor declaration

  // function declarations 
  double ComputeTotalMiles();
  void PrintInputs();
  void addEntry(double speed, double time);
};

// constructor initializing objects of TravelLog class
TravelLog::TravelLog() {
  _speed[0] = {0};
  _elapsedTime[0] = {0};
  cout << "TravelLog Initialization Completed" << endl;
}

// destructor deleting the object and its data
TravelLog::~TravelLog(){};



// function computing the total miles traveled
double TravelLog::ComputeTotalMiles() {
  double totalMiles = 0;
  double tempTime = 0;
  for (int i = entry - 1; i >= 0; i--) {
    if (i >= 1) {
      tempTime = _elapsedTime[i] - _elapsedTime[i - 1];
      totalMiles += tempTime * _speed[i];
    } else {
      totalMiles += _elapsedTime[i] * _speed[i];
    }
  }
    return totalMiles;
  }

// function that adds a record (speed and time into the array) 
void TravelLog::addEntry(double speed, double time) {
  _speed[entry] = speed; 
  _elapsedTime[entry] = time;
  entry += 1;
}

// function that prints out the records when asked
void TravelLog::PrintInputs() {
  int i = 0;

  // iterate over the array
  for (i = 0; i < (end(_speed) - begin(_speed)); ++i) { 
    
    // only print if value in the arrays != 4 (they were initialized at 0 at all indeces)
    if ((_speed[i] != 0) && (_elapsedTime != 0)){
        cout<<"Speed: " << _speed[i] << ". Elapsed Time: " << _elapsedTime[i] << endl;
    }
  }
}


int main() {
  TravelLog Bill;         // initialize an object Bill
  int input;                
  double tmpTime;  
  double tmpSpeed;

  // prompt user to input their selection
  while (input != 4){
        cout << "Please select:" << endl;
        cout << "----" << endl;
        cout << "1. Input Total elapsed time and Speed | ";
        cout << "2. Total Miles | ";
        cout << "3. Records | ";
        cout << "4. Exit" << endl;

        // read the user's input
        cin >> input;

    // Decide which function to call based on user input
    if (input == 1) {
        cout << "Speed: " << endl;
        cin >> tmpSpeed;                        // insert into array tmpSpeed
        cout << "Time: " << endl;
        cin >> tmpTime;                         // insert into array tmpTime
        Bill.addEntry(tmpSpeed, tmpTime);       // adding entry to the array for further use
    }
    
    else if (input == 2) {
        cout << "Total Miles: " << endl;
        cout << Bill.ComputeTotalMiles()<<endl; // call the ComputeTotalMiles function 
        }

    else if (input == 3) {
        cout << "Showing input history (speeds and total elapsed time in hours): "<<endl;
        cout << "Your records" << endl;
        Bill.PrintInputs();                     // call the PrintInputs function
        cout<<endl;
        }
    
    else {
    cout << "Your input: " << input << endl;
    Bill.~TravelLog();                          // delete the object upon user input = 4
    cout<<"TravelLog deleted"<<endl;
    }
  }

    return 0;
}