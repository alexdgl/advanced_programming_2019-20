#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>




int main( void )
{

  int array[ 3 ]; //questo sta nella stack

  for ( int ii = 0; ii <= 3; ii++ ){ //stack smashing vuoldire andare oltre i limiti, in questo caso oltre il limite in cui è definito array
    array[ ii ] = ii*2;
    std::cout<<array[ii]<<" ";
}

  return 0;
}