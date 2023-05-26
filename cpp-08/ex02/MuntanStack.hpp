/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MuntanStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 23:41:53 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 23:42:27 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <deque>
#include <stack>

template <class T, class Container = std::deque<T> >
class  MutantStack : public std::stack<T, Container>
{
    private :

    public :
        MutantStack(){};
        MutantStack(const  MutantStack &src){
            *this = src;
        };
        ~MutantStack(){};
        MutantStack & operator=(const  MutantStack &src)
        {
            std::stack<T, Container>::operator=(src);

            return *this;
        }
        
        typedef typename Container::iterator iterator;
        typedef typename Container::const_iterator const_iterator;
        typedef typename Container::reverse_iterator reverse_iterator;
        typedef typename Container::const_reverse_iterator const_reverse_iterator;
        iterator begin() {
            return this->c.begin();
        }

        iterator end() {
            return this->c.end();
        }

        const_iterator begin() const{
            return this->c.begin();
        }

        const_iterator end() const{
            return this->c.end();
        }
        
        reverse_iterator rbegin() {
            return this->c.rbegin();
        }

        reverse_iterator rend() {
            return this->c.rend();
        }

        const_reverse_iterator rbegin() const{
            return this->c.rbegin();
        }

        const_reverse_iterator rend() const{
            return this->c.rend();
        }  
};
