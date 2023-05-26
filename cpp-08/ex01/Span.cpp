/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 23:31:38 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 23:33:47 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

Span::Span(unsigned int  N) : N(N){};


Span::Span(const Span &src)
{
    *this = src;
}

Span::Span(): N(0){};

Span::~Span(){};


Span & Span::operator=(const Span &src)
{
    this->N = src.N;
    this->lst = src.lst;

    return *this;
}


void Span::addNumber(int num)
{
    if (this->lst.size() >= this->N)
        throw TheListIsFull();
    this->lst.push_back(num);
}

const char* Span::TheListIsFull::what() const throw() {
    return "The List Is Full";
};

const char* Span::NoSpanCanBeFound::what() const throw() {
    return "No Span Can Be Found";
};

long Span::longestSpan() const
{
    if(this->lst.size() < 2)
     throw NoSpanCanBeFound();
    return(static_cast<long>(*std::max_element(this->lst.begin(), this->lst.end())) - *std::min_element(this->lst.begin(), this->lst.end()) );
}

long Span::shortestSpan() const
{
    std::vector<int> tmp(lst);
    if(this->lst.size() < 2)
     throw NoSpanCanBeFound();

    std::sort(tmp.begin(), tmp.end());
    std::vector<int>::const_iterator it;
    long  min = abs(*tmp.begin() - *(++tmp.begin()));
    for(it = tmp.begin(); it != tmp.end() - 1; it++)
    {
        if ((abs(*it - *(it + 1))) < min)
            min = abs(*it - *(it + 1));
    }
     return min;
}


void Span::addNumber(std::vector<int>::const_iterator beg, std::vector<int>::const_iterator end)
{
    if (this->lst.size() >= this->N)
        throw TheListIsFull();
    this->lst.insert(lst.end(), beg, end);
}


void Span::print_span()
{
    std::vector<int>::const_iterator it;
    
    for (it = lst.begin(); it != lst.end(); ++it)
        {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
}