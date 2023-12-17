//===============================================================
// lab12-linked-next.cpp
//===============================================================
#include <iostream>
#include <string>
using namespace std;

struct Node {
    string data;
    Node *next;
};
typedef Node* NodePtr;
void printList(NodePtr head);

int main() {
    NodePtr pList, pn;
    pList = new Node;
    pList->data = "green";

    pn = new Node;
    pn->data = "blue";
    pList->next = pn;

    pn->next = new Node;
    pn = pn->next;
    pn->data = "violet";
    pn->next = nullptr;

    /* a. print list. */
    /*================*/
    cout << "\n#a. print list..." << endl;
    printList(pList);
    
    /* b. insert node "indigo" after "blue" and print list. */
    /*======================================================*/
    cout << "\n#b. insert indigo after blue..." << endl;
    
    // search blue
    for (pn = pList; pn != nullptr; pn = pn->next)
        if (pn->data == "blue") break;
    
    // insert indigo after blue
    if (pn->data == "blue") {
        NodePtr pnew = new Node;
        pnew->data = "indigo";
        pnew->next = pn->next;
        pn->next = pnew;
    } else
        cout << "blue does not exist." << endl;
    printList(pList);
    
    /* c. delete node "violet" and print list. */
    /*=========================================*/
    cout << "\n#c. delete node violet..." << endl;
    NodePtr pb, discard;
    discard = pList;
    
    // search violet
    while(discard->data != "violet" && discard->next != nullptr){
        pb = discard; //pb is set as node before discard
        discard = discard->next;
    }
    
    // delete violet
    if(discard->data == "violet"){
        pb->next = discard->next; //advance pb over discard
        delete discard; // discard node violet
    } else
        cout << "violet does not exist." << endl;
    printList(pList);
    
    /* d. delete all nodes in the list. */
    /*===================================*/
    cout << "\n#d. delete all nodes in the list..." << endl;
    pn = pList;
    while(pn != nullptr){
        pb = pn; //pb is set as node before pn
        pn = pn->next;
        printf("\tdeleting %s...\n", (*pb).data.c_str());
        delete pb;
    }
    cout << "\tall nodes are deleted.\n" << endl;
    return 0;
}
void printList(NodePtr head){
    NodePtr pn = head;
    while(pn != nullptr){
        cout << "\t" << pn->data << endl;
        pn = pn->next;
    }
}