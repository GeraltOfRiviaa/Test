//Im trying to practise right here, fuck off!!
#include <stdio.h>


void main()
{

    int i;
    i=0;
    int sloupec = 0;

  do
    {
        printf("%8d %c",i,i);
        i++;
        sloupec++;
         
        if (sloupec % 8 == 0){ //huh?
            printf("\n");
        }

    }
    while(i<=255); 
    
    return 0;
}
