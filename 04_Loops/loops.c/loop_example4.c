#include<stdio.h>
int main()
{
        int a = 0, i = 0 , b;
        for(i =0;i < 5;i++)
        {
                printf("in loop: = %d\n",i);
                a++;
                if(i == 3)
                        break;
         }

        return 0;
}

