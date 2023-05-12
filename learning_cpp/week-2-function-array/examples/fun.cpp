#include <iostream>
using namespace std;

/*
double calcPizzaArea(){
    double pizzaDiameter;
    double pizzaRadius;
    double pizzaArea;
    double piVal = 3.14159265;

    pizzaDiameter = 12.0;
    pizzaRadius = pizzaDiameter / 2.0;
    pizzaArea = piVal * pizzaRadius * pizzaRadius;
    return pizzaArea;
    }
  
  int main(){
    cout << "12 inch pizza is " << calcPizzaArea();
    cout << " inches squared." << endl;

  return 0;
}
*/


// Calculate pizza area with different parameters passed in as arguments from the main function


/*
double calcPizzaArea(double pizzaDiameter){
  double pizzaRadius;
  double pizzaArea;
  double piVal = 3.14;

  pizzaRadius = pizzaDiameter / 2.0;
  pizzaArea = piVal * pizzaRadius * pizzaRadius;
  return pizzaArea;
  }

  int main(){
    cout << "12.0 inch pizza is " << calcPizzaArea(12.0) << " square inches." << endl;
    cout << "16.0 inch pizza is " << calcPizzaArea(16.0) << " square inches." << endl;
    return 0;
  }
*/


// function def takes in two params
double calcPizzaVolume(double pizzaDiameter, double pizzaHeight){
  double pizzaRadius;
  double pizzaArea;
  double pizzaVolume;
  double piVal = 3.14;

  pizzaRadius = pizzaDiameter / 2.0;
  pizzaArea = piVal * pizzaRadius * pizzaRadius;
  pizzaVolume = pizzaArea * pizzaHeight;
  return pizzaVolume;
}

int main(){
  // passing in two arguments which get changed to parameters in the calcPizzaVolume function
  cout << "12 x 3 pizza " << calcPizzaVolume(12.0, 3.0) << " inches cubed" << endl;

  return 0;
}