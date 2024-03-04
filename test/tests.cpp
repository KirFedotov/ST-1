//Copyright 2024 Fedotov Kirill
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(tests, checkPrime_val) { 
  EXPECT_TRUE(checkPrime(11));
}

TEST(tests, checkPrime_inval_1) { 
  EXPECT_FALSE(checkPrime(10));
}

TEST(tests, checkPrime_inval_2) { 
  EXPECT_FALSE(checkPrime(0));
}

TEST(tests, checkPrime_inval_3) { 
  EXPECT_FALSE(checkPrime(1));
}

TEST(tests, nPrime_val) { 
  EXPECT_EQ(nPrime(5), 3);
}

TEST(tests, nPrime_inval) {  
  EXPECT_NE(nPrime(2), 2);
}

TEST(tests, nextPrime_val) {  
  EXPECT_EQ(nPrime(11), 13);
}

TEST(tests, nextPrime_inval) {  
  EXPECT_NE(nPrime(11), 12);
}

TEST(tests, sumPrime_val) {  
  EXPECT_EQ(sumPrime(17), 41);
}


TEST(tests, sumPrime_inval) { 
  EXPECT_NE(sumPrime(17), 58);
}

TEST(tests, sumPrime_inval) { 
  EXPECT_NE(sumPrime(17), 68);
}

TEST(tests, task_2) {  
  EXPECT_NE(sumPrime(2000000), 142913828922);
}




