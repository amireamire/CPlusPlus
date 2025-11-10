#include  <iostream>
#include <stdio.h>
#include "car.h"

int  main() {

 Car benz                             ;  
 benz.setManufacturer("BENZ Company") ;
 benz.wellcomeMessage()                ;

 //select  Pannel
 int  select ;
 printf("Press Button :\n1- Radio ON\n2-Radio OFF\n3-ShowTPMS\n:  ") ;
 scanf("%d",&select)         ;
 benz.showPannel(select)     ;
 
 

 return 0 ;
}
