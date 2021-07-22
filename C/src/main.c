#include <stdio.h>

int main() {
    // Initial Gandhi aggression is supposedly "1".
    // According to the story, aggression goes from 1 - 12.
    unsigned char gandhi_aggression = 1;

    // Democracy modifier is said to reduce aggression by 2.
    unsigned char democracy_modifier = -2;

    // Give Gandhi the democracy modifier.
    unsigned char gandhi_with_democracy = gandhi_aggression + democracy_modifier;   

    printf("---------------------------------------------------------------- \n");
    printf("Gandhi aggression prior to democracy modifier: %d \n", gandhi_aggression); 
    printf("Gandhi aggression after democracy modifier: %d \n", gandhi_with_democracy); 
    printf("\n");
    printf("Logical value would've been -1, but unsigned 8bit integer (char in C) overflows to max value \n"); 
    printf("---------------------------------------------------------------- \n");
}