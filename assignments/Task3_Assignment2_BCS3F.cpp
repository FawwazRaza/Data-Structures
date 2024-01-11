//#include <iostream>
//#include <stack>
//#include <queue>
//using namespace std;
//
//class Queue
//{
//public:
//    queue<int> q;
//    void enqueue(int val) {
//        q.push(val);
//    }
//
//    void dequeue() {
//        if (!q.empty()) {
//            q.pop();
//        }
//    }
//};
//
//class Stack {
//public:
//    stack<Queue> s;
//    void pushQueue(Queue q) {
//        s.push(q);
//    }
//
//    void pop() {
//        if (!s.empty()) {
//            s.pop();
//        }
//    }
//};
//
//class Node {
//public:
//    Stack stack;
//    Node* next;
//
//    Node() : next(nullptr) {}
//};
//
//class LinkedList 
//{
//public:
//    Node* head;
//
//
//    LinkedList() : head(nullptr) {}
//    bool empty() { return head == nullptr; }
//
//    void insertStack(Stack s) {
//        Node* newNode = new Node();
//        newNode->stack = s;
//
//        if (head == nullptr) {
//            head = newNode;
//        }
//        else {
//            Node* temp = head;
//            while (temp->next != nullptr) {
//                temp = temp->next;
//            }
//            temp->next = newNode;
//        }
//    }
//
//    void deleteStack(int index) {
//        index--;
//        if (head == nullptr) {
//            cout << "ll is empty\n";
//            return;
//        }
//
//        if (index == 0) {
//            Node* temp = head;
//            head = head->next;
//            delete temp;
//            return;
//        }
//
//        Node* temp = head;
//        Node* prev = nullptr;
//        int count = 0;
//
//        while (temp != nullptr && count < index) {
//            prev = temp;
//            temp = temp->next;
//            count++;
//        }
//
//        if (temp == nullptr) {
//            cout << "node not found " << endl;
//            return;
//        }
//
//        prev->next = temp->next;
//        delete temp;
//    }
//
//    void display() {
//        Node* current = head;
//
//        while (current != nullptr) {
//            cout << "Stack: ";
//            Stack curr_s = current->stack;
//            stack<Queue> tempStack;
//
//            while (!curr_s.s.empty()) {
//                Queue curr_q = curr_s.s.top();
//                curr_s.s.pop();
//                tempStack.push(curr_q);
//
//                while (!curr_q.q.empty()) {
//                    cout << curr_q.q.front() << " ";
//                    curr_q.q.pop();
//                }
//            }
//
//            while (!tempStack.empty()) {
//                curr_s.s.push(tempStack.top());
//                tempStack.pop();
//            }
//
//            cout << endl;
//
//            current = current->next;
//        }
//    }
//    void sortLinkedList() {
//        // Collect all elements from the linked list
//        vector<int> allElements;
//
//        Node* current = head;
//
//        while (current != nullptr) {
//            Stack currentStack = current->stack;
//
//            while (!currentStack.s.empty()) {
//                Queue currentQueue = currentStack.s.top();
//                currentStack.s.pop();
//
//                while (!currentQueue.q.empty()) {
//                    allElements.push_back(currentQueue.q.front());
//                    currentQueue.q.pop();
//                }
//            }
//
//            current = current->next;
//        }
//
//        // Sort the elements
//        sort(allElements.begin(), allElements.end());
//
//        // Put the sorted elements back into the linked list
//        current = head;
//        size_t index = 0;
//
//        while (current != nullptr) {
//            Stack currentStack = current->stack;
//
//            while (!currentStack.s.empty()) {
//                Queue& currentQueue = currentStack.s.top();
//                currentStack.s.pop();
//
//                while (!currentQueue.q.empty()) {
//                    currentQueue.q.pop();
//                }
//
//                // Put the sorted elements back into the queue
//                while (index < allElements.size()) {
//                    currentQueue.q.push(allElements[index]);
//                    index++;
//                }
//            }
//
//            current = current->next;
//        }
//    }
//    void displaySorted() {
//        Node* current = head;
//
//        while (current != nullptr) {
//            Stack currentStack = current->stack;
//            vector<int> sortedElements;
//
//            while (!currentStack.s.empty()) {
//                Queue currentQueue = currentStack.s.top();
//                currentStack.s.pop();
//
//                while (!currentQueue.q.empty()) {
//                    sortedElements.push_back(currentQueue.q.front());
//                    currentQueue.q.pop();
//                }
//            }
//            sort(sortedElements.begin(), sortedElements.end());
//
//            for (size_t i = 0; i < sortedElements.size(); ++i) {
//                cout << sortedElements[i] << " ";
//            }
//
//            cout << endl;
//
//            current = current->next;
//        }
//    }
//
// 
//
//};
//
//int main() {
//    LinkedList li;
//
//    Stack s1, s2,s3;
//
//    Queue q1, q2,q3;
//    q1.enqueue(5);
//    q2.enqueue(15);
//    q1.enqueue(16);
//    q2.enqueue(3);
//     q3.enqueue(100);
//    q3.enqueue(200);
//
//    
//    s2.pushQueue(q2);
//    s1.pushQueue(q1);
//    s3.pushQueue(q3);
//    li.insertStack(s2);
//    li.insertStack(s1);
//    
//    li.insertStack(s3);
//    li.display();
//    cout << "after sorting : " << endl;
//    li.sortLinkedList();
//    li.displaySorted();
//    li.deleteStack(2);
//    li.deleteStack(1);
//    
//    cout << "After deletion  :  "<<endl;
//    li.display();
//    if (li.empty()) {
//       
//            cout << "ll is empty";
//    }
//
//    return 0;
//}
