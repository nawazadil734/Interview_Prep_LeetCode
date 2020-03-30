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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode * curr = head;
        ListNode * prev = NULL;
        ListNode * nxt = NULL;
        int count = 0;
        int check = 0;
        ListNode * temp = head;
        while(temp!= NULL) {
            temp = temp->next;
            count++;
        }
        if(count >= k) {
            
            while(curr!=NULL && check < k) {
                nxt = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nxt;
                check++;
            }
            if(nxt != NULL) head->next = reverseKGroup(nxt, k);
            return prev;
        }
        return head;
    }
};