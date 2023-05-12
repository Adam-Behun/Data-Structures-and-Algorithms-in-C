/* implementation.cpp (this file) contains function implementations. 
For further documentation, refer Final Paper document */

// function reads data into the appropriate vector<double>
void read_data(vector<double>& smartwatch, vector<double>& rtk){
  
    // open the SmartWatch file
  ifstream smartwatch_file("SmartWatch.txt");
  if (!smartwatch_file.is_open()){

    // prints if file could not open
    cout<<"Error opening the SmartWatch file."<<endl;
    return;
  }

  // same as for the above "Smartwatch.txt"
  ifstream rtk_gps_file("RTK_GPS.txt");
  if (!rtk_gps_file.is_open()){
    cout<<"Error opening the RTK_GPS file."<<endl;
    return;
  }

// Read data from SmartWatch dataset
  string line;
  int smartwatch_index = 1;
  while(getline(smartwatch_file, line)){

    // convert the string into a double data point
    double data_point = stod(line);
    smartwatch.push_back(data_point);

    // move further within the file
    smartwatch_index++;
  }

// Read data from RTK_GPS dataset (same logic as the above smartwatch)
  int rtk_gps_index = 1;
  string rtk_line;
  while (getline(rtk_gps_file, rtk_line)){
    double data_point = stod(rtk_line);
    rtk.push_back(data_point);
    rtk_gps_index++;
  }

  // closing both files as the data is now stored in appropriate vector<double>
  smartwatch_file.close();
  rtk_gps_file.close();
}

// returns a vector<double> with computed speed
vector<double> compute_speed(vector<double>& smartwatch_data, vector<double>& rtk_data, vector<double>& final_speed_data){
  for (int i=0; i < smartwatch_data.size(); i++){

    // final_speed is a mean of Smartwatch[i] and RTK_GPS[i]
    double final_speed = (smartwatch_data[i] + rtk_data[i]) / 2;
    final_speed_data.push_back(final_speed);
  }
  return final_speed_data;    // returns the final_speed_data vector
}


// Find the wrong data in rtk_gps
void find_wrong_rtkgps_data(vector<double>& dataset){
  for (int i = 0; i < dataset.size(); i++) {
    if ((dataset[i] < dataset[i-1]) ||
      (dataset[i] < 3 + dataset[i-1] && dataset[i] > 6 + dataset[i-2])){
      cout<<"The data "<<dataset[i-1]<<" at time "<<i-1<<" may be wrong." <<endl;
    }
  }
  cout<<endl;
}

// Find the wrong data in smartwatch dataset
void find_wrong_smartwatch_data(vector<double>& dataset){
  for (int i = 2; i < dataset.size(); i++) {
    if (dataset[i] < dataset[i-1]){
      cout<<"The data "<<dataset[i]<<" at time "<<i<<" may be wrong." <<endl;
    } else if ((dataset[i] < dataset[i-1]) ||
      (dataset[i] < 3 + dataset[i-1] && dataset[i] > 6 + dataset[i-2])){
      cout<<"The data "<<dataset[i]<<" at time "<<i<<" may be wrong." <<endl;
    }
  }
  cout<<endl;
}

// Erase the wrong data in given dataset
void erase_wrong(vector<double>& dataset){
  // Exclude data < 1 and > 99 from the passed dataset (req 1)
  for (int i = 0; i < dataset.size(); i++) {
    if (dataset.front() < 1){
      cout<<"Deleted "<<*(dataset.begin())<<endl;
      dataset.erase(dataset.begin());
    } else if (dataset.back() > 99){
      cout<<"Deleted "<<*(dataset.end())<<endl;
      dataset.pop_back();
    }
  }
  // Exclude data that cannot represent a vehicle accelerating at a constant speed
  for (int i = 0; i < dataset.size(); i++) {
    if (dataset[i] < dataset[i-1]){  // current speed must be bigger than previous
      cout<<"Deleted "<<*(dataset.begin() + i)<<endl;
      dataset.erase(dataset.begin() + i);
    // current speed cannot be much bigger than the two previous two  
    } else if (dataset[i] > 3 + dataset[i-1] && dataset[i] > 6 + dataset[i-2]){
      cout<<"Deleted "<<*(dataset.begin() + i)<<endl;
      dataset.erase(dataset.begin() + i);
    }
  }
}

// search algorithm first converts vector<double> into vector<int> 
void my_search(vector<double> &dataset, int target_speed){
  vector<int> int_dataset;
  int index =0;
  for(int i=0; i<dataset.size(); i++) {                      // iterate over the passed in vector
    int data_point = static_cast<int>(round(dataset[i]));    // convert double into int
    int_dataset.push_back(data_point);                       // push_back into vector 
}

  // using binary_search from algorithm library
  bool found = binary_search(int_dataset.begin(), int_dataset.end(), target_speed);
  if (found) {
    int index = distance(int_dataset.begin(), lower_bound(int_dataset.begin(), int_dataset.end(), target_speed));
    cout<<"Found it! "<<target_speed<<" The corresponding index is "<<index<<endl;
  } else {
    cout<<"Could not find "<<target_speed<<" in the data."<<endl;
  }
}