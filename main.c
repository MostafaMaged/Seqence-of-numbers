#include <stdio.h>
#include <stdlib.h>
#define MAX 10.1

void print_sequence(unsigned int start, unsigned int end);

void find_sequence(unsigned int x);

void main()
{
    printf("%d", MAX);
}

void print_sequence(unsigned int start, unsigned int end){

    printf(">> Start of Sequence:\n");

    unsigned int i;
    for(i = start; i <= end; i++){
        printf("%d      ", i);
    }

    printf("\n>> End of Sequence.\n");
}

void find_sequence(unsigned int x){

    unsigned int i;
    unsigned int sum = 0;
    for(i = 0; i <= x; i++){
        sum = 0;
        unsigned int j;
        for(j = i; j <= x; j++){
            sum = sum + j;
            if(sum == x){
                print_sequence(i, j);
                break;
            }
            if(sum > x){
                break;
            }
        }
    }
}
