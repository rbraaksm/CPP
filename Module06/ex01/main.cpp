/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/10 18:13:36 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/10 21:53:04 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data{
	std::string	str[2];
	int			n;
};

Data*	deserialize(void *raw){
	return (reinterpret_cast<Data*>(raw));
}

void*	serialize(void){
	const char	random[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"};
	Data		*data = new Data;
	for (int i = 0; i < 8; i++){
		data->str[0] += random[rand() % (sizeof(random))];
		data->str[1] += random[rand() % (sizeof(random))];
	}
	data->n = rand() * (rand() % 2 == 0 ? 1 : -1);
	return (reinterpret_cast<void*>(data));
}

int	main(void){
	srand(time(NULL));
	void	*serialized = serialize();
	Data	*pointer = deserialize(serialized);
	std::cout << "s1:\t" << pointer->str[0] << std::endl;
	std::cout << "s2:\t" << pointer->str[1] << std::endl;
	std::cout << "n:\t" << pointer->n << std::endl;
	delete pointer;
	return (0);
}
