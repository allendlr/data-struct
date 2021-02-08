class IntStack{
private:
    int *stackarray;
    int stacksize;
    int top;
public:
    IntStack(int size);
    int pop(int num);
    void push(int num);
    bool isFull();
    bool isEmpty();
    void view();
};