/*
 * Created on Wed Jun 04 2025
 *
 * Copyright (c) 2025 Tekbot Epitech
 */

/**
 * @file Error.hpp
 * @brief Defines the Error class for exception handling.
 * 
 * This file contains the definition of the `Error` class, which is a custom
 * exception class used to handle errors in the application. It inherits from
 * `std::exception` and provides a mechanism to store and retrieve error messages.
 */

#ifndef ERROR_HPP_
#define ERROR_HPP_
#include <exception>
#include <string>

/**
 * @class Error
 * @brief A custom exception class for handling errors.
 * 
 * The `Error` class extends `std::exception` and allows the user to specify
 * a custom error message. This message can be retrieved using the `what()` method.
 */
class Error : public std::exception {
    public:
        /**
         * @brief Constructs an Error object with a custom message.
         * @param msg The error message to be stored.
         */
        Error(std::string msg): _msg(msg) {};

        /**
         * @brief Default destructor for the Error class.
         */
        ~Error() = default;

        /**
         * @brief Retrieves the error message.
         * @return A C-style string containing the error message.
         */
        const char *what() const noexcept override {return _msg.c_str();};

    private:
        std::string _msg; /**< The error message stored in the exception. */
};

#endif /* !ERROR_HPP_ */