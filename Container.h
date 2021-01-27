template<typename T>
class Container {
public:
    T object;
    Container *next;

    Container(){
        next = nullptr;
    };

    Container(T object){
        this->object = object;
        next = nullptr;
    };

    ~Container(){
        next = nullptr;
    };
};