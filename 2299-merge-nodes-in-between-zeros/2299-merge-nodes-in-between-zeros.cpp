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
    ListNode* mergeNodes(ListNode* head) {
        vector<int>vec;
        int temp = 0;
        int sum = 0;
        while(head != NULL)
        {
           if(head->val != 0)
            {
                temp = head->val;
                sum += temp;
            }
            else if(head->val == 0)
            {
            if(sum>0)
            {
                vec.push_back(sum);
            }
            temp=0;
            sum=0;
            }
            head = head->next ;
        }
      ListNode *tail= NULL;
      for(int i=0;i<vec.size();i++)
      {
        ListNode* curr = new ListNode(vec[i]);
        if(tail==NULL)
        {
            head = tail = curr ;
        }
        else
        {
            tail->next = curr;
            tail=curr;
        }
      } 
      return head;
    }
};