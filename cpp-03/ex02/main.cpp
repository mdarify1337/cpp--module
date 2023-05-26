/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:37:19 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/16 17:19:42 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <vector>
using namespace std;
class base
{
protected :
    int a;
    int b;
public :
	base() : a(10), b(-10)
    {
        std::cout << "BASE" << std::endl;
    };
    base(int a1, int b1) : a(a1), b(b1)
    {
        std::cout << "BASE" << std::endl;
    };
};

class derived : public base
{
private :
    int c;
public :
	derived()  : base(5,9), c(10)
    {
    std::cout << c << std::endl;
    std::cout << "DERIVED" << std::endl;
    }
};

int main()
{
    derived d;
}