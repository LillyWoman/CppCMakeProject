#define LOGURU_WITH_STREAMS 1

#include "my_lib.h"

#include <loguru.hpp>

int main(int argc, char **argv)
{
    loguru::init(argc, argv);
    loguru::add_file("everything.log", loguru::Append, loguru::Verbosity_MAX);

    cout_hello_world();
    print_linalg_vector();
    print_boost_version();

    LOG_F(INFO, "I'm hungry for some %.3f!", 3.14159);
    LOG_F(ERROR, "Will only show if badness happens");

    return 0;
}