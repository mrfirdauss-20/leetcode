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

#include <bits/stdc++.h>
#include <vector>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        if (head == nullptr)
            return head;
        ListNode *l;
        while (head != nullptr && head->val == val)
        {
            head = head->next;
        }
        if (head == nullptr)
            return head;
        l = head;
        ListNode *temp = head->next;
        while (temp != nullptr)
        {
            temp = head->next;
            while (temp != nullptr && temp->val == val)
            {
                temp = temp->next;
            }
            head->next = temp;
            head = head->next;
        }
        return l;
    }
};