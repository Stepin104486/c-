#include "account.h"
#include <gtest/gtest.h>
namespace {
TEST(Account, Empty_Cosnstructor) {
    Account A1;
  EXPECT_EQ(0.0, A1.getBalance());
}

TEST(Account, Parameter) {
    Account A1("500", "usha", 600);
  EXPECT_EQ(600, A1.getBalance());
}

TEST(Account, Transaction) {
    Account A2("500", "usha", 600);
    A2.debit(300);
    A2.credit(52.5);
    EXPECT_EQ(352.5, A2.getBalance());
}
}
