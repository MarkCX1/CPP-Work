#include <stdio.h>
#include <stdlib.h>
#include<time.h>
 
int main(void)
{

    srand(time(0));
 
    for(int i = 0; i<6; i++) // 6 roll outputs
        printf(" %d ", rand() % 59 + 1); // 60 roll cap

    return 0;
}
