
#include <stdio.h>
#include <stdlib.h>

// Function for Tower of Hanoi algorithm
//this algorithm solves tower of hanoi problem by making a recursive call
void hanoi(int noOfDisks, char where, char to, char extra)
{
    if (noOfDisks != 0)
    {
        hanoi(noOfDisks - 1, where, extra, to);//make the first recursive call until the first tower is empty
        printf("Move disk : %d from %c to %c\n", noOfDisks, where, to);
        hanoi(noOfDisks - 1, extra, to, where);//make the next recursive call to empty the next tower as well
    }
}
int main(void)
{
    int noOfDisks;

    // Asks the number of disks in the tower
    printf("Number of disks: \n");
    scanf("%d", &noOfDisks);

    hanoi(noOfDisks, 'A', 'B', 'C');

    return 0;
}
