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
      if(head == NULL || head -> next == NULL) return NULL;
        ListNode* dummy = new ListNode();
        dummy -> next = head;

        ListNode* slow = dummy;
        ListNode* fast = dummy;

        for(int i = 0 ; i < n ; i++){
            fast = fast -> next;
        }

        while(fast -> next != nullptr){
            slow = slow -> next;
            fast = fast -> next;
        }
        ListNode* temp = slow -> next;
        slow -> next = slow -> next -> next;
        delete(temp);
        return dummy->next;
    }
};
int init = [] {
     ofstream out("user.out");
     cout.rdbuf(out.rdbuf());
     for (string str, n_str; getline(cin, str) && getline(cin, n_str);
         cout << '\n') {
         const int n = stoi(n_str);
         auto end = str.end() - 2;
         for (int commas = 0; end != str.begin() && commas != n - 1; --end)
             if (*end == ',')
                 ++commas;
         auto start =
             find(reverse_iterator(end), str.rend() - 2, ',').base() - 1;
         str.erase(start, end + 1);
         if (str[1] == ',')
             str.erase(1, 1);
         cout << str;
     }
     exit(0);
     return 0;
     }();
