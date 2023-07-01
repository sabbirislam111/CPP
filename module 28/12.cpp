#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
   int value;
   Node *head;
   Node *next;
   Node(int val)
   {
       this->value = val;
       this->head = NULL;
       this->next = NULL;
   }
};


void deleteValue(Node *head)
{
   Node *fast = head;
   Node *last;

   while (fast)
   {
       bool chk = false;
       int sum = 0;
       last = fast;
       while (last)
       {
           sum += last->value;
           if (sum == 0)
           {
               fast = last;
               chk = true;
               break;
           }
           last = last->next;
       }
       if (chk == false)
       {
           cout << fast->value << " ";
       }
       fast = fast->next;
   }
}


int main()
{
   int n;
   cin >> n;
   Node *head = NULL;
   Node *tail = NULL;
   for (int i = 0; i < n; i++)
   {
       int val;
       cin >> val;
       Node *newNode = new Node(val);
       if (head == NULL)
       {
           head = newNode;
           tail = newNode;
           continue;
       }
       tail->next = newNode;
       tail = tail->next;
   }
   deleteValue(head);
   return 0;
}
