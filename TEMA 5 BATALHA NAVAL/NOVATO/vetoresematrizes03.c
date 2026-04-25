#include <stdio.h>

// 

int main (){
    char *nomes[] = {"Alice", "Bob", "Carol"}; // array de strings

    for(int i = 0; i < 3; i++){
        printf("%s \n", nomes[i]);
    }

    return 0;
}