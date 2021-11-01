---

This report was generated for **pganot2** using **3540ba487b2a5d1064ea830cab0f2228def5f077** (latest commit as of **October 31st 2021, 11:59 pm**)

---




## Score: 150/150 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c hashes.cpp -o .objs/hashes.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c textfile.cpp -o .objs/textfile.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-dh.cpp -o .objs/tests/tests-dh.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-sc.cpp -o .objs/tests/tests-sc.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-lp.cpp -o .objs/tests/tests-lp.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/hashes.o .objs/textfile.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests-dh.o .objs/tests/tests-sc.o .objs/tests/tests-lp.o .objs/cs225/catch/catchmain.o  -std=c++14 -stdlib=libc++ -lc++abi -o test

```


### ✓ - [6/6] - DH::testRemoveEASY

- **Points**: 6 / 6

```
==75== Memcheck, a memory error detector
==75== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==75== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==75== Command: ./test -r xml "DH::testRemoveEASY"
==75== 
==75== 
==75== HEAP SUMMARY:
==75==     in use at exit: 0 bytes in 0 blocks
==75==   total heap usage: 1,856 allocs, 1,856 frees, 240,685 bytes allocated
==75== 
==75== All heap blocks were freed -- no leaks are possible
==75== 
==75== For counts of detected and suppressed errors, rerun with: -v
==75== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [10/10] - DH::testRemoveHard

- **Points**: 10 / 10

```
==77== Memcheck, a memory error detector
==77== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==77== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==77== Command: ./test -r xml "DH::testRemoveHard"
==77== 
==77== 
==77== HEAP SUMMARY:
==77==     in use at exit: 0 bytes in 0 blocks
==77==   total heap usage: 1,878 allocs, 1,878 frees, 241,389 bytes allocated
==77== 
==77== All heap blocks were freed -- no leaks are possible
==77== 
==77== For counts of detected and suppressed errors, rerun with: -v
==77== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [7/7] - DH::testResizeOnce

- **Points**: 7 / 7

```
==79== Memcheck, a memory error detector
==79== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==79== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==79== Command: ./test -r xml "DH::testResizeOnce"
==79== 
==79== 
==79== HEAP SUMMARY:
==79==     in use at exit: 0 bytes in 0 blocks
==79==   total heap usage: 1,974 allocs, 1,974 frees, 245,197 bytes allocated
==79== 
==79== All heap blocks were freed -- no leaks are possible
==79== 
==79== For counts of detected and suppressed errors, rerun with: -v
==79== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [11/11] - DH::testResizeAll

- **Points**: 11 / 11

```
==81== Memcheck, a memory error detector
==81== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==81== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==81== Command: ./test -r xml "DH::testResizeAll"
==81== 
==81== 
==81== HEAP SUMMARY:
==81==     in use at exit: 0 bytes in 0 blocks
==81==   total heap usage: 1,873 allocs, 1,873 frees, 238,685 bytes allocated
==81== 
==81== All heap blocks were freed -- no leaks are possible
==81== 
==81== For counts of detected and suppressed errors, rerun with: -v
==81== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [6/6] - DH::testInsertEasy

- **Points**: 6 / 6

```
==83== Memcheck, a memory error detector
==83== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==83== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==83== Command: ./test -r xml "DH::testInsertEasy"
==83== 
==83== 
==83== HEAP SUMMARY:
==83==     in use at exit: 0 bytes in 0 blocks
==83==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==83== 
==83== All heap blocks were freed -- no leaks are possible
==83== 
==83== For counts of detected and suppressed errors, rerun with: -v
==83== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [10/10] - DH::testInsertHard

- **Points**: 10 / 10

```
==85== Memcheck, a memory error detector
==85== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==85== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==85== Command: ./test -r xml "DH::testInsertHard"
==85== 
==85== 
==85== HEAP SUMMARY:
==85==     in use at exit: 0 bytes in 0 blocks
==85==   total heap usage: 1,877 allocs, 1,877 frees, 241,357 bytes allocated
==85== 
==85== All heap blocks were freed -- no leaks are possible
==85== 
==85== For counts of detected and suppressed errors, rerun with: -v
==85== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [6/6] - SC::testRemoveEASY

- **Points**: 6 / 6

```
==87== Memcheck, a memory error detector
==87== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==87== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==87== Command: ./test -r xml "SC::testRemoveEASY"
==87== 
==87== 
==87== HEAP SUMMARY:
==87==     in use at exit: 0 bytes in 0 blocks
==87==   total heap usage: 1,855 allocs, 1,855 frees, 241,392 bytes allocated
==87== 
==87== All heap blocks were freed -- no leaks are possible
==87== 
==87== For counts of detected and suppressed errors, rerun with: -v
==87== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [10/10] - SC::testRemoveHard

- **Points**: 10 / 10

```
==89== Memcheck, a memory error detector
==89== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==89== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==89== Command: ./test -r xml "SC::testRemoveHard"
==89== 
==89== 
==89== HEAP SUMMARY:
==89==     in use at exit: 0 bytes in 0 blocks
==89==   total heap usage: 1,877 allocs, 1,877 frees, 242,272 bytes allocated
==89== 
==89== All heap blocks were freed -- no leaks are possible
==89== 
==89== For counts of detected and suppressed errors, rerun with: -v
==89== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [7/7] - SC::testResizeOnce

- **Points**: 7 / 7

```
==91== Memcheck, a memory error detector
==91== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==91== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==91== Command: ./test -r xml "SC::testResizeOnce"
==91== 
==91== 
==91== HEAP SUMMARY:
==91==     in use at exit: 0 bytes in 0 blocks
==91==   total heap usage: 2,007 allocs, 2,007 frees, 249,664 bytes allocated
==91== 
==91== All heap blocks were freed -- no leaks are possible
==91== 
==91== For counts of detected and suppressed errors, rerun with: -v
==91== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [11/11] - SC::testResizeAll

- **Points**: 11 / 11

```
==93== Memcheck, a memory error detector
==93== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==93== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==93== Command: ./test -r xml "SC::testResizeAll"
==93== 
==93== 
==93== HEAP SUMMARY:
==93==     in use at exit: 0 bytes in 0 blocks
==93==   total heap usage: 1,906 allocs, 1,906 frees, 242,848 bytes allocated
==93== 
==93== All heap blocks were freed -- no leaks are possible
==93== 
==93== For counts of detected and suppressed errors, rerun with: -v
==93== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [6/6] - SC::testInsertEasy

- **Points**: 6 / 6

```
==95== Memcheck, a memory error detector
==95== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==95== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==95== Command: ./test -r xml "SC::testInsertEasy"
==95== 
==95== 
==95== HEAP SUMMARY:
==95==     in use at exit: 0 bytes in 0 blocks
==95==   total heap usage: 1,854 allocs, 1,854 frees, 241,344 bytes allocated
==95== 
==95== All heap blocks were freed -- no leaks are possible
==95== 
==95== For counts of detected and suppressed errors, rerun with: -v
==95== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [10/10] - SC::testInsertHard

- **Points**: 10 / 10

```
==97== Memcheck, a memory error detector
==97== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==97== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==97== Command: ./test -r xml "SC::testInsertHard"
==97== 
==97== 
==97== HEAP SUMMARY:
==97==     in use at exit: 0 bytes in 0 blocks
==97==   total heap usage: 1,876 allocs, 1,876 frees, 242,224 bytes allocated
==97== 
==97== All heap blocks were freed -- no leaks are possible
==97== 
==97== For counts of detected and suppressed errors, rerun with: -v
==97== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [6/6] - LP::testRemoveEASY

- **Points**: 6 / 6

```
==99== Memcheck, a memory error detector
==99== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==99== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==99== Command: ./test -r xml "LP::testRemoveEASY"
==99== 
==99== 
==99== HEAP SUMMARY:
==99==     in use at exit: 0 bytes in 0 blocks
==99==   total heap usage: 1,856 allocs, 1,856 frees, 240,685 bytes allocated
==99== 
==99== All heap blocks were freed -- no leaks are possible
==99== 
==99== For counts of detected and suppressed errors, rerun with: -v
==99== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [10/10] - LP::testRemoveHard

- **Points**: 10 / 10

```
==101== Memcheck, a memory error detector
==101== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==101== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==101== Command: ./test -r xml "LP::testRemoveHard"
==101== 
==101== 
==101== HEAP SUMMARY:
==101==     in use at exit: 0 bytes in 0 blocks
==101==   total heap usage: 1,878 allocs, 1,878 frees, 241,389 bytes allocated
==101== 
==101== All heap blocks were freed -- no leaks are possible
==101== 
==101== For counts of detected and suppressed errors, rerun with: -v
==101== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [7/7] - LP::testResizeOnce

- **Points**: 7 / 7

```
==103== Memcheck, a memory error detector
==103== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==103== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==103== Command: ./test -r xml "LP::testResizeOnce"
==103== 
==103== 
==103== HEAP SUMMARY:
==103==     in use at exit: 0 bytes in 0 blocks
==103==   total heap usage: 1,974 allocs, 1,974 frees, 245,197 bytes allocated
==103== 
==103== All heap blocks were freed -- no leaks are possible
==103== 
==103== For counts of detected and suppressed errors, rerun with: -v
==103== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [11/11] - LP::testResizeAll

- **Points**: 11 / 11

```
==105== Memcheck, a memory error detector
==105== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==105== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==105== Command: ./test -r xml "LP::testResizeAll"
==105== 
==105== 
==105== HEAP SUMMARY:
==105==     in use at exit: 0 bytes in 0 blocks
==105==   total heap usage: 1,873 allocs, 1,873 frees, 238,685 bytes allocated
==105== 
==105== All heap blocks were freed -- no leaks are possible
==105== 
==105== For counts of detected and suppressed errors, rerun with: -v
==105== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [6/6] - LP::testInsertEasy

- **Points**: 6 / 6

```
==107== Memcheck, a memory error detector
==107== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==107== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==107== Command: ./test -r xml "LP::testInsertEasy"
==107== 
==107== 
==107== HEAP SUMMARY:
==107==     in use at exit: 0 bytes in 0 blocks
==107==   total heap usage: 1,855 allocs, 1,855 frees, 240,653 bytes allocated
==107== 
==107== All heap blocks were freed -- no leaks are possible
==107== 
==107== For counts of detected and suppressed errors, rerun with: -v
==107== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [10/10] - LP::testInsertHard

- **Points**: 10 / 10

```
==109== Memcheck, a memory error detector
==109== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==109== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==109== Command: ./test -r xml "LP::testInsertHard"
==109== 
==109== 
==109== HEAP SUMMARY:
==109==     in use at exit: 0 bytes in 0 blocks
==109==   total heap usage: 1,877 allocs, 1,877 frees, 241,357 bytes allocated
==109== 
==109== All heap blocks were freed -- no leaks are possible
==109== 
==109== For counts of detected and suppressed errors, rerun with: -v
==109== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



---