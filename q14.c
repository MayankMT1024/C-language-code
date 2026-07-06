#include<stdio.h>

int main(){
    int X = 5, Y = -10;

    if (X > 0) {
      if (Y > 0)
        printf("Both positive\n");
    }
    else 
        printf("X is not positive\n"); //Dangling else confusion

    return 0;
}