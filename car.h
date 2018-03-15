#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

class Car{
 protected:
  std::string model;
  int places;

 public:
  Car();
  std::string getmodel();
  int getplace();
  void        setmodel(std::string);
  void        setplace(int);
};




#endif
