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
    ListNode* removeElements(ListNode* head, int val) {
        //check if it has nul value
        if(head == nullptr) {
            return head;
        }

        // Remove leading nodes with value `val`
        while(head != nullptr && head->val == val) {
            head = head->next;
        }

        // Traverse the list and remove nodes with value `val`
        ListNode* temp = head;
        while(temp != nullptr && temp->next != nullptr) {
            if(temp->next->val == val) {
                temp->next = temp->next->next;
            } else {
                temp = temp->next;
            }
        }
        
        return head;
    }
};