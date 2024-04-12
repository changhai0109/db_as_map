#include <iostream>
#include "db_as_map/db_as_map.hh"

int test_int(void) {
  std::cout << "test_int" << std::endl;
  // db_as_map::unordered_map<int, int> map(":memory:");
  db_as_map::unordered_map<int, int> map("test.db");
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

int test_int64(void) {
  std::cout << "test_int64" << std::endl;
  // db_as_map::unordered_map<int64_t, int64_t> map(":memory:");
  db_as_map::unordered_map<int64_t, int64_t> map("test.db");
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

int test_double() {
  std::cout << "test_double" << std::endl;
  // db_as_map::unordered_map<double, double> map(":memory:");
  db_as_map::unordered_map<double, double> map("test.db");
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

int test_string(void) {
  std::cout << "test_string" << std::endl;
  // db_as_map::unordered_map<std::string, std::string> map(":memory:");
  db_as_map::unordered_map<std::string, std::string> map("test.db");
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

int main(void) {
  int ret = 0;
  ret = test_int();
  if (ret)
    return ret;
  ret = test_int64();
  if (ret)
    return ret;
  ret = test_float();
  if (ret)
    return ret;
  ret = test_double();
  if (ret)
    return ret;
  ret = test_string();
  if (ret)
    return ret;

  return 0;
}
