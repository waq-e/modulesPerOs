#include <iostream>

void foo(const char * x) {
    std::cout << "foo called from " << x;
}

#ifdef WIN32
#include "module_windows.cpp"
#else
#include "module_unix.cpp"
#endif

int main() {
    call_foo();
}
