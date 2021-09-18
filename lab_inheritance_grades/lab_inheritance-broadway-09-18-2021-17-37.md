


## Score: 70/90 (77.78%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor circle.cpp -o .objs/circle.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor flower.cpp -o .objs/flower.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor line.cpp -o .objs/line.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor rectangle.cpp -o .objs/rectangle.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor shape.cpp -o .objs/shape.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor triangle.cpp -o .objs/triangle.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor truck.cpp -o .objs/truck.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor vector2.cpp -o .objs/vector2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/circle.o .objs/flower.o .objs/line.o .objs/rectangle.o .objs/shape.o .objs/triangle.o .objs/truck.o .objs/vector2.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [10/10] - test_virtual_perim

- **Points**: 10 / 10





### ✓ - [10/10] - test_virtual_area

- **Points**: 10 / 10





### ✓ - [20/20] - test_destructor

- **Points**: 20 / 20

```
==76== Memcheck, a memory error detector
==76== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==76== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==76== Command: ./test -r xml "test_destructor"
==76== 
==76== 
==76== HEAP SUMMARY:
==76==     in use at exit: 0 bytes in 0 blocks
==76==   total heap usage: 1,667 allocs, 1,667 frees, 216,576 bytes allocated
==76== 
==76== All heap blocks were freed -- no leaks are possible
==76== 
==76== For counts of detected and suppressed errors, rerun with: -v
==76== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [20/20] - test_constructor

- **Points**: 20 / 20





### ✓ - [10/10] - test_pure_virtual

- **Points**: 10 / 10

```
==79== Memcheck, a memory error detector
==79== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==79== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==79== Command: ./test -r xml "test_pure_virtual"
==79== 
==79== 
==79== HEAP SUMMARY:
==79==     in use at exit: 0 bytes in 0 blocks
==79==   total heap usage: 1,728 allocs, 1,728 frees, 1,757,183 bytes allocated
==79== 
==79== All heap blocks were freed -- no leaks are possible
==79== 
==79== For counts of detected and suppressed errors, rerun with: -v
==79== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✗ - [0/20] - test_slicing

- **Points**: 0 / 20

```
==81== Memcheck, a memory error detector
==81== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==81== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==81== Command: ./test -r xml "test_slicing"
==81== 
==81== 
==81== HEAP SUMMARY:
==81==     in use at exit: 264 bytes in 7 blocks
==81==   total heap usage: 1,794 allocs, 1,787 frees, 1,759,556 bytes allocated
==81== 
==81== 64 bytes in 1 blocks are definitely lost in loss record 5 of 7
==81==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==81==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==81==    by 0x407A35: Flower::Flower(Vector2 const&) (flower.cpp:36)
==81==    by 0x42BDB7: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:134)
==81==    by 0x460CF2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==81==    by 0x451446: Catch::TestCase::invoke() const (catch.hpp:10793)
==81==    by 0x45137C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==81==    by 0x44D8D6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==81==    by 0x44BEAE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==81==    by 0x455246: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==81==    by 0x453EE2: Catch::Session::runInternal() (catch.hpp:10149)
==81==    by 0x453BAA: Catch::Session::run() (catch.hpp:10106)
==81== 
==81== 64 bytes in 1 blocks are definitely lost in loss record 6 of 7
==81==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==81==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==81==    by 0x407A9C: Flower::Flower(Vector2 const&) (flower.cpp:39)
==81==    by 0x42BDB7: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:134)
==81==    by 0x460CF2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==81==    by 0x451446: Catch::TestCase::invoke() const (catch.hpp:10793)
==81==    by 0x45137C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==81==    by 0x44D8D6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==81==    by 0x44BEAE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==81==    by 0x455246: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==81==    by 0x453EE2: Catch::Session::runInternal() (catch.hpp:10149)
==81==    by 0x453BAA: Catch::Session::run() (catch.hpp:10106)
==81== 
==81== 136 (64 direct, 72 indirect) bytes in 1 blocks are definitely lost in loss record 7 of 7
==81==    at 0x4C29EA3: malloc (vg_replace_malloc.c:309)
==81==    by 0x40475CB: operator new(unsigned long) (in /usr/local/lib/libc++abi.so.1.0)
==81==    by 0x407BC9: Flower::Flower(Vector2 const&) (flower.cpp:45)
==81==    by 0x42BDB7: ____C_A_T_C_H____T_E_S_T____10() (tests.cpp:134)
==81==    by 0x460CF2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==81==    by 0x451446: Catch::TestCase::invoke() const (catch.hpp:10793)
==81==    by 0x45137C: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==81==    by 0x44D8D6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==81==    by 0x44BEAE: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==81==    by 0x455246: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==81==    by 0x453EE2: Catch::Session::runInternal() (catch.hpp:10149)
==81==    by 0x453BAA: Catch::Session::run() (catch.hpp:10106)
==81== 
==81== LEAK SUMMARY:
==81==    definitely lost: 192 bytes in 3 blocks
==81==    indirectly lost: 72 bytes in 4 blocks
==81==      possibly lost: 0 bytes in 0 blocks
==81==    still reachable: 0 bytes in 0 blocks
==81==         suppressed: 0 bytes in 0 blocks
==81== 
==81== For counts of detected and suppressed errors, rerun with: -v
==81== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

```



---

This report was generated for **pganot2** using **1f8515527fbd0f3d6d1f7aa95783e625d1ce47c9** (latest commit as of **September 18th 2021, 5:38 pm**)
