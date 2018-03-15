#include "car.h"

Car::Car(){
  model = "";
}

void Car::setmodel(std::string brand){
  model = brand;
}

void Car::setplace(int a){
  places = a;
}

std::string Car::getmodel(){
  return model;
}

int Car::getplace(){
  return places;
}
