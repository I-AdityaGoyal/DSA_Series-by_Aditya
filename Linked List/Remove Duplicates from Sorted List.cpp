/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(i nt x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    public:
        ListNode* deleteDuplicates(ListNode* head) {
            ListNode* temp = head;
            while (temp != NULL) {
                if (temp->next == NULL)
                    break;
                ListNode* nextNode = temp->next;
    
                if (nextNode->val == temp->val) {
                    temp->next = nextNode->next;    // Memory Not Free till Now! - But it works
                    nextNode->next = NULL;          // It's better to free memory for this Node!
                    delete nextNode;                // Delete it!
                } else
                    temp = temp->next;
            }
            return head;
        }
    }; 