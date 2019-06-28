#include<forward_list>
#include<iostream>

//forward_list<int> flist;
class List
{
private:
    forward_list<int> flist;
public:
    void izmest();
    void add();
    void print();
    void del();
};
