#include "LinkedList.h"
#include "Queue.h"

template<typename T>
class LinkedQueue : public Queue<T>{
public:
    LinkedQueue(){
        queue = new LinkedList<T>();
    }
    ~LinkedQueue() override{
        delete queue;
    }
    void push(T value) override{
        queue->addLast(value);
    }
    T pop() override{
        return queue->remove(0);
    }
    T peek() override{
        return queue->get(0);
    }
    int size() override{
        return queue->size_();
    }
    bool isEmpty(){
        return (queue->size_() == 0);
    }
private:
    LinkedList<T> *queue;
};