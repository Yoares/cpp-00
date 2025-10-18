/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ares <ares@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:32:03 by ykhoussi          #+#    #+#             */
/*   Updated: 2025/10/17 19:50:22 by ares             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact {
  
    private:
        std::string firstName;
        std::string lastName; 
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
    // Constructor
    Contact();
    
    // setters :
        void    setfirstname(std::string name);   
        void    setlastname(std::string name);
        void    setnickname(std::string name);
        void    setphonenum(std::string num);
        void    setdarkestsecret(std::string secret);
        
    // getters :
        std::string   getfirstname();
        std::string   getlastname();
        std::string getnickname();
        std::string getphonenum();
        std::string getdarkestsecret();
};
