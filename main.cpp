#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol1209;

/*
Input: s = "abcd", k = 2
Output: "abcd"
Explanation: There's nothing to delete.
*/

tuple<string, int, string>
testFixture1()
{
  return make_tuple("abcd", 2, "abcd");
}

/*
Input: s = "deeedbbcccbdaa", k = 3
Output: "aa"
Explanation:
First delete "eee" and "ccc", get "ddbbbdaa"
Then delete "bbb", get "dddaa"
Finally delete "ddd", get "aa"
*/

tuple<string, int, string>
testFixture2()
{
  return make_tuple("deeedbbcccbdaa", 3, "aa");
}

/*
Input: s = "pbbcggttciiippooaais", k = 2
Output: "ps"
*/

tuple<string, int, string>
testFixture3()
{
  return make_tuple("pbbcggttciiippooaais", 2, "ps");
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see: " << get<2>(f) << endl;
  Solution sol;
  cout << sol.removeDuplicates(get<0>(f), get<1>(f)) << endl;
}

void test2()
{
  auto f = testFixture2();
  cout << "Expect to see: " << get<2>(f) << endl;
  Solution sol;
  cout << sol.removeDuplicates(get<0>(f), get<1>(f)) << endl;
}

void test3()
{
  auto f = testFixture3();
  cout << "Expect to see: " << get<2>(f) << endl;
  Solution sol;
  cout << sol.removeDuplicates(get<0>(f), get<1>(f)) << endl;
}

main()
{
  test1();
  test2();
  test3();
  return 0;
}