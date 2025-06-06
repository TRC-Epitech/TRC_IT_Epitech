/*
** EPITECH PROJECT, 2024
** TRC_IT_Epitech
** File description:
** Parser.hpp
*/

#ifndef _PARSER_HPP_
#define _PARSER_HPP_
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "../include/Error.hpp"

class Parser {
    public:
        
        std::vector<std::string> parseFile(const std::string &filename);

        Parser(const std::string &filename) : _filename(filename) {};
        
        ~Parser() = default;
    
    private:

        std::string _filename;
};

#endif /* !_PARSER_HPP_ */