#ifndef USER_H
#define USER_H

#include <nlohmann/json.hpp>
#include <vector>
#include <string>
#include <random>
#include "Socket.h"
#include <iostream>


class User{
    public:
        Socket socket;
        int score = 0;
        std::string name;
        std::string nickname;
    
        int getScore(){
            return score;
        }
        void incrementScore(){
            this->score += 10;
        }
        void setNickname(const std::string& nick) {
        nickname = nick;
    }

};


#endif 
