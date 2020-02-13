#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,n=4,x=0;
    int y=n;
    
    for(i=1;i<=(2*n-1);i++) {
        for(j=1;j<=(2*n-1);j++) {
            if((i==1+x||i==2*n-1-x && 1+x<=j<=2*n-1-x) || (j==1+x||j==2*n-1-x && 1+x<=i<=2*n-1-x)){
            printf("%d " , n-x);
            //x++;
            }
            else
            {
                if(j>n)
                    printf("%d " , j+1-n);
                
                else
                printf("%d " , n-(j-1));
                
            }
        }
        printf("\n");
    }

    return 0;
}
