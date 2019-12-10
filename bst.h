#ifndef _BST_H
#define _BST_H

#include<iostream>
using namespace std;

class Node{
	public:
	  Node(int _key){
	  	 key=_key; 
	     left=right=NULL;
	  }
	  
	  int key;
	  // stringelement;
	
      Node* left;
	  Node* right;
	
};


class BST{
	public:
		BST(){
			root=NULL;
		}
		
		void insert(int _key){
			if (root==NULL)
				root=new Node(_key);
			else 
			    insert(root, _key);
		}
		
		bool search(int _key) const{
			if (root==NULL)
			   return false;
			else
			   return search(root, _key);
		}
		
		void printInOrder() const{
			if (root==NULL)
			    cout<<endl;
			else 
			   printInOrder(root);
			   cout<<endl;
		}
		
		void printPreOrder() const{
			if (root==NULL)
			    cout<<endl;
			else 
			   printPreOrder(root);
		}
		
	protected:	
		Node* root;
		
        // p can never be NULL
		void insert(Node* p, int _key)	{
		
			if (p->key>_key){
				  if (p->left==NULL)
                      p->left=new Node(_key);
				  else 
				     insert(p->left,_key);
			}
			else {//right
			      if (p->right==NULL)
                      p->right=new Node(_key);
				  else
				      insert(p->right,_key);	
			}
				
	    }
	    
	        // p can never be NULL
	    	bool search(Node* p, int _key)	const{
		    
			if (p->key==_key)
			     return true;
			else if (p->key>_key){
				  if (p->left==NULL)
                       return false;
				  else 
				       return search(p->left,_key);
			}
			else {//right
			      if (p->right==NULL)
                       return false;
				  else
				      return search(p->right,_key);	
			}		
	    }
	
	        // p can never be NULL
	        void printInOrder(Node* p) const{
	        	 if (p->left!=NULL)
      				printInOrder(p->left);
      			cout<<p->key<<" ";
      			 if (p->right!=NULL)
				    printInOrder(p->right);
				  }
		
		    void printPreOrder(Node* p) const{
		    	 cout<<p->key<<" ";
	        	 if (p->left!=NULL)
      				printPreOrder(p->left);
      			 if (p->right!=NULL)
				    printPreOrder(p->right);
				  }
	        			  
	        	
	        	
	        	
		
};




#endif
