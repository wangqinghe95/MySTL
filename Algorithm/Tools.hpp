#ifndef TOOLS_HPP__
#define TOOLS_HPP__

template <typename T1, typename T2>
struct pair
{
    T1 first;
    T2 second;
};

template<typename T1, typename T2>
pair<T1, T2> make_pair(const T1& f, const T2& s) {
    return pair<T1,T2>(f,s);
}

template<typename T1, typename T2>
pair<T1,T2> pair_first(const pair<T1,T2>& p) {
    return p.first;
}

template<typename T1, typename T2>
pair<T1,T2> pair_second(const pair<T1,T2>& p) {
    return p.second;
}

#endif