#ifndef IMPLEMENTATION_H
#define IMPLEMENTATION_H

#include <vector>
#include <iostream>
using namespace std;

void read_data(vector<double>& smartwatch, vector<double>& rtk);
vector<double> compute_speed(vector<double>& smartwatch_data, vector<double>& rtk_data, vector<double>& final_speed_data);
void find_wrong_smartwatch_data(vector<double>& dataset);
void find_wrong_rtkgps_data(vector<double>& dataset);
void erase_wrong(vector<double>& dataset);
void my_search(vector<double>& dataset, int target_speed);

#endif