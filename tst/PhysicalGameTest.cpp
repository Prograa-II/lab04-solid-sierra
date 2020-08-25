//
// Created by felip on 25/8/2020.
//
#include "gtest/gtest.h"
#include "../src/PhysicalGame.h"


TEST(PhysicalGameTestSuite, CalculateDiscount){
    PhysicalGame physicalGame;
    physicalGame.setName("Call of Duty: Black Ops 4 (PS4)");
    physicalGame.setItemWeight(0.564);
    physicalGame.setProductDimensions("3.94 x 0.59 x 5.91 inches; 0.56 Ounces");
    physicalGame.setPrice(24.66);
    EXPECT_DOUBLE_EQ(physicalGame.getPrice(), 24.66);
    physicalGame.setTax(0.13);
    physicalGame.setDiscount(0.13);
    physicalGame.calculatePriceWithTax();
    physicalGame.calculatePriceWithDiscount();

    EXPECT_DOUBLE_EQ(physicalGame.getPrice(), 24.243245999999999);

}