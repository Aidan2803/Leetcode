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
        if(!head){return head;}
        if(head->next == nullptr){
            return head;
        }
        ListNode *prev = nullptr;
        ListNode *current = head;
 

        while(current != nullptr){
            ListNode *after_current = current->next;
            current->next = prev;
            prev = current;
            current = after_current;
        }   
        return prev;    
    }
};