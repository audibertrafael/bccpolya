#include <stdio.h>
#include <stdlib.h>

double raizq(double n);

int main(void)
{  
    double n;
    
   scanf("%lf",&n);
    
    printf("%.2lf \n",raizq(n));
    
  	system("main");
}


double raizq(double n)
{
    double rad;
    double raizq = n;
    
    for (rad = 0; rad < 5; ++rad){
	
        raizq = raizq/2 + n/(2*raizq);
       
	  
}

	return (raizq);    
} 
