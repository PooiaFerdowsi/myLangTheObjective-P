#include <stdio.h>

int main(){
    char statement = 'a';
    scanf("%c",&statement);
    if(statement == 'e'){
            printf("Hello , World!");
    }else {
        printf("Your command does not exits");
    }
   return 0;
}
