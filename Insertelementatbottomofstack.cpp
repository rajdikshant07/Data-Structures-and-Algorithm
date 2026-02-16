//insert an element at the bottom of a stack gfg code

class Solution {
    public:
    stack<int> insertAtBottom(stack<int> St, int X) {
        if (St.empty()) {
            St.push(X);
            return St;
        }
        
        int topElement = St.top();
        St.pop();
        
        St = insertAtBottom(St, X);
        
        St.push(topElement);
        
        return St;
    }
}