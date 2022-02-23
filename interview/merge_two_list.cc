#include "../include/ListNode.hpp"
#include <cstddef>

ListNode* mergeTwoList(ListNode* list1, ListNode* list2) {
    
    // border
    if (list1 == nullptr) {
        return list2;
    } else if (list2 == nullptr) {
        return list2;

    } else if (list1->val < list2->val) {
        list1->next = mergeTwoList(list1, list2->next);
        return list1;
    } else {
        list2->next = mergeTwoList(list1, list2->next)
    }
}


