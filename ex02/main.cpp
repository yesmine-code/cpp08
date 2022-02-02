#include "MutantStack.hpp"
#include <list>
#include <string>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);

    std::cout<<"***********************************************"<<std::endl; 
    
    std::list<int> mlist;
    mlist.push_back(5);
    mlist.push_back(17);
    std::cout << mlist.back() << std::endl;
    mlist.pop_back();
    std::cout << mlist.size() << std::endl;
    mlist.push_back(3);
    mlist.push_back(5);
    mlist.push_back(737);
    //[...]
    mlist.push_back(0);
    std::list<int>::iterator i = mlist.begin();
    std::list<int>::iterator ie = mlist.end();
    ++i;
    --i;
    while (i != ie)
    {
    std::cout << *i << std::endl;
    ++i;
    }
    std::list<int> l(mlist);

    std::cout<<"***********************************************"<<std::endl;

    MutantStack<int> j;
    j.push(5);
    j.push(17);
    j.push(1);
    j.push(7);
    std::cout << j.size() << std::endl;
    std::cout << j.empty() << std::endl;
    
    std::cout<<"***********************************************"<<std::endl;

    MutantStack<std::string> s1;

    s1.push("hello");
    s1.push("hi");

    std::cout << s1.top() << std::endl;
    std::cout << s1.size() << std::endl;
    s1.pop();
    std::cout << s1.top() << std::endl;
    std::cout << s1.size() << std::endl;


    return 0;
}