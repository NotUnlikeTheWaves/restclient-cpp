#include "restclient.h"
#include <gtest/gtest.h>
#include <string>

class RestClientGetTest : public ::testing::Test
{
 protected:
    std::string url;
    std::string ctype;
    std::string data;

    RestClientGetTest()
    {
    }

    virtual ~RestClientGetTest()
    {
    }

    virtual void SetUp()
    {
      url = "http://localhost:4567";
      ctype = "";
      data = "";
    }

    virtual void TearDown()
    {
    }

};

// Tests
TEST_F(RestClientGetTest, TestRestClientGETBody)
{
  RestClient::response res = RestClient::get(url);
  EXPECT_EQ("GET succesful.", res.body);
}
// check return code
TEST_F(RestClientGetTest, TestRestClientGETCode)
{
  RestClient::response res = RestClient::get(url);
  EXPECT_EQ(200, res.code);
}
