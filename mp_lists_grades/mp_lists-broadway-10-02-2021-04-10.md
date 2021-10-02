


## Score: 109/109 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/test_part2_extra.cpp -o .objs/tests/test_part2_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/test_part2_extra.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

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
==89== Memcheck, a memory error detector
==89== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==89== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==89== Command: ./test -r xml "List::merge"
==89== 
==89== 
==89== HEAP SUMMARY:
==89==     in use at exit: 16 bytes in 1 blocks
==89==   total heap usage: 243,309 allocs, 243,308 frees, 79,504,961 bytes allocated
==89== 
==89== LEAK SUMMARY:
==89==    definitely lost: 0 bytes in 0 blocks
==89==    indirectly lost: 0 bytes in 0 blocks
==89==      possibly lost: 0 bytes in 0 blocks
==89==    still reachable: 16 bytes in 1 blocks
==89==         suppressed: 0 bytes in 0 blocks
==89== Reachable blocks (those to which a pointer was found) are not shown.
==89== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==89== 
==89== For counts of detected and suppressed errors, rerun with: -v
==89== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::sort simple #1

- **Points**: 2 / 2

```
==91== Memcheck, a memory error detector
==91== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==91== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==91== Command: ./test -r xml "List::sort\ simple\ #1"
==91== 
==91== 
==91== HEAP SUMMARY:
==91==     in use at exit: 0 bytes in 0 blocks
==91==   total heap usage: 2,202 allocs, 2,202 frees, 263,672 bytes allocated
==91== 
==91== All heap blocks were freed -- no leaks are possible
==91== 
==91== For counts of detected and suppressed errors, rerun with: -v
==91== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::sort simple #2

- **Points**: 2 / 2

```
==93== Memcheck, a memory error detector
==93== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==93== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==93== Command: ./test -r xml "List::sort\ simple\ #2"
==93== 
==93== 
==93== HEAP SUMMARY:
==93==     in use at exit: 0 bytes in 0 blocks
==93==   total heap usage: 2,202 allocs, 2,202 frees, 263,720 bytes allocated
==93== 
==93== All heap blocks were freed -- no leaks are possible
==93== 
==93== For counts of detected and suppressed errors, rerun with: -v
==93== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::sort #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::sort #2

- **Points**: 5 / 5





### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==97== Memcheck, a memory error detector
==97== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==97== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==97== Command: ./test -r xml "List::insertFront\ size"
==97== 
==97== 
==97== HEAP SUMMARY:
==97==     in use at exit: 0 bytes in 0 blocks
==97==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==97== 
==97== All heap blocks were freed -- no leaks are possible
==97== 
==97== For counts of detected and suppressed errors, rerun with: -v
==97== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::insertBack size

- **Points**: 2 / 2

```
==99== Memcheck, a memory error detector
==99== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==99== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==99== Command: ./test -r xml "List::insertBack\ size"
==99== 
==99== 
==99== HEAP SUMMARY:
==99==     in use at exit: 0 bytes in 0 blocks
==99==   total heap usage: 2,347 allocs, 2,347 frees, 268,272 bytes allocated
==99== 
==99== All heap blocks were freed -- no leaks are possible
==99== 
==99== For counts of detected and suppressed errors, rerun with: -v
==99== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [4/4] - List::insert contents

- **Points**: 4 / 4

```
==101== Memcheck, a memory error detector
==101== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==101== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==101== Command: ./test -r xml "List::insert\ contents"
==101== 
==101== 
==101== HEAP SUMMARY:
==101==     in use at exit: 0 bytes in 0 blocks
==101==   total heap usage: 2,343 allocs, 2,343 frees, 268,176 bytes allocated
==101== 
==101== All heap blocks were freed -- no leaks are possible
==101== 
==101== For counts of detected and suppressed errors, rerun with: -v
==101== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::triplerotate basic

- **Points**: 5 / 5

```
==103== Memcheck, a memory error detector
==103== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==103== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==103== Command: ./test -r xml "List::triplerotate\ basic"
==103== 
==103== 
==103== HEAP SUMMARY:
==103==     in use at exit: 0 bytes in 0 blocks
==103==   total heap usage: 2,351 allocs, 2,351 frees, 268,464 bytes allocated
==103== 
==103== All heap blocks were freed -- no leaks are possible
==103== 
==103== For counts of detected and suppressed errors, rerun with: -v
==103== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [10/10] - List::triplerotate simple

- **Points**: 10 / 10

```
==105== Memcheck, a memory error detector
==105== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==105== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==105== Command: ./test -r xml "List::triplerotate\ simple"
==105== 
==105== 
==105== HEAP SUMMARY:
==105==     in use at exit: 0 bytes in 0 blocks
==105==   total heap usage: 2,355 allocs, 2,355 frees, 268,560 bytes allocated
==105== 
==105== All heap blocks were freed -- no leaks are possible
==105== 
==105== For counts of detected and suppressed errors, rerun with: -v
==105== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::split simple

- **Points**: 5 / 5

```
==107== Memcheck, a memory error detector
==107== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==107== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==107== Command: ./test -r xml "List::split\ simple"
==107== 
==107== 
==107== HEAP SUMMARY:
==107==     in use at exit: 0 bytes in 0 blocks
==107==   total heap usage: 2,205 allocs, 2,205 frees, 263,744 bytes allocated
==107== 
==107== All heap blocks were freed -- no leaks are possible
==107== 
==107== For counts of detected and suppressed errors, rerun with: -v
==107== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::split images

- **Points**: 5 / 5





### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==110== Memcheck, a memory error detector
==110== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==110== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==110== Command: ./test -r xml "List::_destroy\ empty\ list"
==110== 
==110== 
==110== HEAP SUMMARY:
==110==     in use at exit: 0 bytes in 0 blocks
==110==   total heap usage: 2,355 allocs, 2,355 frees, 269,104 bytes allocated
==110== 
==110== All heap blocks were freed -- no leaks are possible
==110== 
==110== For counts of detected and suppressed errors, rerun with: -v
==110== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::begin() returns an iterator to the front of the list

- **Points**: 1 / 1

```
==112== Memcheck, a memory error detector
==112== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==112== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==112== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==112== 
==112== 
==112== HEAP SUMMARY:
==112==     in use at exit: 0 bytes in 0 blocks
==112==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==112== 
==112== All heap blocks were freed -- no leaks are possible
==112== 
==112== For counts of detected and suppressed errors, rerun with: -v
==112== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 1 / 1

```
==114== Memcheck, a memory error detector
==114== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==114== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==114== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==114== 
==114== 
==114== HEAP SUMMARY:
==114==     in use at exit: 0 bytes in 0 blocks
==114==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==114== 
==114== All heap blocks were freed -- no leaks are possible
==114== 
==114== For counts of detected and suppressed errors, rerun with: -v
==114== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 1 / 1

```
==116== Memcheck, a memory error detector
==116== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==116== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==116== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==116== 
==116== 
==116== HEAP SUMMARY:
==116==     in use at exit: 0 bytes in 0 blocks
==116==   total heap usage: 2,359 allocs, 2,359 frees, 275,840 bytes allocated
==116== 
==116== All heap blocks were freed -- no leaks are possible
==116== 
==116== For counts of detected and suppressed errors, rerun with: -v
==116== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==118== Memcheck, a memory error detector
==118== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==118== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==118== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==118== 
==118== 
==118== HEAP SUMMARY:
==118==     in use at exit: 0 bytes in 0 blocks
==118==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==118== 
==118== All heap blocks were freed -- no leaks are possible
==118== 
==118== For counts of detected and suppressed errors, rerun with: -v
==118== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 1 / 1

```
==120== Memcheck, a memory error detector
==120== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==120== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==120== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==120== 
==120== 
==120== HEAP SUMMARY:
==120==     in use at exit: 0 bytes in 0 blocks
==120==   total heap usage: 2,359 allocs, 2,359 frees, 273,440 bytes allocated
==120== 
==120== All heap blocks were freed -- no leaks are possible
==120== 
==120== For counts of detected and suppressed errors, rerun with: -v
==120== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==122== Memcheck, a memory error detector
==122== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==122== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==122== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==122== 
==122== 
==122== HEAP SUMMARY:
==122==     in use at exit: 0 bytes in 0 blocks
==122==   total heap usage: 2,359 allocs, 2,359 frees, 278,240 bytes allocated
==122== 
==122== All heap blocks were freed -- no leaks are possible
==122== 
==122== For counts of detected and suppressed errors, rerun with: -v
==122== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::end is reached

- **Points**: 1 / 1

```
==124== Memcheck, a memory error detector
==124== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==124== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==124== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==124== 
==124== 
==124== HEAP SUMMARY:
==124==     in use at exit: 0 bytes in 0 blocks
==124==   total heap usage: 2,352 allocs, 2,352 frees, 270,872 bytes allocated
==124== 
==124== All heap blocks were freed -- no leaks are possible
==124== 
==124== For counts of detected and suppressed errors, rerun with: -v
==124== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 1 / 1

```
==126== Memcheck, a memory error detector
==126== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==126== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==126== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==126== 
==126== 
==126== HEAP SUMMARY:
==126==     in use at exit: 0 bytes in 0 blocks
==126==   total heap usage: 2,352 allocs, 2,352 frees, 273,272 bytes allocated
==126== 
==126== All heap blocks were freed -- no leaks are possible
==126== 
==126== For counts of detected and suppressed errors, rerun with: -v
==126== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [4/4] - List::reverse simple

- **Points**: 4 / 4

```
==128== Memcheck, a memory error detector
==128== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==128== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==128== Command: ./test -r xml "List::reverse\ simple"
==128== 
==128== 
==128== HEAP SUMMARY:
==128==     in use at exit: 0 bytes in 0 blocks
==128==   total heap usage: 2,208 allocs, 2,208 frees, 263,852 bytes allocated
==128== 
==128== All heap blocks were freed -- no leaks are possible
==128== 
==128== For counts of detected and suppressed errors, rerun with: -v
==128== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::reverse edge cases

- **Points**: 2 / 2

```
==130== Memcheck, a memory error detector
==130== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==130== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==130== Command: ./test -r xml "List::reverse\ edge\ cases"
==130== 
==130== 
==130== HEAP SUMMARY:
==130==     in use at exit: 0 bytes in 0 blocks
==130==   total heap usage: 2,353 allocs, 2,353 frees, 268,552 bytes allocated
==130== 
==130== All heap blocks were freed -- no leaks are possible
==130== 
==130== For counts of detected and suppressed errors, rerun with: -v
==130== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::reverseNth #3

- **Points**: 5 / 5

```
==132== Memcheck, a memory error detector
==132== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==132== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==132== Command: ./test -r xml "List::reverseNth\ #3"
==132== 
==132== 
==132== HEAP SUMMARY:
==132==     in use at exit: 0 bytes in 0 blocks
==132==   total heap usage: 2,214 allocs, 2,214 frees, 264,032 bytes allocated
==132== 
==132== All heap blocks were freed -- no leaks are possible
==132== 
==132== For counts of detected and suppressed errors, rerun with: -v
==132== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::merge #2

- **Points**: 5 / 5

```
==134== Memcheck, a memory error detector
==134== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==134== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==134== Command: ./test -r xml "List::merge\ #2"
==134== 
==134== 
==134== HEAP SUMMARY:
==134==     in use at exit: 16 bytes in 1 blocks
==134==   total heap usage: 2,244 allocs, 2,243 frees, 265,824 bytes allocated
==134== 
==134== LEAK SUMMARY:
==134==    definitely lost: 0 bytes in 0 blocks
==134==    indirectly lost: 0 bytes in 0 blocks
==134==      possibly lost: 0 bytes in 0 blocks
==134==    still reachable: 16 bytes in 1 blocks
==134==         suppressed: 0 bytes in 0 blocks
==134== Reachable blocks (those to which a pointer was found) are not shown.
==134== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==134== 
==134== For counts of detected and suppressed errors, rerun with: -v
==134== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [2/2] - List::sort simple #3

- **Points**: 2 / 2

```
==136== Memcheck, a memory error detector
==136== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==136== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==136== Command: ./test -r xml "List::sort\ simple\ #3"
==136== 
==136== 
==136== HEAP SUMMARY:
==136==     in use at exit: 0 bytes in 0 blocks
==136==   total heap usage: 2,205 allocs, 2,205 frees, 263,784 bytes allocated
==136== 
==136== All heap blocks were freed -- no leaks are possible
==136== 
==136== For counts of detected and suppressed errors, rerun with: -v
==136== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==138== Memcheck, a memory error detector
==138== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==138== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==138== Command: ./test -r xml "List::insert\ contents\ #2"
==138== 
==138== 
==138== HEAP SUMMARY:
==138==     in use at exit: 0 bytes in 0 blocks
==138==   total heap usage: 2,358 allocs, 2,358 frees, 268,672 bytes allocated
==138== 
==138== All heap blocks were freed -- no leaks are possible
==138== 
==138== For counts of detected and suppressed errors, rerun with: -v
==138== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - List::split edge cases

- **Points**: 5 / 5

```
==140== Memcheck, a memory error detector
==140== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==140== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==140== Command: ./test -r xml "List::split\ edge\ cases"
==140== 
==140== 
==140== HEAP SUMMARY:
==140==     in use at exit: 0 bytes in 0 blocks
==140==   total heap usage: 2,348 allocs, 2,348 frees, 268,336 bytes allocated
==140== 
==140== All heap blocks were freed -- no leaks are possible
==140== 
==140== For counts of detected and suppressed errors, rerun with: -v
==140== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



---

This report was generated for **pganot2** using **94714058a4815a4a50aba0c60c5ca394c66d4c78** (latest commit as of **October 2nd 2021, 4:09 am**)
