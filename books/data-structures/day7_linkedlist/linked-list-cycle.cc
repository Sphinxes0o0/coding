#include <cstddef>
#include <unordered_map>
#include <unordered_set>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    
};

class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return false;
        }
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (slow != fast) {
            if (fast == nullptr || fast->next == nullptr) {
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }

    bool hasCycle1(ListNode* head) {
        unordered_set<ListNode*> seen;

        while (head != nullptr) {
            if (seen.count(head)) return true;


            seen.insert(head);
            head = head->next;
        }
        return false;
    }

    ListNode* mergeTwoLists_1(ListNode* l1, ListNode* l2) {
        if (l1 == nullptr) return l2;
        else if (l2 == nullptr) return l1;
        else if (l1->val < l2->val) {
            l1->next = mergeTwoLists_1(l1->next, l2);
        } else {
            l2->next = mergeTwoLists_1(l1, l2->next);
            return l2;
        }
    
    }

    ListNode* mergeTwoLists_2(ListNode* l1, ListNode* l2) {\
       ListNode* preHead = new ListNode(-1);
       ListNode* prev = preHead;

       while (l1 != nullptr && l2 != nullptr) {
           if (l1->val < l2->val) {
               prev->next = l1;
               l1 = l1->next;
           } else {
               prev->next = l2;
               l2 = l2->next;
           }
           prev = prev->next;
       } 

       // 合并后 l1 和 l2 最多只有一个还未被合并完，我们直接将链表末尾指向未合并完的链表即可
        prev->next = l1 == nullptr ? l2 : l1;
        
        return preHead->next;
    }

    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) return head;

        head->next = removeElements(head->next, val);
        return head->val == val ? head->next : head;
    }

    ListNode* removeElements2(ListNode* head, int val) {
        struct ListNode* dummyHead = new ListNode(0, head);
        struct ListNode* temp = dummyHead;
        while (temp->next != NULL) {
            if (temp->next->val == val) {
                temp->next = temp->next->next;
            } else {
                temp = temp->next;
            }
        }
        return dummyHead->next;
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* reverseList2(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* newHead = reverseList2(head->next);
        head->next->next = head;
        head->next = nullptr;
        return newHead;
    }

    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return head;

        
    }

    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }

};





