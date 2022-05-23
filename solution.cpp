#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
#include <functional>
using namespace sol1209;
using namespace std;

/*takeaways
  - use stack
*/

string Solution::removeDuplicates(string s, int k)
{
  /* count the number of adjacent duplicates */
  auto st = stack<pair<char, int>>();

  for (auto c : s)
  {
    if (st.empty() || st.top().first != c)
    {
      st.push({c, 1});
      continue;
    }
    /* remove the char */
    if (++st.top().second == k)
      st.pop();
  }

  string result;
  while (!st.empty())
    /* assemble the string backward */
    result = string(st.top().second, st.top().first) + result, st.pop();

  return result;
}