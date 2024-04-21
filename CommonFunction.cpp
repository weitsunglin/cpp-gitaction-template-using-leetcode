#include "CommonFunction.h"

using namespace std;

void CommonFunction::printLinkedList(ListNode* head) {
    cout << "printLinkedList " << endl;
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

void CommonFunction::printCharVector( vector<char>& v) {
    for (char c : v) {
        cout << c << " ";
    }
    cout << endl;
}

void CommonFunction::printIntVector(vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}
