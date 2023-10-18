#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

template<typename T>
void swap(T &val1, T &val2) {
    T val = val1;
    val1 = val2;
    val2 = val;
}

template<typename T>
T max(T &val1, T &val2) {
    return val1 > val2 ? val1 : val2;
}

template<typename T>
T min(T &val1, T &val2) {
    return val1 < val2 ? val1 : val2;
}

#endif