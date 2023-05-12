#ifndef ELIST_HPP
#define ELIST_HPP

// class EList has 2 structs
// Node and MiddleNode
// also has the 4 functions as public members
class EList {
private:
    struct MiddleNode; // forward declaration of the MiddleNode class

    // objects of this class can point to the MiddleNode
    struct Node {      
        MiddleNode* next;
        int ele;
    };

    // objects of MiddleNode class have the 4 pointers
    // and int ele 
    struct MiddleNode {
        Node* north;
        Node* east;
        Node* south;
        Node* west;
        int ele;
    };

    // pointer to the MiddleNode
    MiddleNode* middle;
    
public:
    EList();
    ~EList();
    void build_data_structure();
    void display();
};

#endif