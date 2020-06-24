#include "Array.hpp"

template <typename T>
Array<T>::Array(int n) : data(new T[n]), length(n)
{
    for (int i = 0; i < length; ++i)
    {
        data[i] = 0;
    }
}

template <typename T>
Array<T>::Array(const Array& obj)
{
    *this = obj;
}

template <typename T>
Array<T>::~Array(void)
{
    delete [] data;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& obj)
{
    length = obj.length;
    data = new T[length];

    for (int i = 0; i < length; ++i)
    {
        data[i] = obj.data[i];
    }
    return (*this);
}

template <typename T>
T& Array<T>::operator[](int n)
{
    try
    {
        if (n > length - 1 || n < 0)
            throw IndexTooHighException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (data[n]);
}

template<typename T>
Array<T>::IndexTooHighException::IndexTooHighException(void) {}

template<typename T>
Array<T>::IndexTooHighException::~IndexTooHighException(void) throw() {}

template <typename T>
const char* Array<T>::IndexTooHighException::what(void) const throw()
{
    return ("this index is invalid");
}