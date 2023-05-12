#include <iostream>
#include <fstream>             // for outside source data files open(), close()
#include <vector>              // to store the values read from the outside datasets
#include <string>              // converting the string from read into double
#include <cmath>               // to round the final speed result 
#include <algorithm>
#include "implementation.h"
#include "implementation.cpp"
using namespace std;

int main(){
  vector<double> smartwatch_data;
  vector<double> rtk_gps_data;
  read_data(smartwatch_data, rtk_gps_data);
  vector<double> final_speed_data;

  cout<<"Computing final speeds at all times..."<<endl<<endl;
  final_speed_data = compute_speed(smartwatch_data, rtk_gps_data, final_speed_data);

  cout<<"Looking for outliers in Smartwatch dataset: "<<endl;
  
  find_wrong_smartwatch_data(smartwatch_data);
  cout<<"Looking for outliers in RTK_GPS dataset: "<<endl;
  find_wrong_rtkgps_data(rtk_gps_data);
  
  cout<<endl<<"This is the speed at each time: "<<endl<<"-----"<<endl;
  for (int i=0; i<final_speed_data.size(); i++){
    cout<<"Speed: "<<round(final_speed_data[i] * 10000) / 10000<<" m/s at time: "<<i<<endl;
  }
  cout<<endl;

  cout<<"Erasing wrong data from all 3 datasets before enabling search on them..."<<endl;
  erase_wrong(smartwatch_data);
  erase_wrong(rtk_gps_data);
  erase_wrong(final_speed_data);

  int target_dataset, speed;
  
  while (true) {
    cout<<endl << "Search for speeds from any of the following datasets: "<<endl;
    cout<<"Input 1 for the SmartWatch dataset"<<endl;
    cout<<"Input 2 for the RTK_GPS dataset"<<endl;
    cout<<"Input 3 for the Final Speed dataset"<<endl;
    cout<<"Input 0 to exit"<<endl;
    cout<<"Input: ";
    cin>>target_dataset;

    if (target_dataset == 0) {
          break;
    } else if (target_dataset < 1 || target_dataset > 3) {
      cout<<"Wrong input! Pick 1, 2, or 3."<<endl;
            continue;
    }
    cout << "Search in integers" << std::endl;
    cout << "Input: ";
    cin >> speed;
    
    switch (target_dataset) {
      case 1:
        my_search(smartwatch_data, speed);
          break;
      case 2:
        my_search(rtk_gps_data, speed);
          break;
      case 3:
       my_search(final_speed_data, speed);
          break;
    }
  }
  
  return 0;  
}