/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode(int x) : val(x), next(NULL) {}
 *};
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        // Solution when we have additional space
        //     std::unordered_map<ListNode*, ListNode*> hash_table;

        //     ListNode* currentA = headA;
        //     while(currentA != nullptr){
        //         hash_table.insert(std::pair<ListNode*, ListNode*>(currentA,
        //         currentA)); currentA = currentA->next;
        //     }

        //     ListNode* currentB = headB;
        //     while(currentB != nullptr){
        //         if(hash_table.count(currentB) > 0){
        //             return currentB;
        //         }
        //         hash_table.insert(std::pair<ListNode*, ListNode*>(currentB,
        //         currentB)); currentB = currentB->next;
        //     }

        //     return nullptr;
        // }

        // Solution without additional space

        if(headA == nullptr || headB == nullptr){
            return nullptr;
        }

        ListNode* currentA = headA;
        ListNode* currentB = headB;

        int sizeA = 0;
        while (currentA != nullptr) {
            sizeA++;
            currentA = currentA->next;
        }

        int sizeB = 0;
        while (currentB != nullptr) {
            sizeB++;
            currentB = currentB->next;
        }

        auto diff = std::abs(sizeA - sizeB);

        currentA = headA;
        currentB = headB;
        if (sizeA < sizeB) {
            for (int i = 0; i < diff; i++) {
                currentB = currentB->next;
            }
        } else {
            for (int i = 0; i < diff; i++) {
                currentA = currentA->next;
            }
        }

        while (currentA != nullptr && currentB != nullptr) {
            if (currentA == currentB) {
                return currentA;
            }
            currentA = currentA->next;
            currentB = currentB->next;
        }

        return nullptr;
    }
};