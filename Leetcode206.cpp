//do the leetcode 206: reverse the linked list
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=nullptr;
        ListNode* curr=head;
        while(curr!=nullptr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
};

//explain the code
The code defines a function `reverseList` that takes the head of a singly linked list as input and returns the head of the reversed linked list.
The function uses three pointers: `prev`, `curr`, and `next`. Initially, `prev` is set to `nullptr` and `curr` is set to the head of the list. The function iterates through the linked list until `curr` becomes `nullptr`.
In each iteration, the function stores the next node in the `next` pointer, then reverses the current node's `next` pointer to point to the previous node. After that, it updates `prev` to be the current node and moves `curr` to the next node (which was stored in `next`).
Finally, when the loop ends, `prev` will be pointing to the new head of the reversed linked list, which is returned.
