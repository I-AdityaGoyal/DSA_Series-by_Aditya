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
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            ListNode* L1 = list1;
            ListNode* L2 = list2;
            ListNode* ans = new ListNode(-1);
            ListNode* tempAns = ans;
    
            while (L1 != NULL && L2 != NULL) {
                if (L1->val < L2->val) {
                    tempAns->next = L1;
                    tempAns = L1;
                    L1 = L1->next;
                } else {
                    tempAns->next = L2;
                    tempAns = L2;
                    L2 = L2->next;
                }
            }
            if (L1)
                tempAns->next = L1;
            else
                tempAns->next = L2;
    
            return ans->next;
        }
    };