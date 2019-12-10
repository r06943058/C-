#include<iostream>
#include"list.h"
using namespace std;

 
int main() {

    List Mylist;

    Mylist.pushFront(1);
    Mylist.pushFront(6);
    Mylist.pushFront(12);
    Mylist.printOut();
    Mylist.pushAt(2,80);
    Mylist.printOut();
    Mylist.Delete(5);
    Mylist.printOut();
    Mylist.pushAt(3,46);
    Mylist.printOut();
    Mylist.Delete(12);
    Mylist.printOut();
    Mylist.Delete(1);
    Mylist.printOut();
    Mylist.Delete(80);
    Mylist.printOut();
    cout<<Mylist.size<<endl;

	return 0;
}
