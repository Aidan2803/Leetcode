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
        if(head == nullptr){
            return nullptr;
        }
        
        int size = 0;
        ListNode* current = head;

        while(current != nullptr){
            size++;
            current = current->next;
        }

        if(size == 1){
            return nullptr;
        }

        int index_to_delete = size - n;

        if(index_to_delete == 0){
            return head->next;
        }

        ListNode* to_delete = head;
        ListNode* before_deleted = head;
        for(int i = 0; i < index_to_delete; i++){
            if(i == index_to_delete -1){
                before_deleted = to_delete;
            }
            to_delete = to_delete->next;
        }

        before_deleted->next = to_delete->next;

        return head;

    }
};