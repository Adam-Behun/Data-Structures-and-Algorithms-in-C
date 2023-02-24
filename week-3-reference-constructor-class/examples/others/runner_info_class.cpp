#include <iostream>
using namespace std;


// Class definition RunnerInfo begins
class RunnerInfo {

// These are the public operations and their related variables used within the objects of this class
public:
  void SetTime(int timeRunSecs);
  void SetDist(double distRunMiles);
  double GetSpeedMph() const;
// These are the private variables used within this object created from the RunnerInfo class
private:
  int timeRun;
  double distRun;
};

// The public variable timeRunSecs is "connected" to the timeRun private variable of the RunnerInfo objects created from the RunnerInfo class 

// Scope resolution operator (::) means search for SetTime function within the RunnerInfo class  
void RunnerInfo::SetTime(int timeRunSecs) {
  timeRun = timeRunSecs;
}

void RunnerInfo::SetDist(double distRunMiles) {
  distRun = distRunMiles;
}

double RunnerInfo::GetSpeedMph() const {
  return distRun / (timeRun / 3600.0);
}

// Start of the program
int main() {
  RunnerInfo runner1; // User created object of a RunnerInfo class
  RunnerInfo runner2; // Second object with the same variables and functions stored at a different location. They are of the same type but are not the same thing. 
  runner1.SetTime(360); // Runner 1 is an object of the RunnerInfo class. That class has a public function SetTime with private variable timeRunSecs
  runner1.SetDist(1.2);

  runner2.SetTime(200);
  runner2.SetDist(0.5);

  cout << "Runner1's speed in mph: " << runner1.GetSpeedMph() << endl;
  cout << "Runner2's speed in mph: " << runner2.GetSpeedMph() << endl;

  return 0; 
}
