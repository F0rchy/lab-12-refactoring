#ifndef LAB_12_REFACTORING_MOCKSTATSENDER_H_
#define LAB_12_REFACTORING_MOCKSTATSENDER_H_

#include <gmock/gmock.h>

#include <StatSender.hpp>

class MockStatSender : public StatSender {
 public:
  MOCK_METHOD(void, AsyncSend,
              (const std::vector<Item>&, const std::string_view&), (override));
};

#endif  // LAB_12_REFACTORING_MOCKSTATSENDER_H_
