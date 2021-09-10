


## Score: 100/100 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c letter.cpp -o .objs/letter.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c room.cpp -o .objs/room.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c allocator.cpp -o .objs/allocator.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c fileio.cpp -o .objs/fileio.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/letter.o .objs/room.o .objs/allocator.o .objs/fileio.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++14 -stdlib=libc++ -lc++abi -o test

```


### ✓ - [5/5] - Test the constructor (valgrind)

- **Points**: 5 / 5

```
==63== Memcheck, a memory error detector
==63== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==63== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==63== Command: ./test -r xml "Test\ the\ constructor\ (valgrind)"
==63== 
==63== 
==63== HEAP SUMMARY:
==63==     in use at exit: 0 bytes in 0 blocks
==63==   total heap usage: 2,492 allocs, 2,492 frees, 278,680 bytes allocated
==63== 
==63== All heap blocks were freed -- no leaks are possible
==63== 
==63== For counts of detected and suppressed errors, rerun with: -v
==63== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - Test allocate() (valgrind)

- **Points**: 5 / 5

```
==65== Memcheck, a memory error detector
==65== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==65== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==65== Command: ./test -r xml "Test\ allocate()\ (valgrind)"
==65== 
==65== 
==65== HEAP SUMMARY:
==65==     in use at exit: 0 bytes in 0 blocks
==65==   total heap usage: 2,492 allocs, 2,492 frees, 276,488 bytes allocated
==65== 
==65== All heap blocks were freed -- no leaks are possible
==65== 
==65== For counts of detected and suppressed errors, rerun with: -v
==65== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [20/20] - Test printRooms() (valgrind)

- **Points**: 20 / 20

```
==67== Memcheck, a memory error detector
==67== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==67== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==67== Command: ./test -r xml "Test\ printRooms()\ (valgrind)"
==67== 
==67== 
==67== HEAP SUMMARY:
==67==     in use at exit: 0 bytes in 0 blocks
==67==   total heap usage: 2,496 allocs, 2,496 frees, 277,208 bytes allocated
==67== 
==67== All heap blocks were freed -- no leaks are possible
==67== 
==67== For counts of detected and suppressed errors, rerun with: -v
==67== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [30/30] - Test printRooms() for overall output

- **Points**: 30 / 30





### ✓ - [40/40] - Test printRooms() for individual output

- **Points**: 40 / 40





---

This report was generated for **pganot2** using **14e811045812aace2262f378791897f0e1065478** (latest commit as of **September 10th 2021, 2:48 am**)
