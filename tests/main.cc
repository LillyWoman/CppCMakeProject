#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch2/catch.hpp"

#include "my_lib.h"


TEST_CASE( "Boost version is testing", "[BoostTest]" ) {
    int ver = print_boost_version();
    REQUIRE( ver == 107500);
}