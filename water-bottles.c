#include <stdio.h>

int main() {
    int numBottles = 0, numExc = 0;
    int newBottles = 0, empty = 0, add = 0;
    scanf("numBottles = %d, numExchange = %d", &numBottles, &numExc);

    empty += numBottles;
    add += numBottles;
    while(empty >= numExc) {
        newBottles = empty / numExc;
        add += newBottles;
        empty = empty % numExc;
        empty += newBottles;
    }
    
    printf("%d", add);
    return 0;
}