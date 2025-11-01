#include <iostream>
#include  <stdio.h>
#include  "car.h"
using namespace std ;

Car::Car(std::string  maker) {
 carmaker = maker ;

}


void Car::message(std::string  name) {
  std::cout << "Wellcome Dear : " <<name <<std::endl;
}

void  Car::showManufacturer() {

 std::cout <<"The Car Manufacturer is :   "<<carmaker <<std::endl;
}



void  Car::setPass(int password) {
  pass=password ;

}

int  Car::getPass() {
  return  pass;

}

