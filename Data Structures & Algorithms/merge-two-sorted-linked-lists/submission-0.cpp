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
        ListNode* result = new ListNode(0);

        ListNode* node1 = list1;
        ListNode* node2 = list2;
        ListNode* tmp = result;

        while(node1!=nullptr && node2!=nullptr)
        {
            if(node1->val<node2->val)
            {
                tmp->next = node1;
                tmp = tmp->next;
                node1 = node1->next;
            }
            else
            {
                tmp->next = node2;
                tmp = tmp->next;
                node2 = node2->next;
            }
        }
        if(node1!=nullptr)
        {
            tmp->next = node1;
        }
        if(node2!=nullptr)
        {
            tmp->next = node2;
        }
        return result->next;

    }
};
