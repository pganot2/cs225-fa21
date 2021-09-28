---

This report was generated for **pganot2** using **97d7ee6ba95dd90ebc1025c02502381ff41e33ef** (latest commit as of **September 27th 2021, 11:59 pm**)

---




## Score: 37/52 (71.15%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part1.o .objs/tests/tests_part2.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==71== Memcheck, a memory error detector
==71== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==71== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==71== Command: ./test -r xml "List::insertFront\ size"
==71== 
==71== 
==71== HEAP SUMMARY:
==71==     in use at exit: 0 bytes in 0 blocks
==71==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==71== 
==71== All heap blocks were freed -- no leaks are possible
==71== 
==71== For counts of detected and suppressed errors, rerun with: -v
==71== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::insertBack size

- **Points**: 2 / 2

```
==73== Memcheck, a memory error detector
==73== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==73== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==73== Command: ./test -r xml "List::insertBack\ size"
==73== 
==73== 
==73== HEAP SUMMARY:
==73==     in use at exit: 0 bytes in 0 blocks
==73==   total heap usage: 2,132 allocs, 2,132 frees, 252,400 bytes allocated
==73== 
==73== All heap blocks were freed -- no leaks are possible
==73== 
==73== For counts of detected and suppressed errors, rerun with: -v
==73== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [4/4] - List::insert contents

- **Points**: 4 / 4

```
==75== Memcheck, a memory error detector
==75== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==75== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==75== Command: ./test -r xml "List::insert\ contents"
==75== 
==75== 
==75== HEAP SUMMARY:
==75==     in use at exit: 0 bytes in 0 blocks
==75==   total heap usage: 2,128 allocs, 2,128 frees, 252,304 bytes allocated
==75== 
==75== All heap blocks were freed -- no leaks are possible
==75== 
==75== For counts of detected and suppressed errors, rerun with: -v
==75== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::triplerotate basic

- **Points**: 5 / 5

```
==77== Memcheck, a memory error detector
==77== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==77== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==77== Command: ./test -r xml "List::triplerotate\ basic"
==77== 
==77== 
==77== HEAP SUMMARY:
==77==     in use at exit: 0 bytes in 0 blocks
==77==   total heap usage: 2,136 allocs, 2,136 frees, 252,592 bytes allocated
==77== 
==77== All heap blocks were freed -- no leaks are possible
==77== 
==77== For counts of detected and suppressed errors, rerun with: -v
==77== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✗ - [0/10] - List::triplerotate simple

- **Points**: 0 / 10


```
Original: "< 2 3 1 5 6 4 >" == s.str()
Expanded: "< 2 3 1 5 6 4 >" == "< 1 2 3 4 5 6 >"
```


### ✓ - [5/5] - List::split simple

- **Points**: 5 / 5

```
==80== Memcheck, a memory error detector
==80== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==80== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==80== Command: ./test -r xml "List::split\ simple"
==80== 
==80== 
==80== HEAP SUMMARY:
==80==     in use at exit: 0 bytes in 0 blocks
==80==   total heap usage: 1,990 allocs, 1,990 frees, 247,872 bytes allocated
==80== 
==80== All heap blocks were freed -- no leaks are possible
==80== 
==80== For counts of detected and suppressed errors, rerun with: -v
==80== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::split images

- **Points**: 5 / 5





### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==83== Memcheck, a memory error detector
==83== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==83== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==83== Command: ./test -r xml "List::_destroy\ empty\ list"
==83== 
==83== 
==83== HEAP SUMMARY:
==83==     in use at exit: 0 bytes in 0 blocks
==83==   total heap usage: 2,140 allocs, 2,140 frees, 253,232 bytes allocated
==83== 
==83== All heap blocks were freed -- no leaks are possible
==83== 
==83== For counts of detected and suppressed errors, rerun with: -v
==83== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::begin() returns an iterator to the front of the list

- **Points**: 1 / 1

```
==85== Memcheck, a memory error detector
==85== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==85== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==85== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==85== 
==85== 
==85== HEAP SUMMARY:
==85==     in use at exit: 0 bytes in 0 blocks
==85==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==85== 
==85== All heap blocks were freed -- no leaks are possible
==85== 
==85== For counts of detected and suppressed errors, rerun with: -v
==85== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 1 / 1

```
==87== Memcheck, a memory error detector
==87== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==87== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==87== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==87== 
==87== 
==87== HEAP SUMMARY:
==87==     in use at exit: 0 bytes in 0 blocks
==87==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==87== 
==87== All heap blocks were freed -- no leaks are possible
==87== 
==87== For counts of detected and suppressed errors, rerun with: -v
==87== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 1 / 1

```
==89== Memcheck, a memory error detector
==89== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==89== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==89== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==89== 
==89== 
==89== HEAP SUMMARY:
==89==     in use at exit: 0 bytes in 0 blocks
==89==   total heap usage: 2,144 allocs, 2,144 frees, 259,968 bytes allocated
==89== 
==89== All heap blocks were freed -- no leaks are possible
==89== 
==89== For counts of detected and suppressed errors, rerun with: -v
==89== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==91== Memcheck, a memory error detector
==91== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==91== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==91== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==91== 
==91== 
==91== HEAP SUMMARY:
==91==     in use at exit: 0 bytes in 0 blocks
==91==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==91== 
==91== All heap blocks were freed -- no leaks are possible
==91== 
==91== For counts of detected and suppressed errors, rerun with: -v
==91== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 1 / 1

```
==93== Memcheck, a memory error detector
==93== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==93== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==93== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==93== 
==93== 
==93== HEAP SUMMARY:
==93==     in use at exit: 0 bytes in 0 blocks
==93==   total heap usage: 2,144 allocs, 2,144 frees, 257,568 bytes allocated
==93== 
==93== All heap blocks were freed -- no leaks are possible
==93== 
==93== For counts of detected and suppressed errors, rerun with: -v
==93== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==95== Memcheck, a memory error detector
==95== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==95== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==95== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==95== 
==95== 
==95== HEAP SUMMARY:
==95==     in use at exit: 0 bytes in 0 blocks
==95==   total heap usage: 2,144 allocs, 2,144 frees, 262,368 bytes allocated
==95== 
==95== All heap blocks were freed -- no leaks are possible
==95== 
==95== For counts of detected and suppressed errors, rerun with: -v
==95== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::end is reached

- **Points**: 1 / 1

```
==97== Memcheck, a memory error detector
==97== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==97== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==97== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==97== 
==97== 
==97== HEAP SUMMARY:
==97==     in use at exit: 0 bytes in 0 blocks
==97==   total heap usage: 2,137 allocs, 2,137 frees, 255,000 bytes allocated
==97== 
==97== All heap blocks were freed -- no leaks are possible
==97== 
==97== For counts of detected and suppressed errors, rerun with: -v
==97== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 1 / 1

```
==99== Memcheck, a memory error detector
==99== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==99== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==99== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==99== 
==99== 
==99== HEAP SUMMARY:
==99==     in use at exit: 0 bytes in 0 blocks
==99==   total heap usage: 2,137 allocs, 2,137 frees, 257,400 bytes allocated
==99== 
==99== All heap blocks were freed -- no leaks are possible
==99== 
==99== For counts of detected and suppressed errors, rerun with: -v
==99== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==101== Memcheck, a memory error detector
==101== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==101== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==101== Command: ./test -r xml "List::insert\ contents\ #2"
==101== 
==101== 
==101== HEAP SUMMARY:
==101==     in use at exit: 0 bytes in 0 blocks
==101==   total heap usage: 2,143 allocs, 2,143 frees, 252,800 bytes allocated
==101== 
==101== All heap blocks were freed -- no leaks are possible
==101== 
==101== For counts of detected and suppressed errors, rerun with: -v
==101== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✗ - [0/5] - List::split edge cases

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


---