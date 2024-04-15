#include "test/test.hh"
#include <iostream>
#include "db_as_map/db_as_map.hh"

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
