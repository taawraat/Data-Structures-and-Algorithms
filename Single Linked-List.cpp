#include <bits/stdc++.h>
using namespace std;

// Data Structure
// raw implementation of single linkedList
// operations implemented: addElement,
class linkedList{
    // data can be any type of data
    int data;
    linkedList *root = NULL, *nextNode;

public:
    void addElement(int elem){
        linkedList *temp;

        // allocated new memory for data and next node
        temp = new linkedList;
        temp->data = elem;
        temp->nextNode = NULL;

        if(root == NULL)
            root = temp;
        else{
            linkedList *p = root;

            // navigating to last element's address
            while(p->nextNode != NULL)
                p = p->nextNode;
            
            p->nextNode = temp;
        }
    }

    void show(){
        linkedList *it = root;

        while(it->nextNode != NULL){
            cout << it->data << ' ';
            it = it->nextNode;
        }

        cout << it->data << '\n';
    }
};

int main() {
    linkedList list;

    for(int i = 1; i <= 10; i++)
        list.addElement(i);
    
    list.show();
}
