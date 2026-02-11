class Solution {
  public:z
    Node* sortedInsert(Node* head, int key) {
        Node* newNode=new Node(key);
        
        if(head==NULL || key<head->data){
            newNode->next=head;
            return newNode;
        }
        
        Node* curr=head;
        
        while(curr->next!=NULL &&curr->next->data<key){
            curr=curr->next;
        }
        
        newNode->next=curr->next;
        curr->next=newNode;
        
        return head;
        
    }
};