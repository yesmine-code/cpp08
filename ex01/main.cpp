#include "Span.hpp"

int main()
{
    Span sp;
    sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;


    try{
        Span s(2);

        s.addNumber(6);
        s.addNumber(3);
        s.addNumber(1);

    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }


    try{
        Span ss(1);

        ss.addNumber(6);
        std::cout << ss.shortestSpan() << std::endl;
        std::cout << ss.longestSpan() << std::endl;

    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }

    try{
        Span si(3);

        si.addNumber(6);
        si.addNumber(6);
        si.addNumber(16);
        std::cout << si.shortestSpan() << std::endl;
        std::cout << si.longestSpan() << std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }

    try{
        std::vector<int> v;
        for(int i= 0; i < 12000 ; i++)
            v.push_back(i);
        Span yas(13000);
        yas.addNumber(30000);
        yas.addNumber(33000);
        yas.addNumber(33300);
        yas.addByRange(v.begin(), v.end());
        std::cout << yas.longestSpan() << std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }

    try{
        std::vector<int> v;
        for(int i= 0; i < 12000 ; i++)
            v.push_back(i);
        Span yas(1300);
        yas.addNumber(30000);
        yas.addNumber(33000);
        yas.addNumber(33300);
        yas.addByRange(v.begin(), v.end());
        std::cout << yas.longestSpan() << std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }
    
    
    return 0;
}
/*
$> ./ex01
2
14
$>*/