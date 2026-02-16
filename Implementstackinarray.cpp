class myStack {
private:
    int* arr;
    int top;
    int capacity;
    
public:
    myStack(int n) {
        arr = new int[n];
        capacity = n;
        top = -1;
    }
    
    ~myStack() {
        delete[] arr;
    }
    
    bool isEmpty() {
        return (top < 0);
    }
    
    bool isFull() {
        return (top >= capacity - 1);
    }
    
    void push(int x) {
        if (!isFull()) {
            top = top + 1;
            arr[top] = x;
        }
    }
    
    void pop() {
        if (!isEmpty()) {
            top = top - 1;
        }
    }
    
    int peek() {
        if (isEmpty()) {
            return -1;
        }
        return arr[top];
    }
};