#include "wstl_alloc.h"

int main()
{
    wstd_myalloc::Allocator<int> alloc;
    int* p = alloc.allocate(1,0);
    p[0] = 1;
    std::cout << *p << endl;

#if 0
    int ia[5] = {0,1,2,3,4};
    std::vector<int, wstd_myalloc::Allocator<int> >iv(ia,ia+5);
    for(int i = 0 ; i < iv.size(); ++i) {
        std::cout << iv[i] << ' ';
    }
    std::cout << std::endl;
#endif
    return 0;
}