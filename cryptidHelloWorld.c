#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){

    srand(time(0));
    char randomletter ;
    char password[5] = {'h', 'e', 'l', 'l', 'o'};

    for(int i=0; i<5 ; i++){
        do{
            
            randomletter = rand()% (122 - 97 + 1) + 97;
            printf("%c\n", randomletter);

        } while(randomletter != password[i]);
        
            printf("\n");
    }

    system("PAUSE");
    return 0;

}