#include "helper.hpp"

#include <string>

int main(int argc, char* argv[])
{
    Helpers::Helper hlp = Helpers::Helper();
    printf("%s\n",hlp.GetHelloWorld().c_str());
    return 0;
}
