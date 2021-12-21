---

This report was generated for **pganot2** using **0e8cd0a03062c03fbf80a10f1ef0138afced263b** (latest commit as of **December 8th 2021, 11:59 pm**)

---




## Score: 125/126 (99.21%)


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
==92== Memcheck, a memory error detector
==92== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==92== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==92== Command: ./test -r xml "List::insertFront\ size"
==92== 
==92== 
==92== HEAP SUMMARY:
==92==     in use at exit: 0 bytes in 0 blocks
==92==   total heap usage: 2,462 allocs, 2,462 frees, 285,632 bytes allocated
==92== 
==92== All heap blocks were freed -- no leaks are possible
==92== 
==92== For counts of detected and suppressed errors, rerun with: -v
==92== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::insertBack size

- **Points**: 2 / 2

```
==94== Memcheck, a memory error detector
==94== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==94== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==94== Command: ./test -r xml "List::insertBack\ size"
==94== 
==94== 
==94== HEAP SUMMARY:
==94==     in use at exit: 0 bytes in 0 blocks
==94==   total heap usage: 2,462 allocs, 2,462 frees, 285,632 bytes allocated
==94== 
==94== All heap blocks were freed -- no leaks are possible
==94== 
==94== For counts of detected and suppressed errors, rerun with: -v
==94== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [4/4] - List::insert contents

- **Points**: 4 / 4

```
==96== Memcheck, a memory error detector
==96== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==96== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==96== Command: ./test -r xml "List::insert\ contents"
==96== 
==96== 
==96== HEAP SUMMARY:
==96==     in use at exit: 0 bytes in 0 blocks
==96==   total heap usage: 2,458 allocs, 2,458 frees, 285,536 bytes allocated
==96== 
==96== All heap blocks were freed -- no leaks are possible
==96== 
==96== For counts of detected and suppressed errors, rerun with: -v
==96== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::triplerotate basic

- **Points**: 5 / 5

```
==98== Memcheck, a memory error detector
==98== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==98== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==98== Command: ./test -r xml "List::triplerotate\ basic"
==98== 
==98== 
==98== HEAP SUMMARY:
==98==     in use at exit: 0 bytes in 0 blocks
==98==   total heap usage: 2,466 allocs, 2,466 frees, 285,824 bytes allocated
==98== 
==98== All heap blocks were freed -- no leaks are possible
==98== 
==98== For counts of detected and suppressed errors, rerun with: -v
==98== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [10/10] - List::triplerotate simple

- **Points**: 10 / 10

```
==100== Memcheck, a memory error detector
==100== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==100== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==100== Command: ./test -r xml "List::triplerotate\ simple"
==100== 
==100== 
==100== HEAP SUMMARY:
==100==     in use at exit: 0 bytes in 0 blocks
==100==   total heap usage: 2,470 allocs, 2,470 frees, 285,920 bytes allocated
==100== 
==100== All heap blocks were freed -- no leaks are possible
==100== 
==100== For counts of detected and suppressed errors, rerun with: -v
==100== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::split simple

- **Points**: 5 / 5

```
==102== Memcheck, a memory error detector
==102== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==102== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==102== Command: ./test -r xml "List::split\ simple"
==102== 
==102== 
==102== HEAP SUMMARY:
==102==     in use at exit: 0 bytes in 0 blocks
==102==   total heap usage: 2,320 allocs, 2,320 frees, 281,104 bytes allocated
==102== 
==102== All heap blocks were freed -- no leaks are possible
==102== 
==102== For counts of detected and suppressed errors, rerun with: -v
==102== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::split images

- **Points**: 5 / 5





### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==105== Memcheck, a memory error detector
==105== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==105== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==105== Command: ./test -r xml "List::_destroy\ empty\ list"
==105== 
==105== 
==105== HEAP SUMMARY:
==105==     in use at exit: 0 bytes in 0 blocks
==105==   total heap usage: 2,470 allocs, 2,470 frees, 286,464 bytes allocated
==105== 
==105== All heap blocks were freed -- no leaks are possible
==105== 
==105== For counts of detected and suppressed errors, rerun with: -v
==105== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::begin() returns an iterator to the front of the list

- **Points**: 1 / 1

```
==107== Memcheck, a memory error detector
==107== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==107== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==107== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==107== 
==107== 
==107== HEAP SUMMARY:
==107==     in use at exit: 0 bytes in 0 blocks
==107==   total heap usage: 2,474 allocs, 2,474 frees, 290,800 bytes allocated
==107== 
==107== All heap blocks were freed -- no leaks are possible
==107== 
==107== For counts of detected and suppressed errors, rerun with: -v
==107== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 1 / 1

```
==109== Memcheck, a memory error detector
==109== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==109== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==109== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==109== 
==109== 
==109== HEAP SUMMARY:
==109==     in use at exit: 0 bytes in 0 blocks
==109==   total heap usage: 2,474 allocs, 2,474 frees, 293,200 bytes allocated
==109== 
==109== All heap blocks were freed -- no leaks are possible
==109== 
==109== For counts of detected and suppressed errors, rerun with: -v
==109== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 1 / 1

```
==111== Memcheck, a memory error detector
==111== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==111== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==111== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==111== 
==111== 
==111== HEAP SUMMARY:
==111==     in use at exit: 0 bytes in 0 blocks
==111==   total heap usage: 2,474 allocs, 2,474 frees, 293,200 bytes allocated
==111== 
==111== All heap blocks were freed -- no leaks are possible
==111== 
==111== For counts of detected and suppressed errors, rerun with: -v
==111== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==113== Memcheck, a memory error detector
==113== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==113== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==113== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==113== 
==113== 
==113== HEAP SUMMARY:
==113==     in use at exit: 0 bytes in 0 blocks
==113==   total heap usage: 2,474 allocs, 2,474 frees, 295,600 bytes allocated
==113== 
==113== All heap blocks were freed -- no leaks are possible
==113== 
==113== For counts of detected and suppressed errors, rerun with: -v
==113== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 1 / 1

```
==115== Memcheck, a memory error detector
==115== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==115== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==115== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==115== 
==115== 
==115== HEAP SUMMARY:
==115==     in use at exit: 0 bytes in 0 blocks
==115==   total heap usage: 2,474 allocs, 2,474 frees, 290,800 bytes allocated
==115== 
==115== All heap blocks were freed -- no leaks are possible
==115== 
==115== For counts of detected and suppressed errors, rerun with: -v
==115== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==117== Memcheck, a memory error detector
==117== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==117== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==117== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==117== 
==117== 
==117== HEAP SUMMARY:
==117==     in use at exit: 0 bytes in 0 blocks
==117==   total heap usage: 2,474 allocs, 2,474 frees, 295,600 bytes allocated
==117== 
==117== All heap blocks were freed -- no leaks are possible
==117== 
==117== For counts of detected and suppressed errors, rerun with: -v
==117== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::end is reached

- **Points**: 1 / 1

```
==119== Memcheck, a memory error detector
==119== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==119== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==119== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==119== 
==119== 
==119== HEAP SUMMARY:
==119==     in use at exit: 0 bytes in 0 blocks
==119==   total heap usage: 2,467 allocs, 2,467 frees, 288,232 bytes allocated
==119== 
==119== All heap blocks were freed -- no leaks are possible
==119== 
==119== For counts of detected and suppressed errors, rerun with: -v
==119== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 1 / 1

```
==121== Memcheck, a memory error detector
==121== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==121== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==121== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==121== 
==121== 
==121== HEAP SUMMARY:
==121==     in use at exit: 0 bytes in 0 blocks
==121==   total heap usage: 2,467 allocs, 2,467 frees, 290,632 bytes allocated
==121== 
==121== All heap blocks were freed -- no leaks are possible
==121== 
==121== For counts of detected and suppressed errors, rerun with: -v
==121== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==126== Memcheck, a memory error detector
==126== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==126== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==126== Command: ./test -r xml "List::merge"
==126== 
==126== 
==126== HEAP SUMMARY:
==126==     in use at exit: 16 bytes in 1 blocks
==126==   total heap usage: 243,424 allocs, 243,423 frees, 79,522,321 bytes allocated
==126== 
==126== LEAK SUMMARY:
==126==    definitely lost: 0 bytes in 0 blocks
==126==    indirectly lost: 0 bytes in 0 blocks
==126==      possibly lost: 0 bytes in 0 blocks
==126==    still reachable: 16 bytes in 1 blocks
==126==         suppressed: 0 bytes in 0 blocks
==126== Reachable blocks (those to which a pointer was found) are not shown.
==126== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==126== 
==126== For counts of detected and suppressed errors, rerun with: -v
==126== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::sort simple #1

- **Points**: 2 / 2

```
==128== Memcheck, a memory error detector
==128== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==128== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==128== Command: ./test -r xml "List::sort\ simple\ #1"
==128== 
==128== 
==128== HEAP SUMMARY:
==128==     in use at exit: 0 bytes in 0 blocks
==128==   total heap usage: 2,317 allocs, 2,317 frees, 281,032 bytes allocated
==128== 
==128== All heap blocks were freed -- no leaks are possible
==128== 
==128== For counts of detected and suppressed errors, rerun with: -v
==128== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::sort simple #2

- **Points**: 2 / 2

```
==130== Memcheck, a memory error detector
==130== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==130== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==130== Command: ./test -r xml "List::sort\ simple\ #2"
==130== 
==130== 
==130== HEAP SUMMARY:
==130==     in use at exit: 0 bytes in 0 blocks
==130==   total heap usage: 2,317 allocs, 2,317 frees, 281,080 bytes allocated
==130== 
==130== All heap blocks were freed -- no leaks are possible
==130== 
==130== For counts of detected and suppressed errors, rerun with: -v
==130== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::sort #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::sort #2

- **Points**: 5 / 5





### ✓ - [4/4] - List::reverse simple

- **Points**: 4 / 4

```
==134== Memcheck, a memory error detector
==134== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==134== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==134== Command: ./test -r xml "List::reverse\ simple"
==134== 
==134== 
==134== HEAP SUMMARY:
==134==     in use at exit: 0 bytes in 0 blocks
==134==   total heap usage: 2,323 allocs, 2,323 frees, 281,212 bytes allocated
==134== 
==134== All heap blocks were freed -- no leaks are possible
==134== 
==134== For counts of detected and suppressed errors, rerun with: -v
==134== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::reverse edge cases

- **Points**: 2 / 2

```
==136== Memcheck, a memory error detector
==136== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==136== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==136== Command: ./test -r xml "List::reverse\ edge\ cases"
==136== 
==136== 
==136== HEAP SUMMARY:
==136==     in use at exit: 0 bytes in 0 blocks
==136==   total heap usage: 2,468 allocs, 2,468 frees, 285,912 bytes allocated
==136== 
==136== All heap blocks were freed -- no leaks are possible
==136== 
==136== For counts of detected and suppressed errors, rerun with: -v
==136== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::reverseNth #3

- **Points**: 5 / 5

```
==138== Memcheck, a memory error detector
==138== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==138== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==138== Command: ./test -r xml "List::reverseNth\ #3"
==138== 
==138== 
==138== HEAP SUMMARY:
==138==     in use at exit: 0 bytes in 0 blocks
==138==   total heap usage: 2,329 allocs, 2,329 frees, 281,392 bytes allocated
==138== 
==138== All heap blocks were freed -- no leaks are possible
==138== 
==138== For counts of detected and suppressed errors, rerun with: -v
==138== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::merge #2

- **Points**: 5 / 5

```
==140== Memcheck, a memory error detector
==140== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==140== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==140== Command: ./test -r xml "List::merge\ #2"
==140== 
==140== 
==140== HEAP SUMMARY:
==140==     in use at exit: 16 bytes in 1 blocks
==140==   total heap usage: 2,359 allocs, 2,358 frees, 283,184 bytes allocated
==140== 
==140== LEAK SUMMARY:
==140==    definitely lost: 0 bytes in 0 blocks
==140==    indirectly lost: 0 bytes in 0 blocks
==140==      possibly lost: 0 bytes in 0 blocks
==140==    still reachable: 16 bytes in 1 blocks
==140==         suppressed: 0 bytes in 0 blocks
==140== Reachable blocks (those to which a pointer was found) are not shown.
==140== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==140== 
==140== For counts of detected and suppressed errors, rerun with: -v
==140== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::sort simple #3

- **Points**: 2 / 2

```
==142== Memcheck, a memory error detector
==142== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==142== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==142== Command: ./test -r xml "List::sort\ simple\ #3"
==142== 
==142== 
==142== HEAP SUMMARY:
==142==     in use at exit: 0 bytes in 0 blocks
==142==   total heap usage: 2,320 allocs, 2,320 frees, 281,144 bytes allocated
==142== 
==142== All heap blocks were freed -- no leaks are possible
==142== 
==142== For counts of detected and suppressed errors, rerun with: -v
==142== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List Complex

- **Points**: 2 / 2

```
==144== Memcheck, a memory error detector
==144== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==144== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==144== Command: ./test -r xml "List\ Complex"
==144== 
==144== 
==144== HEAP SUMMARY:
==144==     in use at exit: 0 bytes in 0 blocks
==144==   total heap usage: 2,325 allocs, 2,325 frees, 281,264 bytes allocated
==144== 
==144== All heap blocks were freed -- no leaks are possible
==144== 
==144== For counts of detected and suppressed errors, rerun with: -v
==144== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==146== Memcheck, a memory error detector
==146== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==146== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==146== Command: ./test -r xml "List::insert\ contents\ #2"
==146== 
==146== 
==146== HEAP SUMMARY:
==146==     in use at exit: 0 bytes in 0 blocks
==146==   total heap usage: 2,473 allocs, 2,473 frees, 286,032 bytes allocated
==146== 
==146== All heap blocks were freed -- no leaks are possible
==146== 
==146== For counts of detected and suppressed errors, rerun with: -v
==146== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::split edge cases

- **Points**: 5 / 5

```
==148== Memcheck, a memory error detector
==148== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==148== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==148== Command: ./test -r xml "List::split\ edge\ cases"
==148== 
==148== 
==148== HEAP SUMMARY:
==148==     in use at exit: 0 bytes in 0 blocks
==148==   total heap usage: 2,463 allocs, 2,463 frees, 285,696 bytes allocated
==148== 
==148== All heap blocks were freed -- no leaks are possible
==148== 
==148== For counts of detected and suppressed errors, rerun with: -v
==148== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::triplerotate edge

- **Points**: 2 / 2

```
==150== Memcheck, a memory error detector
==150== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==150== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==150== Command: ./test -r xml "List::triplerotate\ edge"
==150== 
==150== 
==150== HEAP SUMMARY:
==150==     in use at exit: 0 bytes in 0 blocks
==150==   total heap usage: 2,470 allocs, 2,470 frees, 285,960 bytes allocated
==150== 
==150== All heap blocks were freed -- no leaks are possible
==150== 
==150== For counts of detected and suppressed errors, rerun with: -v
==150== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::triplerotate hard

- **Points**: 2 / 2

```
==152== Memcheck, a memory error detector
==152== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==152== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==152== Command: ./test -r xml "List::triplerotate\ hard"
==152== 
==152== 
==152== HEAP SUMMARY:
==152==     in use at exit: 0 bytes in 0 blocks
==152==   total heap usage: 2,475 allocs, 2,475 frees, 286,080 bytes allocated
==152== 
==152== All heap blocks were freed -- no leaks are possible
==152== 
==152== For counts of detected and suppressed errors, rerun with: -v
==152== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [10/10] - List::triplerotate image

- **Points**: 10 / 10





### ✗ - [0/1] - List::ListIterator::operator-- from end

- **Points**: 0 / 1


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


---