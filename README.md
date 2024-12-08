# C++ Vector Invalidation Bug
This repository demonstrates a common, yet subtle, bug in C++ involving the invalidation of iterators and pointers when modifying a `std::vector`.

The `bug.cpp` file contains the problematic code. The `bugSolution.cpp` file demonstrates how to correct it by using iterators or avoiding direct pointer manipulation.

**Bug Description:**
The code attempts to modify an element of a `std::vector` using a raw pointer.  However, adding an element to the vector after obtaining the pointer can invalidate the pointer, leading to undefined behavior (potentially crashes or incorrect results).