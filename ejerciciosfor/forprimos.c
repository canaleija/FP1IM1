#include <stdio.h>

int main()
{


    
    int z;
    for(z=1;z<=100;z++){
    int x = z, i;
    int cd = 0;
    for(i=x; i>=1; i--){
        if(x%i==0)
            cd++;
    }
    if(cd>=3){
         printf("%d\n",x);
    }else{
        printf("%d  es primo\n",x);
    }

    }

   
    /* code */
    return 0;
}
