class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> s;
        while(headA!=NULL)
        {
            s.insert(headA);
            headA=headA->next;
        }
        while(headB!=NULL)
        {
            if(s.find(headB)!=s.end())
                return headB;
            headB=headB->next;
        }
        return NULL;
        
    }
};