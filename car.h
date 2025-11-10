#include  <stdio.h>
#include  <iostream>


class Car  {
 public :
  Car() ;
  void  setManufacturer(std::string )  ;
  std::string  getManufacturer()       ;
  void  wellcomeMessage()              ;
  void  showProgrammer()               ;
  void  showPannel(int )        ;     // main Panel  Data show 

 private :
  std::string manufacturer ;
  std::string programmer   ;
  void radioON()           ;
  void  radioOFF()         ;
  void  showTPMS()         ;
 

};

