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
    int listSize(ListNode* head){
        ListNode* current = head;
        int counter = 0;
        while(current != nullptr){
            ++counter;
            current = current->next;
        }

        return counter;
    }

    int pairSum(ListNode* head) {
        if(head == nullptr){return 0;}
        if(head->next == nullptr){return 0;}
        if(head->next->next == nullptr){
            return head->val + head->next->val;
        }

        ListNode* second_part_head = head;
        ListNode* first_part_tail = nullptr;


        int n = listSize(head);

        for(int i = 0; i < n/2; i++){
            if(i == n/2 - 1){
                first_part_tail = second_part_head;
            }
            second_part_head = second_part_head->next;
        }

        ListNode* prev = nullptr;
        ListNode* current = second_part_head;

        while(current != nullptr){
            ListNode* after_current = current->next;
            current->next = prev;
            prev = current;
            if(after_current == nullptr){
                second_part_head = current;
            }
            current = after_current;
        }

        first_part_tail->next = second_part_head;

        ListNode* first_part_head = head;

        int max_sum = 0;
        int current_sum = 0;
        for(int i = 0; i < n/2; i++){
            current_sum = first_part_head->val + second_part_head->val; 
            first_part_head = first_part_head->next;
            second_part_head = second_part_head->next;

            max_sum = std::max(max_sum, current_sum);
        }

        return max_sum;
    }
};