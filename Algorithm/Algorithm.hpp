#ifndef ALGORITHM_HPP__
#define ALGORITHM_HPP__

template <typename InputIterator, typename OutputIterator>
OutputIterator copy(InputIterator first, InputIterator last, OutputIterator result)
{
    while (first != last)
    {
        *result = *first;
        ++result;
        ++first;
    }
    return result;    
}

template <typename InputIterator, typename OutputIterator, typename UnaryOperation>
OutputIterator transform(InputIterator first, InputIterator last, OutputIterator result, UnaryOperation op)
{
    while (first != last)
    {
        *result = op(*first);
        ++result;
        ++first;
    }
    return result;    
}

#endif