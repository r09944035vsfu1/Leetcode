/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode *prev = &dummy;
    struct ListNode *curr = head;

    /* First Pass to get the total length of the linked list */
    int total_len = 0;
    while (curr) {
        total_len++;
        curr = curr->next;
    }
  
    /* Second Pass to remove the node */
    curr = head;
    
    int count = 1;
    int found = total_len - n + 1;
    while (curr) {
        struct ListNode *next = curr->next;
        if (count == found) {
            prev->next = next;
            break;
        }
        prev = curr;
        curr = next;
        count++;
    }
    return dummy.next;
}
