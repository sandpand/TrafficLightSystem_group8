#include <catch2/catch_test_macros.hpp>
#include "dataCollector.hpp"

TEST_CASE("Testing DataCollector class", "[DataCollector],[Class],[Data]") {
    DataCollector dataCollector;

    dataCollector.addData(1, {});
    CHECK(dataCollector.getSensorData(1)->size() == 1);
    
    dataCollector.addData(1, {});
    CHECK(dataCollector.getSensorData().at(1).size() == 2);

    CHECK_FALSE(dataCollector.getSensorData().at(1).empty());

    // Currently unfinished, will be tested later.
    // dataCollector.setDataReady(true);
    // CHECK_FALSE(dataCollector.getSensorData(1)->size());
}