#include <stdio.h>

int main() {
    long x = -1, y = 1, nth, next;
    printf("Enter a nth term : ");
    scanf("%d", &nth);
    for (int z = 1; z <= nth; z++){
        next = x + y;
        x = y;
        y = next;
    }
    printf("%d term of fibonacci sequence is %d", nth, next);
    return 0;
}
