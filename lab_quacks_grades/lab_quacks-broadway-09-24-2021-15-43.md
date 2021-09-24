


## Score: 14/14 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c exercises.cpp -o .objs/exercises.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/basic.cpp -o .objs/tests/basic.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/exercises.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/basic.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lc++abi -o test

```


### ✓ - [1/1] - sumDigits

- **Points**: 1 / 1

```
==58== Memcheck, a memory error detector
==58== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==58== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==58== Command: ./test -r xml "sumDigits"
==58== 
==58== 
==58== HEAP SUMMARY:
==58==     in use at exit: 16 bytes in 1 blocks
==58==   total heap usage: 1,690 allocs, 1,689 frees, 218,360 bytes allocated
==58== 
==58== LEAK SUMMARY:
==58==    definitely lost: 0 bytes in 0 blocks
==58==    indirectly lost: 0 bytes in 0 blocks
==58==      possibly lost: 0 bytes in 0 blocks
==58==    still reachable: 16 bytes in 1 blocks
==58==         suppressed: 0 bytes in 0 blocks
==58== Reachable blocks (those to which a pointer was found) are not shown.
==58== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==58== 
==58== For counts of detected and suppressed errors, rerun with: -v
==58== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [1/1] - triangle

- **Points**: 1 / 1

```
==60== Memcheck, a memory error detector
==60== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==60== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==60== Command: ./test -r xml "triangle"
==60== 
==60== 
==60== HEAP SUMMARY:
==60==     in use at exit: 16 bytes in 1 blocks
==60==   total heap usage: 1,676 allocs, 1,675 frees, 217,912 bytes allocated
==60== 
==60== LEAK SUMMARY:
==60==    definitely lost: 0 bytes in 0 blocks
==60==    indirectly lost: 0 bytes in 0 blocks
==60==      possibly lost: 0 bytes in 0 blocks
==60==    still reachable: 16 bytes in 1 blocks
==60==         suppressed: 0 bytes in 0 blocks
==60== Reachable blocks (those to which a pointer was found) are not shown.
==60== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==60== 
==60== For counts of detected and suppressed errors, rerun with: -v
==60== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [3/3] - sum

- **Points**: 3 / 3

```
==62== Memcheck, a memory error detector
==62== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==62== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==62== Command: ./test -r xml "sum"
==62== 
==62== 
==62== HEAP SUMMARY:
==62==     in use at exit: 16 bytes in 1 blocks
==62==   total heap usage: 1,773 allocs, 1,772 frees, 304,056 bytes allocated
==62== 
==62== LEAK SUMMARY:
==62==    definitely lost: 0 bytes in 0 blocks
==62==    indirectly lost: 0 bytes in 0 blocks
==62==      possibly lost: 0 bytes in 0 blocks
==62==    still reachable: 16 bytes in 1 blocks
==62==         suppressed: 0 bytes in 0 blocks
==62== Reachable blocks (those to which a pointer was found) are not shown.
==62== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==62== 
==62== For counts of detected and suppressed errors, rerun with: -v
==62== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [3/3] - isBalanced

- **Points**: 3 / 3

```
==64== Memcheck, a memory error detector
==64== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==64== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==64== Command: ./test -r xml "isBalanced"
==64== 
==64== 
==64== HEAP SUMMARY:
==64==     in use at exit: 16 bytes in 1 blocks
==64==   total heap usage: 1,753 allocs, 1,752 frees, 314,808 bytes allocated
==64== 
==64== LEAK SUMMARY:
==64==    definitely lost: 0 bytes in 0 blocks
==64==    indirectly lost: 0 bytes in 0 blocks
==64==      possibly lost: 0 bytes in 0 blocks
==64==    still reachable: 16 bytes in 1 blocks
==64==         suppressed: 0 bytes in 0 blocks
==64== Reachable blocks (those to which a pointer was found) are not shown.
==64== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==64== 
==64== For counts of detected and suppressed errors, rerun with: -v
==64== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [3/3] - scramble 17

- **Points**: 3 / 3

```
==66== Memcheck, a memory error detector
==66== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==66== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==66== Command: ./test -r xml "scramble\ 17"
==66== 
==66== 
==66== HEAP SUMMARY:
==66==     in use at exit: 16 bytes in 1 blocks
==66==   total heap usage: 1,688 allocs, 1,687 frees, 230,832 bytes allocated
==66== 
==66== LEAK SUMMARY:
==66==    definitely lost: 0 bytes in 0 blocks
==66==    indirectly lost: 0 bytes in 0 blocks
==66==      possibly lost: 0 bytes in 0 blocks
==66==    still reachable: 16 bytes in 1 blocks
==66==         suppressed: 0 bytes in 0 blocks
==66== Reachable blocks (those to which a pointer was found) are not shown.
==66== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==66== 
==66== For counts of detected and suppressed errors, rerun with: -v
==66== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [3/3] - scramble 9

- **Points**: 3 / 3

```
==68== Memcheck, a memory error detector
==68== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==68== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==68== Command: ./test -r xml "scramble\ 9"
==68== 
==68== 
==68== HEAP SUMMARY:
==68==     in use at exit: 16 bytes in 1 blocks
==68==   total heap usage: 1,683 allocs, 1,682 frees, 230,160 bytes allocated
==68== 
==68== LEAK SUMMARY:
==68==    definitely lost: 0 bytes in 0 blocks
==68==    indirectly lost: 0 bytes in 0 blocks
==68==      possibly lost: 0 bytes in 0 blocks
==68==    still reachable: 16 bytes in 1 blocks
==68==         suppressed: 0 bytes in 0 blocks
==68== Reachable blocks (those to which a pointer was found) are not shown.
==68== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==68== 
==68== For counts of detected and suppressed errors, rerun with: -v
==68== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



---

This report was generated for **pganot2** using **32e4e835ee3c60cab4f9c4efbd7d9db0188b2dab** (latest commit as of **September 24th 2021, 3:44 pm**)
