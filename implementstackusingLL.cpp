//implement stack using linked list gfg code

class MyStack {
    Node* topNode;
    int cnt;
    public:

        mystack() {
            topNode = NULL;
            cnt = 0;
        }

        bool isEmpty() {
            return (topNode == NULL);
        }

        void push(int x) {
            Node* newNode = new Node(x);
            newNode->next = topNode;
            topNode = newNode;
            cnt++;
        }

        void pop() {
            if (isEmpty()) {
                return;
            }
            Node* temp = topNode;
            topNode = topNode->next;
            delete temp;
            cnt--;
        }

        int peek() {
            if (isEmpty()) {
                return -1;
            }
            return topNode->data;
        }

        int size() {
            return cnt;
        }

}