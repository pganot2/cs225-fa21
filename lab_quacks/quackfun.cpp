/**
 * @file quackfun.cpp
 * This is where you will implement the required functions for the
 * stacks and queues portion of the lab.
 */
#include <stack>
#include <queue>
namespace QuackFun {

/**
 * Sums items in a stack.
 *
 * **Hint**: think recursively!
 *
 * @note You may modify the stack as long as you restore it to its original
 * values.
 *
 * @note You may use only two local variables of type T in your function.
 * Note that this function is templatized on the stack's type, so stacks of
 * objects overloading the + operator can be summed.
 *
 * @note We are using the Standard Template Library (STL) stack in this
 * problem. Its pop function works a bit differently from the stack we
 * built. Try searching for "stl stack" to learn how to use it.
 *
 * @param s A stack holding values to sum.
 * @return  The sum of all the elements in the stack, leaving the original
 *          stack in the same state (unchanged).
 */
template <typename T>
T sum(stack<T>& s)
{
    //How do you keep track of values popped so you can put them all back once you're done.
    // base case
    // Your code here
    if (s.empty()) {
        return T(); // stub return value (0 for primitive types). Change this!
                   // Note: T() is the default value for objects, and 0 for
                  // primitive types
    }
    T top = s.top();
    // Modifies stack to remove the initial top value for recursive step
    s.pop();
    // Recursive step
    T result = top + sum(s);
    // Modifies stack to return the initial top value;
    s.push(top);
    return result;
}

/**
 * Checks whether the given string (stored in a queue) has balanced brackets.
 * A string will consist of square bracket characters, [, ], and other
 * characters. This function will return true if and only if the square bracket
 * characters in the given string are balanced. For this to be true, all
 * brackets must be matched up correctly, with no extra, hanging, or unmatched
 * brackets. For example, the string "[hello][]" is balanced, "[[][[]a]]" is
 * balanced, "[]]" is unbalanced, "][" is unbalanced, and "))))[cs225]" is
 * balanced.
 *
 * For this function, you may only create a single local variable of type
 * `stack<char>`! No other stack or queue local objects may be declared. Note
 * that you may still declare and use other local variables of primitive types.
 *
 * @param input The queue representation of a string to check for balanced brackets in
 * @return      Whether the input string had balanced brackets
 */
bool isBalanced(queue<char> input)
{
    stack<char> s;
    while(!input.empty()) {
        if (input.front() == '[') {
            s.push('[');
        } else if (input.front() == ']') {
            //If it is a closing bracket without an open bracket in s
            if (s.empty()) {
                return false;
            }
            s.pop();
        }
        input.pop();
    }
    // @TODO: Make less optimistic
    //If s is not empty, there is no matching closing bracket for the open bracket
    return s.empty();
}

/**
 * Reverses even sized blocks of items in the queue. Blocks start at size
 * one and increase for each subsequent block.
 *
 * **Hint**: You'll want to make a local stack variable.
 *
 * @note Any "leftover" numbers should be handled as if their block was
 * complete.
 *
 * @note We are using the Standard Template Library (STL) queue in this
 * problem. Its pop function works a bit differently from the stack we
 * built. Try searching for "stl stack" to learn how to use it.
 *
 * @param q A queue of items to be scrambled
 */
template <typename T>
void scramble(queue<T>& q)
{
    stack<T> s;
    queue<T> q2;
    // Your code heres
    int block = 1;
    //count of how many block's we finished
    int count  = 0;
    while (!q.empty()) {
        if (block == count) {
            block++;
            count = 0;
        }
        //if block is an odd number of blocks don't change anything
        if (block % 2 != 0) {
            q2.push(q.front());
            q.pop();
            count++;
        } else { //If block is an even number
            //pushing elements into stack reverses them, first one in, last one out
            s.push(q.front());
            q.pop();
            count++;
            if (block == count || q.empty()) {
                while (!s.empty()) {
                    q2.push(s.top());
                    s.pop();
                }
            }
        }
    }
    //push input elements in q into stack, reversing the certain number of elements

    //swap the scrambeled q and input q
    swap(q, q2);
}
}
