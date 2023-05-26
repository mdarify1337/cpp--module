/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 23:31:48 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 23:36:37 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <list>
#include <exception>
#include <iterator>
#include <vector>

class Span
{
    private :
        unsigned int N;
        std::vector<int> lst;
        
    public :
        Span(void);
        Span(unsigned int  N);
        Span(const Span &src);
        ~Span();

        Span & operator=(const Span &src);
        void addNumber(int num);
        void addNumber(std::vector<int>::const_iterator beg, std::vector<int>::const_iterator end);
    
        class TheListIsFull : public std::exception 
        {
             const char* what() const throw();
        };

         class NoSpanCanBeFound : public std::exception 
        {
             const char* what() const throw();
        };        
        long shortestSpan() const;
        long longestSpan() const ;
        
        void print_span();
};
