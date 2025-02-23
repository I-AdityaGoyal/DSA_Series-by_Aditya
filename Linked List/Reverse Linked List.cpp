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
    void reverse(ListNode*& head, ListNode* prev, ListNode* curr) {
        if (curr == NULL) {
            head = prev;
            return;
        }

        ListNode* fwd = curr->next;
        reverse(head, curr, fwd);
        curr->next = prev;
    }

    ListNode* reverse(ListNode*& head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* RlistHead = reverse(head->next);

        head->next->next = head;
        head->next = NULL;

        return RlistHead;
    }

public:
    ListNode* reverseList(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* curr = head;

        // Logic-1 (Using Loop)
        while (curr != NULL) {
            ListNode* fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }
        return prev;

        // Logic-2 (Using Recursion)
        reverse(head, prev, curr);
        return head;

        // Logic-3
        // return reverse(head);
    }
};