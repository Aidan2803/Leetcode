/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr){return false;}
        if (head->next == nullptr){
            return false;
        }

        ListNode *fast = head->next->next;
        ListNode *slow = head;

        while(fast != nullptr && fast->next != nullptr){
            if(fast == slow){
                return true;
            }
            fast = fast->next->next;
            slow = slow->next;
        }
        return false;
    }
};