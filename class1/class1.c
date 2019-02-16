/*
 * class1.c
 *
 *  Created on: Jan 29, 2019
 *      Author: jianchaosun
 */

#include <stdio.h>
int main( ) {
 
   char str[100];
   int i;
 
   printf( "Enter a value :");
   fflush(stdout);  //ECLIPSE BUG
   scanf("%s %d", str, &i);
 
   printf( "\nYou entered: %s %d ", str, i);
 
   return 0;
}
 


