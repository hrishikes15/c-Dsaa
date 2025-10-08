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
        priority_queue<pair<int, ListNode*>, vector<pair<int, ListNode*>>,
                       greater<pair<int, ListNode*>>> minHeap;

        for(int i = 0 ; i < lists.size() ; i++){
            if(lists[i] != nullptr){
                minHeap.push({lists[i] -> val , lists[i]});
            }
        }
            ListNode* dummy = new ListNode(-1);
            ListNode* tail = dummy;

            while(!minHeap.empty()){
                auto top = minHeap.top();
                minHeap.pop();

                int val = top.first;
                ListNode* node = top.second;

                tail-> next = node;
                tail = tail -> next;

                if(node ->next != nullptr){
                    minHeap.push({node->next->val ,node->next});
                }
            }

            return dummy->next;
    }
};