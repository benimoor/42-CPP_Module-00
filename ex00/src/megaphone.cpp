// megaphone.cpp

#include <iostream>

int main(int ac, char **av)
{
	int i;
	int y = 1;
	if (ac <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else{
		while(av[y]){
			i = 0;
			while(av[y][i]){
				if(av[y][i] >= 'a' && av[y][i] <= 'z')
					std::cout << (char)toupper(av[y][i]);
				else
					std::cout << av[y][i];
				i++;
			}
			y++;
		}
	}
	return 0;
}
