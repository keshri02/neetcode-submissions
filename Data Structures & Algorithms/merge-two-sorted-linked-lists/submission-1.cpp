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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
       /* vector<int>temp;
        while(list1!=nullptr)
        {
            temp.push_back(list1->val);
            list1=list1->next;
        }
        while(list2!=nullptr)
        {
            temp.push_back(list2->val);
            list2=list2->next;
        }
        sort(temp.begin(),temp.end());
        ListNode* head=new ListNode(temp[0]);
        ListNode* curr=head;
        for(int i=1;i<temp.size();i++)
        {
            curr->next=new ListNode(temp[i]);
            curr=curr->next;
        }
        return head;*/
        if(!list1)
        {
            return list2;
        }
        if(!list2)
        {
            return list1;
        }
        if(list1->val <= list2->val)
        {
            list1->next=mergeTwoLists(list1->next,list2);
            return list1;
        }
        else
        {
            list2->next=mergeTwoLists(list1,list2->next);
            return list2;
        }
    }

};
