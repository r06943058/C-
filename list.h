#ifndef _list_H
#define _list_H

#include<iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Node{
    public:
        int element;	
		Node * next; 
};


class List{
    public:
    	List(){
		    first = NULL;
			size=0;  
		}
		
		bool isempty() const{ 
		   return (size==0);
         }
         
         void pushFront(int _element){
			Node* p = new Node;
			p -> element=_element;
			p -> next=first;
			first=p;
			++size;
		}
		
		void pushAt(int index, int _element){
			if (index==0)
				pushFront(_element);
			else{
				Node* before=first;
				for (int i=1;i<index;i++)
            	    before=before->next;        
			    push(before,_element);	
			}	
			
		}
		
			void Delete(int _element){
			if (first==NULL)
			   cout<<"List is empty."<<endl;
			else{
			Node *current = first;      
            Node *before = NULL;
			
			while(current!=NULL && current->element!=_element){
				before=current;
				current=current->next;
			}
			
			if (current==NULL)
		       cout<<"There is no "<< _element<<" in the list."<<endl; 
		       
			else if (current==first){
			   first=current->next;
			   delete current;                
               current = NULL;
               size--;
		    }
           		    
			else{  
				before->next=current->next;
			    delete current;                
                current = NULL;
                size--;
			}
	 	
	     	}
		}

        void printOut() const{
           Node* p=first;
           while (p!=NULL){
           cout<<p->element<<"->";
           p=p->next;
           }
           cout<<"NULL"<<endl;
		} 
		
		int size; 
		
        protected: 
        
            Node* first;  		
		  
			void push (Node* before, int _element){
				Node* p= new Node;
				p->element=_element;
				p->next=before->next;
				before->next=p;
				++size;	
			}
			
		
			
			
			
		

};

#endif


