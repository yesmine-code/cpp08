#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <algorithm>
# include <cstdlib>
# include <iterator>
# include <exception>

class Span{
private:
	unsigned int		vecsize;
	std::vector<int>	vec;
public:
	Span();
	Span(unsigned int storedSize);
	Span(const Span &src);
	~Span();
	Span	&operator=(const Span &src);
	void			addNumber(int number);
	int				shortestSpan();
	int				longestSpan();
	unsigned int	size();
    void            addByRange(std::vector<int>::iterator begin,std::vector<int>::iterator end);
};

#endif