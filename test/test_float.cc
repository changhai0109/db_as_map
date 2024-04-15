#include <iostream>
#include "db_as_map/db_as_map.hh"
#include "test/test.hh"

int test_float() {
  std::cout << "test_float" << std::endl;
  // db_as_map::unordered_map<float, float> map(":memory:");
  db_as_map::unordered_map<float, float> map("test.db");
  // test insert
  for (int i = 1; i <= 107; i++) {
    map.insert(i, i + 1);
  }

  // test at
  for (int i = 1; i <= 107; i++) {
    if (map.at(i) != i + 1) {
      return 1;
    }
  }

  // test erase
  for (int i = 1; i <= 107; i++) {
    if (!map.erase(i)) {
      return 2;
    }
  }

  // test replace
  for (int i = 1; i <= 107; i++) {
    map.insert(i, i + 1);
  }
  for (int i = 1; i <= 107; i++) {
    map.replace(i, i + 2);
  }
  for (int i = 1; i <= 107; i++) {
    if (map.at(i) != i + 2) {
      return 3;
    }
  }

  // test set
  for (int i = 1; i <= 200; i++) {
    map.set(i, i + 3);
  }
  for (int i = 1; i <= 200; i++) {
    if (map.at(i) != i + 3) {
      return 4;
    }
  }

  // test in
  for (int i = 1; i <= 400; i++) {
    if (i <= 200) {
      if (!map.in(i)) {
        return 5;
      }
    } else {
      if (map.in(i)) {
        return 6;
      }
    }
  }
  return 0;
}
