/*
 * class1.c
 *
 *  Created on: Jan 29, 2019
 *      Author: jianchaosun
 */



//IF, ELSE IF, ELSE - Decision Making


#include<stdio.h>

 

// Global variables

int A;

int B;

 

int fun()

{

  static int count = 0; //Static Variable

  count++;

  return count;

}



int Add()

{

    return A + B;

}

 

int main()

{

    int answer; // Local variable

    A = 5;

    B = 7;

    answer = Add();

    printf("%d\n",answer);

    printf("%d ", fun());

    printf("%d ", fun());

    return 0;

}

