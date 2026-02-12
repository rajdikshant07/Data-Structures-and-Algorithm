class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (head == nullptr) return head;
        
        // Step 1: Count 0s, 1s, and 2s
        int count0 = 0, count1 = 0, count2 = 0;
        ListNode* temp = head;
        
        while (temp != nullptr) {
            if (temp->val == 0) count0++;
            else if (temp->val == 1) count1++;
            else count2++;
            temp = temp->next;
        }
        
        // Step 2: Overwrite the list
        temp = head;
        
        // Fill with 0s
        while (count0 > 0) {
            temp->val = 0;
            temp = temp->next;
            count0--;
        }
        
        // Fill with 1s
        while (count1 > 0) {
            temp->val = 1;
            temp = temp->next;
            count1--;
        }
        
        // Fill with 2s
        while (count2 > 0) {
            temp->val = 2;
            temp = temp->next;
            count2--;
        }
        
        return head;
    }
};
