#include <stdio.h>
void hanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    
    hanoi(n - 1, source, destination, auxiliary);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    hanoi(n - 1, auxiliary, source, destination);
}
int main() {
    int disks;
    
    printf("Enter number of disks: ");
    scanf("%d", &disks);
    
    printf("\nSteps to solve Tower of Hanoi with %d disks:\n\n", disks);
    hanoi(disks, 'A', 'B', 'C');
    
    return 0;
}