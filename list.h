/*
1) Done on integers and not with templates
2) No function overloading

    1. Check all member functions for specifics, eg. const
    2. 
To do:
    Check how to create iterator class
    Check how to write comments using doxygen
*/

class list {
    private:


    public:
        list();             // constructor
        ~list();            // destructor
        int& front();       // access the first element
        bool empty() const;       // checks whether the container is empty 
        int max_size() const; // returns the maximum possible number of elements
        void clear();       // clears the contents 
        // iterator insert_after(const_iterator pos, const int& value);                    // inserts elements after an element 
        // iterator emplace_after(const_iterator pos, const int& value);                    // constructs elements in-place after an element 


};