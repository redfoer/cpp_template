//
// Created by Вадим Шатов on 05.11.2020.
//
#define BOOST_TEST_MODULE hello_world_test_suite
#include "lib.h"

#include <boost/test/unit_test.hpp>


BOOST_AUTO_TEST_SUITE(hello_world_test_suite)

BOOST_AUTO_TEST_CASE(hello_world_test_version){
    BOOST_CHECK(version() > 0);
}

BOOST_AUTO_TEST_SUITE_END()
