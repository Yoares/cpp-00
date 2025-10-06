/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhoussi <ykhoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 21:38:12 by ykhoussi          #+#    #+#             */
/*   Updated: 2025/10/06 19:54:05 by ykhoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class Contact {
  
    private:
        std::string firstName;
        std::string lastName; 
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
    // setters :
        void    setfirstname(std::string name)
        {
            if (!name.empty())
                firstName = name;
        }        
        void    setlastname(std::string name)
        {
            if (!name.empty())
                lastName = name;
        }
        void    setnickname(std::string name)
        {
            if (!name.empty())
                nickname = name;
        }
        void    setphonenum(std::string num)
        {
            if (!num.empty())
                phoneNumber = num;
        }
        void    setdarkestsecret(std::string secret){
            if (!secret.empty())
                darkestSecret = secret;
        }
        
    // getters :
        std::string   getfirstname(){
            return firstName;
        }
        std::string   getlastname(){
            return lastName;
        }
        std::string getnickname(){
            return nickname;
        }
        std::string getphonenum(){
            return phoneNumber;
        }
        std::string getdarkestsecret(){
            return darkestSecret;
        }
};
