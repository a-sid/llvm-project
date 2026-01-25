//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: c++03, c++11, c++14, c++17, c++20, c++23

// <queue>

// priority_queue();

// value_type extract_top();

#include <queue>
#include <cassert>

#include "test_macros.h"

int main(int, char**)
{
    std::priority_queue<int> q;
    q.push(1);
    assert(q.top() == 1);
    q.push(3);
    assert(q.top() == 3);
    q.push(2);
    assert(q.extract_top() == 3);
    assert(q.extract_top() == 2);
    assert(q.extract_top() == 1);
    assert(q.empty());

  return 0;
}
