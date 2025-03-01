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
    ListNode* Reverse(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* RlistHead = Reverse(head->next);

        head->next->next = head;
        head->next = NULL;

        return RlistHead;
    }

    int LogicReverse(ListNode* Revhead) {
        int ans = 0, power = 0;
        while (Revhead) {
            if (Revhead->val == 1) {
                ans += pow(2, power);
            }
            power++;
            Revhead = Revhead->next;
        }
        return ans;
    }

    int LogicLength(ListNode* head) {
        int length = 0;
        ListNode* temp = head;

        // Calculate the length
        while (temp) {
            length++;
            temp = temp->next;
        }

        int ans = 0;
        temp = head;
        while (temp) {
            length--;
            if (temp->val == 1) {
                ans += pow(2, length);
            }
            temp = temp->next;
        }
        return ans;
    }

public:
    int getDecimalValue(ListNode* head) {

        // Reverse List & Start with 2^0(Node 1) + 2^1(Node 2) + 2^2(Node 3).....
        // head = Reverse(head);
        // return LogicReverse(head);

        // Find Length, then Lenght-- for each node: (Node 1)2^Len--  +  (Node 2)2^Len--  +  (Node 3)2^Len--
        // return LogicLength(head);

        // In-One Loop: Assuming I'm on 2^0th Node, If Not *2 for all Previous Nodes!
        int ans = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            ans *= 2;
            ans += temp->val;
            // ans = (ans * 2) + temp->val;
            temp = temp->next;
        }
        return ans;
    }
};
