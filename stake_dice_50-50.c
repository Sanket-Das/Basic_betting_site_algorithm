#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int random_number,consecutive_losses=0,round=1;

    srand(time(0));
    while(consecutive_losses <= 20){    

    random_number = rand()%101;
    
    if(random_number>=51){
        printf("WIN\n");
        printf("%d\n",random_number);
        consecutive_losses = 0;

    }
    else if(random_number<=50){
        printf("LOSS\n");
        printf("%d\n",random_number);
        consecutive_losses++;
    }
    round++;
    }
    
    return 0;
}