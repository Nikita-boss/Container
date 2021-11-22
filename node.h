#pragma once
#include <iostream>

class Node {
    private:
        int _data;
        Node *_next;
        
    public:
        Node(int data_temp);
        Node(const Node& N);
        ~Node();
        void print() {std::cout << this->_data;}
};

