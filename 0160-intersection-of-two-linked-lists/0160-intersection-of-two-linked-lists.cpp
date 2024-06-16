/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode(int x) : val(x), next(NULL) {}
 *};
 */
class Solution
{
    public:
        ListNode* getIntersectionNode(ListNode *headA, ListNode *headB)
        {
            std::unordered_map<ListNode*, ListNode*> hash_table;

            ListNode* currentA = headA;
            while(currentA != nullptr){
                hash_table.insert(std::pair<ListNode*, ListNode*>(currentA, currentA));
                currentA = currentA->next;
            }

            ListNode* currentB = headB;
            while(currentB != nullptr){
                if(hash_table.count(currentB) > 0){
                    return currentB;
                }
                hash_table.insert(std::pair<ListNode*, ListNode*>(currentB, currentB));
                currentB = currentB->next;
            }

            return nullptr;
        }
};