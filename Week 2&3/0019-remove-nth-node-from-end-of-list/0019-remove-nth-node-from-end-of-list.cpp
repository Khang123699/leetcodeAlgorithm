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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        ListNode* count=head;
        ListNode* prev=head;
        int nodeSize=0;
        if(head==NULL){
            return head;
        }
        if(head->next==NULL){
            head=head->next;
            delete temp;
            return head;
        }
        while(count!=NULL){
            nodeSize++;
            count=count->next;
        }
        if (nodeSize == n) {
            head = head->next;
            delete temp;
            return head;
        }
        for(int i=0;i<nodeSize-n;i++){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        delete temp;
    return head;
    }
};