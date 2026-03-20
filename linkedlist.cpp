#include <iostream>
using namespace std;

class IntNode {
public:
    IntNode() {
        this->data = 0;
        this->next = nullptr;
    }
    IntNode(int data, IntNode* next) {
        this->data = data;
        this->next = next;
    }
    void SetNext(IntNode* next) { this->next = next; }
    void SetInt(int x) { data = x; }
    IntNode* GetNext() const { return next; }

    int GetData() { return data; }
private:
    int data;
    IntNode* next;
};

int main(){
    IntNode* head = new IntNode();
    IntNode* node1 = new IntNode();

    head->SetInt(10);
    node1->SetInt(20);
    head->SetNext(node1);

    IntNode* curr = head;
    while (curr != nullptr) {
        cout << curr->GetData() << endl;
        curr = curr->GetNext();
    }
    return 0;
}


