//{ Driver Code Starts
//

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
}

// } Driver Code Ends
/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        // Node *p = head,*q=NULL;
        // Node *t = new Node(data);
        // t->data =data;
        // if(data < head->data)
        // {
        //     t->next = head;
        //     head = t;
        //     return head;
        // }
        // while(p && p->data < data)
        // {
        //     q= p;
        //     p = p->next;
        // }
        // if(q)
        // {
        //     t->next = q->next;
        //     q->next = t;
            
        // }
        // return head;
        
        Node *prev=NULL,*curr = head;
        while(curr && curr->data<data){
            prev=curr;
            curr=curr->next;
        }
        Node *temp = new Node(data);
        // temp->data=data;
        if(prev){
            prev->next=temp;
            temp->next=curr;
        }
        else{
            temp->next=head;
            head=temp;
        }
        return head;
    }
};



//{ Driver Code Starts.
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
        
		int data;
		cin>>data;
		
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		
		int k;
		cin>>k;
		Solution obj;
		head = obj.sortedInsert(head,k);
		printList(head); 
	}
	return 0; 
} 

// } Driver Code Ends