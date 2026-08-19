class Solution {
public:
    struct cmp {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val;
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, cmp> pq;

        for (auto node : lists)
            if (node) pq.push(node);

        ListNode dummy;
        ListNode* cur = &dummy;

        while (!pq.empty()) {
            ListNode* node = pq.top();
            pq.pop();

            cur->next = node;
            cur = cur->next;

            if (node->next)
                pq.push(node->next);
        }

        return dummy.next;
    }
};
