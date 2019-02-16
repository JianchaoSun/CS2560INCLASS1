/*
 * class1.c
 *
 *  Created on: Jan 29, 2019
 *      Author: jianchaosun
 */


#include <stdio.h>
int main( ) {
 
   char str[100];       //char array STRING used as buffer
 
   printf( "Enter a value :");
   fflush(stdout);  //ECLIPSE BUG
   gets( str );
 
   printf( "\nYou entered: ");
   puts( str );
 
   return 0;
}
 
 


