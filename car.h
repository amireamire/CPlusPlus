#include  <iostream>
#include  <stdio.h>

class Car {


  public :

    Car(std::string)  ;

    void  message(std::string) ;
   

   void  setPass( int) ;

   int  getPass () ;

   void  showManufacturer() ;

   private  :
     int  pass ;
     std::string   carmaker ;
};
