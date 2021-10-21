---

This report was generated for **pganot2** using **2c96b43a6f3170ce3ea95706d000f2457b9799f1** (latest commit as of **October 17th 2021, 11:59 pm**)

---




## Score: 50/50 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c coloredout.cpp -o .objs/coloredout.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/coloredout.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++14 -stdlib=libc++ -lc++abi -o test

```


### ✓ - [10/10] - test_find

- **Points**: 10 / 10

```
==58== Memcheck, a memory error detector
==58== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==58== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==58== Command: ./test -r xml "test_find"
==58== 
==58== 
==58== HEAP SUMMARY:
==58==     in use at exit: 0 bytes in 0 blocks
==58==   total heap usage: 1,667 allocs, 1,667 frees, 216,640 bytes allocated
==58== 
==58== All heap blocks were freed -- no leaks are possible
==58== 
==58== For counts of detected and suppressed errors, rerun with: -v
==58== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - test_insert_small

- **Points**: 5 / 5





### ✓ - [10/10] - test_insert_find

- **Points**: 10 / 10





### ✓ - [10/10] - test_insert_big

- **Points**: 10 / 10

```
==62== Memcheck, a memory error detector
==62== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==62== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==62== Command: ./test -r xml "test_insert_big"
==62== 
==62== 
==62== HEAP SUMMARY:
==62==     in use at exit: 0 bytes in 0 blocks
==62==   total heap usage: 1,693 allocs, 1,693 frees, 218,128 bytes allocated
==62== 
==62== All heap blocks were freed -- no leaks are possible
==62== 
==62== For counts of detected and suppressed errors, rerun with: -v
==62== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



### ✓ - [5/5] - test_remove_small

- **Points**: 5 / 5





### ✓ - [10/10] - test_remove_big

- **Points**: 10 / 10

```
==65== Memcheck, a memory error detector
==65== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==65== Using Valgrind-3.14.0 and LibVEX; rerun with -h for copyright info
==65== Command: ./test -r xml "test_remove_big"
==65== 
==65== 
==65== HEAP SUMMARY:
==65==     in use at exit: 0 bytes in 0 blocks
==65==   total heap usage: 1,706 allocs, 1,706 frees, 219,624 bytes allocated
==65== 
==65== All heap blocks were freed -- no leaks are possible
==65== 
==65== For counts of detected and suppressed errors, rerun with: -v
==65== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```



---