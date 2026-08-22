#include<stdio.h>

int main()

{

          double i,num,fact = 1;

        printf("Enter the no.:");
        scanf("%lf", &num);

        if(num < 0)

        {
                printf("User entered zero as value\n");
        }
        else

        {
                for(i= num ; i>= 1; i--)


                {
                        printf("%.2f *%.2f \n", fact, i);

                        fact = fact *  i;
                }

                printf("The factorial of %f is %f\n", num,fact);

                                                                                            /*
                                                                                                for(i = 1; i <= num; i++)
                                                                                            {     
                                                                                                    fact = fact * i;
                                                                                             } 
          
                                                                                             printf("the factorial of %f is %f\n", num,fact);
                                                                                              
                                                                                              `*/


	}
	return 0;
}
