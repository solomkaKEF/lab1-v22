#include <stdio.h>
#include <stdlib.h>


int main()
{
    double x1 , x2 , delta;
    unsigned int N , variant , i=0;
    unsigned int num = 0;

     back:
     printf("vvedy svoi variant \n");
     scanf("%u", &variant);
        if (variant != 1 && variant != 2) {
        goto back;
        }

        printf("x1= \n");
        scanf("%lf", &x1);
        printf("x2= \n");
        scanf("%lf", &x2);

        if(variant == 1) {

            printf("N= \n");
            scanf("%u", &N);
            printf("********************************** \n*  delta  *    X    *    f(x)    * \n********************************** \n");

            if( N > 1 ) {
                delta = (x2-x1)/(N-1);
                printf("|   %7.2lf|     %5.2lf|    3x    |<===Pochatkovi znachennya\n+----------+----------+----------+ \n",delta , x1 );

            for (i;i<N;i++) {
                printf("| %9.2lf|   %7.2f|   %7.2f|\n+----------+----------+----------+\n",x1=x1+delta , x1 , 3*x1);

                //if(i!= 1 && num-i==0) {
                  //  getchar();
                    // num=num+11;
                     //printf("********************************** \n*  delta  *    X    *    f(x)    * \n********************************** \n");
               // }
             }
             }
             else {
                printf("Tablitsya nemozhliva");
            }
         }
        else {

            printf("delta= \n");
            scanf("%lf", &delta);
            printf("********************************** \n*    N    *    X    *    f(x)    * \n********************************** \n");
            N = 1+(x2-x1)/delta;
            printf("|   %7.u|     %5.2lf|    3x    |<===Pochatkovi znachennya\n+----------+----------+----------+ \n",N , x1 );

            for (i;i<N;i++) {
                printf("| %9.u|   %7.2f|   %7.2f|\n+----------+----------+----------+\n",i+1 , x1=x1+delta , 3*x1);
              //  if(num-i==0) {
               //     getchar();
                //     num=num+11;
               // }
            }
        }
        getchar();
        return 0;
}
