#include <iostream>

int main() {
    // Initial Gandhi aggression is supposedly "1".
    // According to the story, aggression goes from 1 - 12.
    uint8_t gandhi_aggression = 1;

    // Democracy modifier is said to reduce aggression by 2.
    uint8_t democracy_modifier = -2;

    // Give Gandhi the democracy modifier.
    uint8_t gandhi_with_democracy = gandhi_aggression + democracy_modifier;   

    printf("---------------------------------------------------------------- \n");
    printf("Gandhi aggression prior to democracy modifier: %d \n", gandhi_aggression); 
    printf("Gandhi aggression after democracy modifier: %d \n", gandhi_with_democracy); 
    printf("\n");
    printf("Logical value would've been -1, but unsigned 8bit integer overflows to max value \n"); 
    printf("---------------------------------------------------------------- \n");
}