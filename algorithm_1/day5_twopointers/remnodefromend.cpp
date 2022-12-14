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
        int count=0;
        for(ListNode *temp=head; temp->next!=nullptr; temp=temp->next)
        {
            count++;
        }
        count++;
        ListNode *temp = head, *held;
        if(count == 1)
        {
            return nullptr;
        }
        else if(count == n)
        {
            head = head->next;
            return head;
        }
        int target = count-n;
        for(int i = target; i>0; i--)
        {
            temp = temp->next;
        }
        temp=temp->next;
        //cout<<count;
        held = head;
        for(int i = target; i>1; i--)
        {
            held = held->next;
        }
        held->next = temp;
        return head;
    }
};
