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
        ListNode* temp =head;
        stack<ListNode*> s;
        while(temp!=NULL) {
            s.push(temp);
            temp=temp->next;
        }
        for(int i=0;i<n;i++) {
            s.pop();
        }
        if(s.empty()) {
            head=head->next;
            return head;
        }
        ListNode* x = s.top();
        x->next = x->next->next;
        return head;
    }
};