---

This report was generated for **pganot2** using **b18b3de7673ca51772449a8ce68cf266cb049575** (latest commit as of **October 11th 2021, 11:59 pm**)

---




## Score: 6/16 (37.50%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c Point.cpp -o .objs/Point.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c FloodFilledImage.cpp -o .objs/FloodFilledImage.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c Animation.cpp -o .objs/Animation.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c colorPicker/GridColorPicker.cpp -o .objs/colorPicker/GridColorPicker.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c colorPicker/MyColorPicker.cpp -o .objs/colorPicker/MyColorPicker.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c colorPicker/SolidColorPicker.cpp -o .objs/colorPicker/SolidColorPicker.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c colorPicker/GradientColorPicker.cpp -o .objs/colorPicker/GradientColorPicker.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c colorPicker/RainbowColorPicker.cpp -o .objs/colorPicker/RainbowColorPicker.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c imageTraversal/ImageTraversal.cpp -o .objs/imageTraversal/ImageTraversal.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c imageTraversal/DFS.cpp -o .objs/imageTraversal/DFS.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c imageTraversal/BFS.cpp -o .objs/imageTraversal/BFS.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1-8x4.cpp -o .objs/tests/tests_part1-8x4.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests_part1-4x4.cpp -o .objs/tests/tests_part1-4x4.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c tests/tests-part1-BFS-DFS.cpp -o .objs/tests/tests-part1-BFS-DFS.o
clang++  -std=c++14 -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/Point.o .objs/FloodFilledImage.o .objs/Animation.o .objs/colorPicker/GridColorPicker.o .objs/colorPicker/MyColorPicker.o .objs/colorPicker/SolidColorPicker.o .objs/colorPicker/GradientColorPicker.o .objs/colorPicker/RainbowColorPicker.o .objs/imageTraversal/ImageTraversal.o .objs/imageTraversal/DFS.o .objs/imageTraversal/BFS.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part1-8x4.o .objs/tests/tests_part2.o .objs/tests/tests_part1-4x4.o .objs/tests/tests-part1-BFS-DFS.o .objs/cs225/catch/catchmain.o  -std=c++14 -stdlib=libc++ -lc++abi -o test

```


### ✗ - [0/1] - DFS iterator visits all points in the correct order (7x4 image)

- **Points**: 0 / 1


```
Original: *it == Point(2, 1)
Expanded: (1, 2) == (2, 1)
```


### ✗ - [0/1] - BFS iterator visits all points in the correct order (7x4 image)

- **Points**: 0 / 1


```
Original: *it == Point(3, 2)
Expanded: (2, 1) == (3, 2)
```


### ✓ - [2/2] - DFS iterator starts at the start point

- **Points**: 2 / 2





### ✓ - [2/2] - DFS visits the correct pixel first

- **Points**: 2 / 2





### ✓ - [2/2] - BFS iterator starts at the start point

- **Points**: 2 / 2





### ✗ - [0/2] - BFS visits the correct pixel first

- **Points**: 0 / 2


```
Original: *it == Point(2, 1)
Expanded: (1, 2) == (2, 1)
```


### ✗ - [0/1] - DFS visits all points within a tolerance

- **Points**: 0 / 1


```
Original: count == 4
Expanded: 0 == 4
```


### ✗ - [0/1] - BFS visits all points within a tolerance

- **Points**: 0 / 1


```
Original: count == 4
Expanded: 0 == 4
```


### ✗ - [0/1] - DFS visits all points within a tolerance (includes pixels on image edge)

- **Points**: 0 / 1


```
Original: count == 12
Expanded: 0 == 12
```


### ✗ - [0/1] - BFS visits all points within a tolerance (includes pixels on image edge)

- **Points**: 0 / 1


```
Original: count == 12
Expanded: 0 == 12
```


### ✗ - [0/1] - DFS iterator visits all points in the correct order

- **Points**: 0 / 1


```
Original: *it == Point(0, 1)
Expanded: (4294967295, 0) == (0, 1)
```


### ✗ - [0/1] - BFS iterator visits all points in the correct order

- **Points**: 0 / 1


```
Original: *it == Point(1, 0)
Expanded: (0, 1) == (1, 0)
```


### ✓ - [0/0] - DFS maintains the deepest point on top

- **Points**: 0 / 0





### ✓ - [0/0] - DFS maintains a depth-first ordering

- **Points**: 0 / 0





### ✓ - [0/0] - BFS maintains the correct point on top

- **Points**: 0 / 0





### ✓ - [0/0] - BFS maintains the BFS ordering

- **Points**: 0 / 0





---