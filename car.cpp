#include  <iostream>
#include <stdio.h>
#include "car.h"

Car::Car(){
  printf("Object of Class Created\n ") ;
  programmer="Mehdi Naderi" ;
}

 void  Car::showTPMS() {
    printf("W Currently Show All Tires TPMS\n") ;
  }
 void   Car::radioON() {
    std::cout  << "Radio is ON" <<std::endl;
  }
 
void  Car::radioOFF() {
    std::cout  << "Radio is OFF" <<std::endl ;
 }


void  Car::setManufacturer(std::string maker) {

 manufacturer = maker ;

}

std::string  Car::getManufacturer() {

  return  manufacturer ;
}

void  Car::wellcomeMessage() {
 std::cout << "Wellcome  We Plasure To  use BENZ  Company   Prodeucs  Thanks" <<std::endl;


}

void  Car::showProgrammer(){
  std::cout << "This Unit  Programmed By Mehdi Naderi For Benz Company ECU Unit" <<std::endl;
}


void   Car::showPannel(int select) {
  switch (select)   {
      case  1            :
        radioON() ;
        break;
      case  2            :
        radioOFF()  ;
        break;
      case  3           :
        showTPMS()  ;
        break;
   }
 
}
