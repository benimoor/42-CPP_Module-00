/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 21:33:40 by ergrigor          #+#    #+#             */
/*   Updated: 2023/05/05 21:48:33 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char *av[])
{
    int y;

    if (ac > 1)
    {
        for(int i = 1; i < ac; i++)
        {
            y = 0;
            while (av[i][y])
            {
                if (av[i][y] >= 'a' && av[i][y] <=  'z')
                    std::cout << (char)toupper(av[i][y]);
                else
                    std::cout << av[i][y];
                y++;
            }
            std::cout << "\n";
        }
    }
    else
    {
        std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    }
    return 0;
}