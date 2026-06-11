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
        std::vector<int> res;
        ListNode* temp=head;
        while(temp!=nullptr){
            res.push_back(temp->val);
            temp=temp->next;
        }
        reverse(res.begin(),res.end());
        temp=head;
        int i=0;
        while(temp!=nullptr){
            temp->val=res[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};