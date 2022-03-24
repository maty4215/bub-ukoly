#include <stdio.h>
#include <math.h>

int main()
{   
    int d = 6;
    int a1 = 5;
    int n = 8;
    
    int pole[n];
    pole[0] = a1;
    printf("pole[0] = %i\n", a1);
    
    for(int i = 1; i < n; i++){
       pole[i] = a1 + d;
       a1 = a1 + d;
        printf("pole[%i] = %i\n", i, pole[i]);
    }

    return 0;
}
