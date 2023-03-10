#ifndef SLL_H
#define SLL_H

class SL_list{
    private:
        struct Node{
            Node* next;
            int ele;
        };
        Node* head;
        int length;
    public:
        SL_list();
        ~SL_list();
        bool isEmpty();
        void push_front(int ele);
        void push_back(int ele);
        void pop_front();
        void print();
        int get_length();
};

#endif /* SLL_H */