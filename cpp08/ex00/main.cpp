#include <iostream>
#include <algorithm>
#include <forward_list>
#include <vector>
#include <list>
#include <set>

template<typename T>
typename T::iterator easyfind(T &cont, int data) {
    return std::find(cont.begin(), cont.end(), data);
}

int main() {
    {
        std::vector<int> vec;
        vec.push_back(1);
        vec.push_back(5);
        vec.push_back(2);
        std::cout << *easyfind(vec, 5) << std::endl;
    }
    {
        std::list<int> l;
        l.push_front(1);
        l.push_front(5);
        l.push_front(2);
        std::cout << *easyfind(l, 5) << std::endl;
    }
    {
        std::set<int> s;
        s.insert(1);
        s.insert(5);
        s.insert(2);
        std::cout << *easyfind(s, 5) << std::endl;
    }
}