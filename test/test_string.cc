#include <iostream>
#include "db_as_map/db_as_map.hh"
#include "test/test.hh"

int test_string(void) {
  std::cout << "test_string" << std::endl;
  // db_as_map::unordered_map<std::string, std::string> map(":memory:");
  // db_as_map::unordered_map<std::string, std::string> map("test.db");
  db_as_map::unordered_map<std::string, std::string> map;
  // test insert
  for (int i = 1; i <= 107; i++) {
    map.insert(std::to_string(i), std::to_string(i + 1));
  }

  // test at
  for (int i = 1; i <= 107; i++) {
    if (map.at(std::to_string(i)) != std::to_string(i + 1)) {
      return 1;
    }
  }

  // test erase
  for (int i = 1; i <= 107; i++) {
    if (!map.erase(std::to_string(i))) {
      return 2;
    }
  }

  // test replace
  for (int i = 1; i <= 107; i++) {
    map.insert(std::to_string(i), std::to_string(i + 1));
  }
  for (int i = 1; i <= 107; i++) {
    map.replace(std::to_string(i), std::to_string(i + 2));
  }
  for (int i = 1; i <= 107; i++) {
    if (map.at(std::to_string(i)) != std::to_string(i + 2)) {
      return 3;
    }
  }

  // test set
  for (int i = 1; i <= 200; i++) {
    map.set(std::to_string(i), std::to_string(i + 3));
  }
  for (int i = 1; i <= 200; i++) {
    if (map.at(std::to_string(i)) != std::to_string(i + 3)) {
      return 4;
    }
  }

  // test in
  for (int i = 1; i <= 400; i++) {
    if (i <= 200) {
      if (!map.in(std::to_string(i))) {
        return 5;
      }
    } else {
      if (map.in(std::to_string(i))) {
        return 6;
      }
    }
  }
  return 0;
}
