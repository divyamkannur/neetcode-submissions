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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        map<int,int> nums;
        for(int i=0; i<lists.size();i++)
        {
            ListNode* head;
            head = lists[i];
            while(head!=nullptr)
            {
                nums[head->val]++;
                head = head->next;
            }
        }
        ListNode* result= new ListNode(0);
        ListNode* temp = result;

        for(auto elem:nums)
        {
            while(elem.second!=0)
            {
                result->next= new ListNode(elem.first);
                result=result->next;
                elem.second--;
            }
        }
    return temp->next;  
    }
};
