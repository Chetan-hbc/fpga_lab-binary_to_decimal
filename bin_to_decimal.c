
#include <stdio.h>
#include <wiringPi.h>
#include <string.h>
#include <stdlib.h>

// LED Pin - wiringPi pin 0 is BCM_GPIO 17.


#define	p1	1
#define	p2	3
#define	p3	4
#define	p4	11

int main (int argc, char* argv[])
{
  printf ("Raspberry Pi input from WiringPI %d \n", atoi(argv[1])) ;

  wiringPiSetup () ;

  pinMode (p1, OUTPUT) ;
  pinMode (p2, OUTPUT) ;
  pinMode (p3, OUTPUT) ;
  pinMode (p4, OUTPUT) ;


int binaryNum[32];
int n=atoi(argv[1]);
int i = 0; 
while (n > 0) { 
 	 binaryNum[i] = n % 2; 
         n = n / 2; 
         i++;
 }

    digitalWrite (p1, binaryNum[0]) ;	// On
    digitalWrite (p2, binaryNum[1]) ;	// On
    digitalWrite (p3, binaryNum[2]) ;	// On
    digitalWrite (p4, binaryNum[3]) ;	// On
  return 0 ;
}
