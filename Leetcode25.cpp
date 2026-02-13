class Solution {
public:
    ListNode *findKthNode(ListNode *curr, int k){
        k--;
        while(curr && k){
            curr=curr->next;
            k--;
        }
        return curr;

    }
    void reverseLL(ListNode *temp){
        ListNode *prev=NULL;
        while(temp){
            ListNode *next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
        }
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp=head, *prevNode=NULL;
        while(temp){
            ListNode *kth=findKthNode(temp, k);
            
            if(kth==NULL){
                if(prevNode) prevNode->next=temp;
                break;
            }
            ListNode *nextNode=kth->next;
            kth->next=NULL;

            reverseLL(temp);
            if(temp==head) head=kth;
            else{
                prevNode->next=kth;
            }
            prevNode=temp;
            temp=nextNode;
        }
        return head;
        
    }
};