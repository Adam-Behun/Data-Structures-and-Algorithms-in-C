#include <iostream>
using namespace std;

double calcCircleArea(double circleDiameter){
  double circleRadius;
  double circleArea;
  double piVal = 3.14;

  circleRadius = circleDiameter / 2.0;
  circleArea = piVal * circleRadius * circleRadius;

  return circleArea;
}

double pizzaCalories(double pizzaDiameter){
  double totalCalories;
  double caloriesPerSquareInch = 16.7;

  totalCalories = calcCircleArea(pizzaDiameter) * caloriesPerSquareInch;

  return totalCalories;
}

int main(){
  cout << "12 inch pizza has " << pizzaCalories(12.0) << " calories." << endl;
  cout << "16 inch pizza has " << pizzaCalories(16.0) << " calories." << endl;

  return 0;
}