/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pmerge.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 00:55:25 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/18 00:56:03 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PMERGE_HPP_
# define PMERGE_HPP_

# include <iostream>
# include <deque>
# include <vector>

# define INVALID_ARGUMENTS "ERROR : Number Of arguments is invalid"

class PMerge{
private :
    std::vector<int> _firstContainer;
    std::deque<int> _secondContainer;
public :
	  PMerge();
	  PMerge( const PMerge &oldObj );
    PMerge &operator =( const PMerge &oldObj );
    ~PMerge();
    void    printContainer( std::string message);
    void 	  fillContainers( int ac, char **av );
  	void    sortVector( void );
    void    sortDeque( void );
};
#endif