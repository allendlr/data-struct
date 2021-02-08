class Stack{
private:
    struct node{
        int value;
        node *next;
    };
    node *top;
public:
    Stack();
    bool isEmpty();
    int pop(int num);
    void push(int num);
    void view();
};