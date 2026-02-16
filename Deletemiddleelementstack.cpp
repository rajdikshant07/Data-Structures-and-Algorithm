//delete middle element of stack gfg code

class Solution {
    public:
    stack<int> deleteMid(stack<int> St, int N) {
        if (St.empty()) {
            return St;
        }
        
        int midIndex = (N + 1) / 2;
        stack<int> tempStack;
        
        for (int i = 0; i < midIndex; i++) {
            tempStack.push(St.top());
            St.pop();
        }
        
        // Remove the middle element
        if (!St.empty()) {
            St.pop();
        }
        
        // Push the elements back to the original stack
        while (!tempStack.empty()) {
            St.push(tempStack.top());
            tempStack.pop();
        }
        
        return St;
    }
};
