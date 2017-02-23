#pragma once

#include <string>

namespace std {

template<typename T>
static basic_string<T> & trim_left(basic_string<T> &str);

template<typename T>
static basic_string<T> & trim_right(basic_string<T> &str);

template<typename T>
static basic_string<T> & trim(basic_string<T> &str);

template<typename T>
static basic_string<T> & tolower(basic_string<T> &str);

template<typename T>
static basic_string<T> & toupper(basic_string<T> &str);

template<typename T>
static basic_string<T> & remove_space(basic_string<T> &str);

}

#include "Utilities.hpp"