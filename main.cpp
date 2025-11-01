#include  <iostream>
#include  <stdio.h>
#include  "car.h"

int  main() {

 Car benz("BENZ") ;
 benz.message("Mehdi Naderi") ;
 benz.showManufacturer() ;
 benz.setPass(12345) ;
 std::cout << "Password is : " <<benz.getPass()  <<std::endl;


 Car bmw("BMW")  ;
bmw.message("Hadi Naderi") ;
bmw.setPass(54321) ;
std::cout << "BMW Password is "  <<bmw.getPass() <<std::endl;



 return 0 ;
}
