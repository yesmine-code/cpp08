#include "Span.hpp"

Span::Span(){
    this->vecsize = 0;
	return;
}

Span::Span(unsigned int vecsize){
    this->vecsize = vecsize;
	return;
}

Span::Span(Span const &src){
	*this = src;
	return;
}

Span::~Span(){
}

Span &Span::operator=(Span const &src){
	this->vecsize = src.vecsize;
	this->vec = src.vec;
	return *this;
}

unsigned int	Span::size(){
	return vec.size();
}

void	Span::addNumber(int number){
	if (vec.size() == vecsize)
		throw std::logic_error("Cannot add numbers");
	vec.push_back(number);
}

int	Span::shortestSpan(){
	std::vector<int>			tmp = vec;
	std::vector<int>::iterator	i;
	int							result = -1;


	if (vec.size() <= 1)
		throw std::logic_error("no span can be found");
	sort(tmp.begin(), tmp.end());
	result = *(tmp.begin() + 1) - *tmp.begin();
	if (this->size() == 2)
		return result;
    i = tmp.begin() + 1;
	while(i != tmp.end() - 1 && result != 0){
		if (*(i + 1) - *i < result)
			result = *(i + 1) - *i;
        i++;
	}
	return result;
}

int	Span::longestSpan(){
	std::vector<int>	tmp = vec;
	if (vec.size() <= 1)
		throw std::logic_error("no span can be found");
	sort(tmp.begin(), tmp.end());
	return *(tmp.end() - 1) - *tmp.begin();
}

void	Span::addByRange(std::vector<int>::iterator begin,std::vector<int>::iterator end){
	std::vector<int>	tmp(begin, end);
	if (tmp.size() > (vecsize - size()))
		throw std::logic_error("Cannot add numbers");
	copy(tmp.begin(), tmp.end(), std::back_inserter(this->vec));
}
