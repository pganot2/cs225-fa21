---

This report was generated for **pganot2** using **e6d96dd379b6a8be1d50687965953814c6002a90** (latest commit as of **October 4th 2021, 11:59 pm**)

---




## Score: 115/126 (91.27%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/test_part2_extra.cpp -o .objs/tests/test_part2_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part1.o .objs/tests/tests_part2.o .objs/tests/test_part2_extra.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==91== Memcheck, a memory error detector
==91== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==91== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==91== Command: ./test -r xml "List::insertFront\ size"
==91== 
==91== 
==91== HEAP SUMMARY:
==91==     in use at exit: 0 bytes in 0 blocks
==91==   total heap usage: 2,462 allocs, 2,462 frees, 285,632 bytes allocated
==91== 
==91== All heap blocks were freed -- no leaks are possible
==91== 
==91== For counts of detected and suppressed errors, rerun with: -v
==91== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::insertBack size

- **Points**: 2 / 2

```
==93== Memcheck, a memory error detector
==93== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==93== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==93== Command: ./test -r xml "List::insertBack\ size"
==93== 
==93== 
==93== HEAP SUMMARY:
==93==     in use at exit: 0 bytes in 0 blocks
==93==   total heap usage: 2,462 allocs, 2,462 frees, 285,632 bytes allocated
==93== 
==93== All heap blocks were freed -- no leaks are possible
==93== 
==93== For counts of detected and suppressed errors, rerun with: -v
==93== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [4/4] - List::insert contents

- **Points**: 4 / 4

```
==95== Memcheck, a memory error detector
==95== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==95== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==95== Command: ./test -r xml "List::insert\ contents"
==95== 
==95== 
==95== HEAP SUMMARY:
==95==     in use at exit: 0 bytes in 0 blocks
==95==   total heap usage: 2,458 allocs, 2,458 frees, 285,536 bytes allocated
==95== 
==95== All heap blocks were freed -- no leaks are possible
==95== 
==95== For counts of detected and suppressed errors, rerun with: -v
==95== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::triplerotate basic

- **Points**: 5 / 5

```
==97== Memcheck, a memory error detector
==97== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==97== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==97== Command: ./test -r xml "List::triplerotate\ basic"
==97== 
==97== 
==97== HEAP SUMMARY:
==97==     in use at exit: 0 bytes in 0 blocks
==97==   total heap usage: 2,466 allocs, 2,466 frees, 285,824 bytes allocated
==97== 
==97== All heap blocks were freed -- no leaks are possible
==97== 
==97== For counts of detected and suppressed errors, rerun with: -v
==97== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [10/10] - List::triplerotate simple

- **Points**: 10 / 10

```
==99== Memcheck, a memory error detector
==99== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==99== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==99== Command: ./test -r xml "List::triplerotate\ simple"
==99== 
==99== 
==99== HEAP SUMMARY:
==99==     in use at exit: 0 bytes in 0 blocks
==99==   total heap usage: 2,470 allocs, 2,470 frees, 285,920 bytes allocated
==99== 
==99== All heap blocks were freed -- no leaks are possible
==99== 
==99== For counts of detected and suppressed errors, rerun with: -v
==99== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::split simple

- **Points**: 5 / 5

```
==101== Memcheck, a memory error detector
==101== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==101== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==101== Command: ./test -r xml "List::split\ simple"
==101== 
==101== 
==101== HEAP SUMMARY:
==101==     in use at exit: 0 bytes in 0 blocks
==101==   total heap usage: 2,320 allocs, 2,320 frees, 281,104 bytes allocated
==101== 
==101== All heap blocks were freed -- no leaks are possible
==101== 
==101== For counts of detected and suppressed errors, rerun with: -v
==101== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::split images

- **Points**: 5 / 5





### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==104== Memcheck, a memory error detector
==104== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==104== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==104== Command: ./test -r xml "List::_destroy\ empty\ list"
==104== 
==104== 
==104== HEAP SUMMARY:
==104==     in use at exit: 0 bytes in 0 blocks
==104==   total heap usage: 2,470 allocs, 2,470 frees, 286,464 bytes allocated
==104== 
==104== All heap blocks were freed -- no leaks are possible
==104== 
==104== For counts of detected and suppressed errors, rerun with: -v
==104== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::begin() returns an iterator to the front of the list

- **Points**: 1 / 1

```
==106== Memcheck, a memory error detector
==106== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==106== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==106== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==106== 
==106== 
==106== HEAP SUMMARY:
==106==     in use at exit: 0 bytes in 0 blocks
==106==   total heap usage: 2,474 allocs, 2,474 frees, 290,800 bytes allocated
==106== 
==106== All heap blocks were freed -- no leaks are possible
==106== 
==106== For counts of detected and suppressed errors, rerun with: -v
==106== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 1 / 1

```
==108== Memcheck, a memory error detector
==108== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==108== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==108== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==108== 
==108== 
==108== HEAP SUMMARY:
==108==     in use at exit: 0 bytes in 0 blocks
==108==   total heap usage: 2,474 allocs, 2,474 frees, 293,200 bytes allocated
==108== 
==108== All heap blocks were freed -- no leaks are possible
==108== 
==108== For counts of detected and suppressed errors, rerun with: -v
==108== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 1 / 1

```
==110== Memcheck, a memory error detector
==110== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==110== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==110== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==110== 
==110== 
==110== HEAP SUMMARY:
==110==     in use at exit: 0 bytes in 0 blocks
==110==   total heap usage: 2,474 allocs, 2,474 frees, 293,200 bytes allocated
==110== 
==110== All heap blocks were freed -- no leaks are possible
==110== 
==110== For counts of detected and suppressed errors, rerun with: -v
==110== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==112== Memcheck, a memory error detector
==112== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==112== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==112== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==112== 
==112== 
==112== HEAP SUMMARY:
==112==     in use at exit: 0 bytes in 0 blocks
==112==   total heap usage: 2,474 allocs, 2,474 frees, 295,600 bytes allocated
==112== 
==112== All heap blocks were freed -- no leaks are possible
==112== 
==112== For counts of detected and suppressed errors, rerun with: -v
==112== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 1 / 1

```
==114== Memcheck, a memory error detector
==114== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==114== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==114== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==114== 
==114== 
==114== HEAP SUMMARY:
==114==     in use at exit: 0 bytes in 0 blocks
==114==   total heap usage: 2,474 allocs, 2,474 frees, 290,800 bytes allocated
==114== 
==114== All heap blocks were freed -- no leaks are possible
==114== 
==114== For counts of detected and suppressed errors, rerun with: -v
==114== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==116== Memcheck, a memory error detector
==116== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==116== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==116== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==116== 
==116== 
==116== HEAP SUMMARY:
==116==     in use at exit: 0 bytes in 0 blocks
==116==   total heap usage: 2,474 allocs, 2,474 frees, 295,600 bytes allocated
==116== 
==116== All heap blocks were freed -- no leaks are possible
==116== 
==116== For counts of detected and suppressed errors, rerun with: -v
==116== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::end is reached

- **Points**: 1 / 1

```
==118== Memcheck, a memory error detector
==118== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==118== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==118== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==118== 
==118== 
==118== HEAP SUMMARY:
==118==     in use at exit: 0 bytes in 0 blocks
==118==   total heap usage: 2,467 allocs, 2,467 frees, 288,232 bytes allocated
==118== 
==118== All heap blocks were freed -- no leaks are possible
==118== 
==118== For counts of detected and suppressed errors, rerun with: -v
==118== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 1 / 1

```
==120== Memcheck, a memory error detector
==120== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==120== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==120== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==120== 
==120== 
==120== HEAP SUMMARY:
==120==     in use at exit: 0 bytes in 0 blocks
==120==   total heap usage: 2,467 allocs, 2,467 frees, 290,632 bytes allocated
==120== 
==120== All heap blocks were freed -- no leaks are possible
==120== 
==120== For counts of detected and suppressed errors, rerun with: -v
==120== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::reverse

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::reverseNth #2

- **Points**: 5 / 5





### ✓ - [10/10] - List::merge

- **Points**: 10 / 10

```
==125== Memcheck, a memory error detector
==125== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==125== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==125== Command: ./test -r xml "List::merge"
==125== 
==125== 
==125== HEAP SUMMARY:
==125==     in use at exit: 16 bytes in 1 blocks
==125==   total heap usage: 243,424 allocs, 243,423 frees, 79,522,321 bytes allocated
==125== 
==125== LEAK SUMMARY:
==125==    definitely lost: 0 bytes in 0 blocks
==125==    indirectly lost: 0 bytes in 0 blocks
==125==      possibly lost: 0 bytes in 0 blocks
==125==    still reachable: 16 bytes in 1 blocks
==125==         suppressed: 0 bytes in 0 blocks
==125== Reachable blocks (those to which a pointer was found) are not shown.
==125== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==125== 
==125== For counts of detected and suppressed errors, rerun with: -v
==125== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::sort simple #1

- **Points**: 2 / 2

```
==127== Memcheck, a memory error detector
==127== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==127== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==127== Command: ./test -r xml "List::sort\ simple\ #1"
==127== 
==127== 
==127== HEAP SUMMARY:
==127==     in use at exit: 0 bytes in 0 blocks
==127==   total heap usage: 2,317 allocs, 2,317 frees, 281,032 bytes allocated
==127== 
==127== All heap blocks were freed -- no leaks are possible
==127== 
==127== For counts of detected and suppressed errors, rerun with: -v
==127== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::sort simple #2

- **Points**: 2 / 2

```
==129== Memcheck, a memory error detector
==129== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==129== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==129== Command: ./test -r xml "List::sort\ simple\ #2"
==129== 
==129== 
==129== HEAP SUMMARY:
==129==     in use at exit: 0 bytes in 0 blocks
==129==   total heap usage: 2,317 allocs, 2,317 frees, 281,080 bytes allocated
==129== 
==129== All heap blocks were freed -- no leaks are possible
==129== 
==129== For counts of detected and suppressed errors, rerun with: -v
==129== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::sort #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::sort #2

- **Points**: 5 / 5





### ✓ - [4/4] - List::reverse simple

- **Points**: 4 / 4

```
==133== Memcheck, a memory error detector
==133== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==133== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==133== Command: ./test -r xml "List::reverse\ simple"
==133== 
==133== 
==133== HEAP SUMMARY:
==133==     in use at exit: 0 bytes in 0 blocks
==133==   total heap usage: 2,323 allocs, 2,323 frees, 281,212 bytes allocated
==133== 
==133== All heap blocks were freed -- no leaks are possible
==133== 
==133== For counts of detected and suppressed errors, rerun with: -v
==133== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::reverse edge cases

- **Points**: 2 / 2

```
==135== Memcheck, a memory error detector
==135== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==135== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==135== Command: ./test -r xml "List::reverse\ edge\ cases"
==135== 
==135== 
==135== HEAP SUMMARY:
==135==     in use at exit: 0 bytes in 0 blocks
==135==   total heap usage: 2,468 allocs, 2,468 frees, 285,912 bytes allocated
==135== 
==135== All heap blocks were freed -- no leaks are possible
==135== 
==135== For counts of detected and suppressed errors, rerun with: -v
==135== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::reverseNth #3

- **Points**: 5 / 5

```
==137== Memcheck, a memory error detector
==137== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==137== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==137== Command: ./test -r xml "List::reverseNth\ #3"
==137== 
==137== 
==137== HEAP SUMMARY:
==137==     in use at exit: 0 bytes in 0 blocks
==137==   total heap usage: 2,329 allocs, 2,329 frees, 281,392 bytes allocated
==137== 
==137== All heap blocks were freed -- no leaks are possible
==137== 
==137== For counts of detected and suppressed errors, rerun with: -v
==137== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::merge #2

- **Points**: 5 / 5

```
==139== Memcheck, a memory error detector
==139== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==139== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==139== Command: ./test -r xml "List::merge\ #2"
==139== 
==139== 
==139== HEAP SUMMARY:
==139==     in use at exit: 16 bytes in 1 blocks
==139==   total heap usage: 2,359 allocs, 2,358 frees, 283,184 bytes allocated
==139== 
==139== LEAK SUMMARY:
==139==    definitely lost: 0 bytes in 0 blocks
==139==    indirectly lost: 0 bytes in 0 blocks
==139==      possibly lost: 0 bytes in 0 blocks
==139==    still reachable: 16 bytes in 1 blocks
==139==         suppressed: 0 bytes in 0 blocks
==139== Reachable blocks (those to which a pointer was found) are not shown.
==139== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==139== 
==139== For counts of detected and suppressed errors, rerun with: -v
==139== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::sort simple #3

- **Points**: 2 / 2

```
==141== Memcheck, a memory error detector
==141== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==141== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==141== Command: ./test -r xml "List::sort\ simple\ #3"
==141== 
==141== 
==141== HEAP SUMMARY:
==141==     in use at exit: 0 bytes in 0 blocks
==141==   total heap usage: 2,320 allocs, 2,320 frees, 281,144 bytes allocated
==141== 
==141== All heap blocks were freed -- no leaks are possible
==141== 
==141== For counts of detected and suppressed errors, rerun with: -v
==141== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List Complex

- **Points**: 2 / 2

```
==143== Memcheck, a memory error detector
==143== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==143== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==143== Command: ./test -r xml "List\ Complex"
==143== 
==143== 
==143== HEAP SUMMARY:
==143==     in use at exit: 0 bytes in 0 blocks
==143==   total heap usage: 2,325 allocs, 2,325 frees, 281,264 bytes allocated
==143== 
==143== All heap blocks were freed -- no leaks are possible
==143== 
==143== For counts of detected and suppressed errors, rerun with: -v
==143== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==145== Memcheck, a memory error detector
==145== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==145== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==145== Command: ./test -r xml "List::insert\ contents\ #2"
==145== 
==145== 
==145== HEAP SUMMARY:
==145==     in use at exit: 0 bytes in 0 blocks
==145==   total heap usage: 2,473 allocs, 2,473 frees, 286,032 bytes allocated
==145== 
==145== All heap blocks were freed -- no leaks are possible
==145== 
==145== For counts of detected and suppressed errors, rerun with: -v
==145== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::split edge cases

- **Points**: 5 / 5

```
==147== Memcheck, a memory error detector
==147== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==147== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==147== Command: ./test -r xml "List::split\ edge\ cases"
==147== 
==147== 
==147== HEAP SUMMARY:
==147==     in use at exit: 0 bytes in 0 blocks
==147==   total heap usage: 2,463 allocs, 2,463 frees, 285,696 bytes allocated
==147== 
==147== All heap blocks were freed -- no leaks are possible
==147== 
==147== For counts of detected and suppressed errors, rerun with: -v
==147== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::triplerotate edge

- **Points**: 2 / 2

```
==149== Memcheck, a memory error detector
==149== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==149== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==149== Command: ./test -r xml "List::triplerotate\ edge"
==149== 
==149== 
==149== HEAP SUMMARY:
==149==     in use at exit: 0 bytes in 0 blocks
==149==   total heap usage: 2,470 allocs, 2,470 frees, 285,960 bytes allocated
==149== 
==149== All heap blocks were freed -- no leaks are possible
==149== 
==149== For counts of detected and suppressed errors, rerun with: -v
==149== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::triplerotate hard

- **Points**: 2 / 2

```
==151== Memcheck, a memory error detector
==151== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==151== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==151== Command: ./test -r xml "List::triplerotate\ hard"
==151== 
==151== 
==151== HEAP SUMMARY:
==151==     in use at exit: 0 bytes in 0 blocks
==151==   total heap usage: 2,475 allocs, 2,475 frees, 286,080 bytes allocated
==151== 
==151== All heap blocks were freed -- no leaks are possible
==151== 
==151== For counts of detected and suppressed errors, rerun with: -v
==151== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✗ - [0/10] - List::triplerotate image

- **Points**: 0 / 10

```
[Process timed out]
```
```
Unable to Grade (ETIMEDOUT): Your code did not finish within 10000ms.
```


### ✗ - [0/1] - List::ListIterator::operator-- from end

- **Points**: 0 / 1


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


---