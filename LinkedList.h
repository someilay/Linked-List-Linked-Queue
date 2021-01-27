#include "Container.h"
template <typename T>
class LinkedList{
public:
    LinkedList(){
        first = nullptr;
    }
    ~LinkedList(){
        Container<T> *cur = first;
        Container<T> *next;

        while(cur != nullptr){
            next = cur->next;
            cur->next = nullptr;
            cur = next;
        }

        first = nullptr;
    }
    bool add(T object, int i){
        Container<T> *cur = first;
        Container<T> *prev = nullptr;
        int j = 0;

        while (cur != nullptr){
            if (i == j){
                break;
            }
            j++;
            prev = cur;
            cur = cur->next;
        }

        if (prev != nullptr && i == j){
            prev->next = new Container<T>(object);
            prev->next->next = cur;
            return true;
        }
        else if (i == 0){
            first = new Container<T>(object);
            return true;
        }

        return false;
    }
    void addLast(T object){
        Container<T> *cur = first;
        Container<T> *prev = nullptr;

        while (cur != nullptr){
            prev = cur;
            cur = cur->next;
        }

        if (prev != nullptr){
            prev->next = new Container<T>(object);
        }
        else{
            first = new Container<T>(object);
        }
    }
    T remove(int i){
        Container<T> *cur = first;
        Container<T> *prev = nullptr;
        int j = 0;

        while (cur != nullptr){
            if (i == j){
                break;
            }
            j++;
            prev = cur;
            cur = cur->next;
        }

        if (i == j && cur != nullptr){
            if (prev != nullptr){
                prev->next = cur->next;
                return cur->object;
            }
            else{
                first = cur->next;
                return cur->object;
            }
        }

        return 0;
    }
    T get(int i){
        Container<T> *cur = first;
        int j = 0;

        while (cur != nullptr){
            if (i == j){
                break;
            }
            j++;
            cur = cur->next;
        }

        return cur->object;
    }
    int size_(){
        Container<T> *cur = first;
        int j = 0;

        while (cur != nullptr){
            j++;
            cur = cur->next;
        }

        return j;
    }
private:
    Container<T> *first;
};