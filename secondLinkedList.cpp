/*
sD 9/23/24
secondLinkedList.cpp
*/

#include <iostream>

using std::cout, std::string;

struct node
{
    char dataField;
    node* pNext;
};

void printListForward(node* pN)
{
    while (pN != nullptr)
    {
        cout << pN -> dataField << ' ';  // Adds spaces between chars in list for neatness.
        pN = pN -> pNext;
    }
    cout << '\n';
}

void printListReverse(node* pHead)
{
    if (pHead == nullptr) return;  // Returns if the list is empty.

    node* pCurrent;
    node* pLastPrinted = nullptr;

    while (pLastPrinted != pHead)
    {
        pCurrent = pHead;
        
        // Goes to the last node that hasn't been printed.
        while (pCurrent -> pNext != pLastPrinted)
        {
            pCurrent = pCurrent -> pNext;
        }

        // Prints the last unprinted node.
        cout << pCurrent -> dataField << ' ';
        pLastPrinted = pCurrent;
    }

    cout << '\n';
}

int main()
{
    cout << "********************* My Linked List Program *********************\n\n";

    node* pHead = nullptr;  // Initial empty list

    string characters = "helloworld";

    for (char ch : characters)
    {
        node* pNewNode = new node();
        pNewNode -> dataField = ch;
        pNewNode -> pNext = pHead;
        pHead = pNewNode;
    }

    cout << "Printing the list (forward order): \n";
    printListForward(pHead);

    cout << "\nPrinting the list (reverse order): \n";
    printListReverse(pHead);

    cout << "\n\n********************* End of Program *********************\n";

    return 0;
}