#include <stdio.h>

#define MAX_SIZE 10

// This function finds the best cut for a given rod length and calculates the highest price obtainable.
// A pointer (*bestCut) is used to store the length of the most optimal cut.
int findbestCut ( int rodLength, int lengths[], int price[], int count, int *bestCut ) 
{

    if ( rodLength == 0 ) {
        return 0;
    }

    int bestPrice = 0;

    for ( int ix = 0 ; ix < count ; ix++ ) {
        if ( lengths[ix] <= rodLength ) {
            int tempbestCut = 0;

            int currentPrice = price[ix] + 
                findbestCut(rodLength - lengths[ix], lengths, price, count, &tempbestCut);

            if ( currentPrice > bestPrice ) {
                bestPrice = currentPrice;
                *bestCut = lengths[ix];
            }
        }
    }

    return bestPrice;

}

int main() {

    int rodLength;

    printf ( "Please enter a rod length: " );
    scanf ( "%d", &rodLength );

    if ( rodLength < 0 ) {
        printf( "Invalid rod length.\n" );
        return 1;
    }


    int lengths[MAX_SIZE];

    int price[MAX_SIZE];

    int count = 0;

    printf( "Please enter the length and price of a cut in the format <length> <price>. " );
    printf( "One per line. Ctrl + D to stop.\n" );
    while ( scanf( "%d %d", &lengths[count], &price[count] ) == 2  ) {
        count++;
    }

    int leftoverLength = rodLength;

    int totalPrice = 0;

    int cutCount[MAX_SIZE] = {0};

    printf( "Cuts made: \n" );

    while ( leftoverLength > 0 ) {

        int bestCut = 0;

        findbestCut( leftoverLength, lengths, price, count, &bestCut );

        if ( bestCut == 0 ) {
            break;
        }

        for ( int ix = 0 ; ix < count; ix++ ) {
            if ( lengths[ix] == bestCut ) {
                cutCount[ix]++;
                totalPrice += price[ix];
                break;
            }
        }

        leftoverLength -= bestCut;
        
    }
        for ( int ix = 0 ; ix < count; ix++ ) {
            if ( cutCount[ix] > 0 ) {
                printf( "%d @ %d = %d\n", cutCount[ix], lengths[ix], cutCount[ix] * price[ix] );
            }
        }

    printf( "Remainder: %d\n", leftoverLength );
    printf( "Total Price: %d\n", totalPrice );

    return 0;

}