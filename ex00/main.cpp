#include <algorithm>
#include <iostream>
#include <vector>
#include <exception>

class notFound: public std::exception{
  virtual const char* what() const throw(){
    return "occurence not found";
  }
};

template<typename T>
typename T::iterator	easyfind(T &container, int tofind){
	typename T::iterator	result;
    result = find(container.begin(), container.end(), tofind);
	if (result == container.end())
		throw notFound() ;
	return result;
}

int	main( void )
{
	std::vector<int>			vect;
	std::vector<int>::iterator	i;

	for (int i = 1; i < 100; i++)
		vect.push_back(i);
	try{

	i = easyfind(vect, 55);
    std::cout<<"i = "<<*i<<std::endl;

	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{

	i = easyfind(vect, -2);
    std::cout<<"i = "<<*i<<std::endl;

	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{

	i = easyfind(vect, 100);
    std::cout<<"i = "<<*i<<std::endl;

	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}