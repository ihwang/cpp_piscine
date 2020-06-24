#pragma once

#include <iostream>

template <typename T>
class Array
{
private:
    T *data;
    int length;

public:
    Array(int n = 1);
    Array(const Array &obj);
    ~Array(void);

    Array &operator=(const Array &obj);

    T& operator[](int n);

    class IndexTooHighException : public std::exception
    {
    public:
        IndexTooHighException(void);
        virtual ~IndexTooHighException(void) throw();
        virtual const char *what(void) const throw();
    };
};