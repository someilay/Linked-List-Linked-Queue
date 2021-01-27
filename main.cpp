#include <iostream>
#include "LinkedQueue.h"

int main() {
    Queue<int> *queue = new LinkedQueue<int>();

    queue->push(1);
    queue->push(2);
    queue->push(3);
    queue->push(4);
    queue->push(5);

    printf("Is empty: %d\n", queue->isEmpty());
    for (int i = 0; i < 5; ++i) {
        printf("Head = %d\n", queue->peek());
        queue->pop();
    }
    printf("Is empty: %d\n", queue->isEmpty());

    delete queue;

    return 0;
}
