/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: villemustonen <villemustonen@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 05:51:48 by villemuston       #+#    #+#             */
/*   Updated: 2023/10/09 06:00:23 by villemuston      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void) {
    std::cout << "Harl complains at DEBUG level." << std::endl;
}

void    Harl::info(void) {
    std::cout << "Harl complains at INFO level." << std::endl;
}

void    warning(void) {
    std::cout << "Harl complains at WARNING level." << std::endl;
}

void    Harl::error(void) {
    std::cout << "Harl complains at ERROR level." << std::endl;
}

void    Harl::complain(std::string level) {
    std::map<std::string, std::function<void()>> complaintMap = {
        {"DEBUG", std::bind(&Harl::debug, this)},
        {"INFO", std::bind(&Harl::info, this)},
        {"WARNING", std::bind(&Harl::warning, this)},
        {"ERROR", std::bind(&Harl::error, this)}
    }

        auto it = complaintMap.find(level);
        if (it != complaintMap.end()) {
            it->second();
        } else {
            std::cout << "Harl doesn't know how to complain at " << level << " level." << std::endl;
        }
    }
}