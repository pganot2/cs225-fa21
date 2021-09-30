/**
 * @file list.cpp
 * Doubly Linked List (MP 3).
 */

template <class T>
List<T>::List() { 
  // @TODO: graded in MP3.1
  // Removed ListNode* for head_ and tail_ | Added length_ = 0;
    head_ = NULL;
    tail_ = NULL;
    length_ = 0;
}

/**
 * Returns a ListIterator with a position at the beginning of
 * the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::begin() const {
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(head_);
}

/**
 * Returns a ListIterator one past the end of the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::end() const {
  // @TODO: graded in MP3.1
  // Changed it back to NULL and it worked?
  return List<T>::ListIterator(NULL);
}


/**
 * Destroys all dynamically allocated memory associated with the current
 * List class.
 */
template <typename T>
void List<T>::_destroy() {
  /// @todo Graded in MP3.1

  // Checks if the list is empty
  if (length_ == 0 || head_ == NULL || tail_ == NULL) {
    return;
  }
  ListNode * curr = head_ -> next;
  // Traverses the whole list and deletes each ListNode
  while (curr != NULL) {
    delete curr -> prev;
    curr = curr -> next;
    length_--;
  }
  delete tail_;
}

/**
 * Inserts a new node at the front of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertFront(T const & ndata) {
  /// @todo Graded in MP3.1
  // Makes a new ListNode to be inserted at front
  ListNode * newNode = new ListNode(ndata);
  // Assigns prev as NULL since newNode is the first item on the List
  newNode -> prev = NULL;
  // Checks if List is empty
  if (head_ == NULL) {
    head_ = newNode;
    if (tail_ == NULL) {
      tail_ = newNode;
    }
    // Increases length_ by 1 after adding newNode
    length_++;
    return;
  }
  // Connects the old head_ to the newNode
  head_ -> prev = newNode;
  // Connect newNode to the old head_
  newNode -> next = head_;
  // Sets newNode as the head_
  head_ = newNode;

  if (tail_ == NULL) {
    tail_ = newNode;
  }
  
  // Increases length_ by 1 after adding newNode
  length_++;

}

/**
 * Inserts a new node at the back of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertBack(const T & ndata) {
  /// @todo Graded in MP3.1
  // Makes a new ListNode to insert at back
  ListNode * newNode = new ListNode(ndata);
  // Assigns next as NULL since newNode is the last item on the list
  newNode -> next = NULL;
  // Checks if List is empty
  if (tail_ == NULL) {
    tail_ = newNode;
    if (head_ == NULL) {
      head_ = newNode;
    }
    // Increases length_ by 1 after adding newNode
    length_++;
    return;
  }
  // Connects the old tail_ to newNode
  tail_ -> next = newNode;
  // Connects newNode to the old tail_
  newNode -> prev = tail_;
  // Sets newNode as tail_
  tail_ = newNode;

  if (head_ == NULL) {
    head_ = newNode;
  }

  // Increases length_ by 1 after adding newNode
  length_++;

}

/**
 * Helper function to split a sequence of linked memory at the node
 * splitPoint steps **after** start. In other words, it should disconnect
 * the sequence of linked memory after the given number of nodes, and
 * return a pointer to the starting node of the new sequence of linked
 * memory.
 *
 * This function **SHOULD NOT** create **ANY** new List or ListNode objects!
 *
 * This function is also called by the public split() function located in
 * List-given.hpp
 *
 * @param start The node to start from.
 * @param splitPoint The number of steps to walk before splitting.
 * @return The starting node of the sequence that was split off.
 */
template <typename T>
typename List<T>::ListNode * List<T>::split(ListNode * start, int splitPoint) {
  /// @todo Graded in MP3.1
  // Checks split edge cases at 0
  if (splitPoint == 0) {
    return start;
  }
  // Checks split edge cases when splitPoint is an invalid index
  if (splitPoint >= length_) {
    return start;
  }

  ListNode * curr = start;
  // Removed || curr != NULL cause why is that there in the first place?
  for (int i = 0; i < splitPoint; i++) {
    curr = curr->next;
  }
  // Splits the list by setting curr as the start point
  if (curr != NULL) {
      curr -> prev -> next = NULL;
      curr -> prev = NULL;
      return curr;
  }

  return NULL;
}

/**
  * Modifies List using the rules for a TripleRotate.
  *
  * This function will to a wrapped rotation to the left on every three 
  * elements in the list starting for the first three elements. If the 
  * end of the list has a set of 1 or 2 elements, no rotation all be done 
  * on the last 1 or 2 elements.
  * 
  * You may NOT allocate ANY new ListNodes!
  */
template <typename T>
void List<T>::tripleRotate() {
  // @todo Graded in MP3.1

  // tripleRotate does not do anything if list is NULL or empty

  if (head_ == NULL || tail_ == NULL || length_ < 3) {
    return;
  }

  // Loop that loops three nodes at a time
  for (int i = 0; i < length_; i += 3) {

    // Initializes ListNodes to be rotated before modification
    ListNode* node1 = head_;

    // Traverses the list to the correct starting location
    int index = 0;
    while(index != i) {
      node1 = node1 -> next;
      index++;
    }

    ListNode* node2 = node1 -> next;
    ListNode* node3 = node2 -> next;

    // Checks if the loop is at it's first iteration to update head_
    if (i == 0) {
      head_ = node2;
      //node2 -> prev = NULL;
    }

    // Checks if the loop is at it's final iteration to update tail_
    // Change if statement to handle length not multiple of 3
    if (i == length_ - 3) {
      tail_ = node1;
      //node1 -> next = NULL;
    }

    // tripleRotate main
    //Node1 -> next is pointing to 4, but should be pointing to 
    node2 -> prev = node1 -> prev;
    node1 -> next = node3 -> next;
    // <1 2 3 4 5 6>
    if (node1 -> prev != NULL) {
      node1 -> prev -> next = node2;
    }
    node1 -> prev = node3;
    // Checks fourth node to connect to the first node
    if (node3 -> next != NULL) {
      node3 -> next -> prev = node1;
    }
    node3 -> next = node1;
  }
}


/**
 * Reverses the current List.
 */
template <typename T>
void List<T>::reverse() {
  reverse(head_, tail_);
}

/**
 * Helper function to reverse a sequence of linked memory inside a List,
 * starting at startPoint and ending at endPoint. You are responsible for
 * updating startPoint and endPoint to point to the new starting and ending
 * points of the rearranged sequence of linked memory in question.
 *
 * @param startPoint A pointer reference to the first node in the sequence
 *  to be reversed.
 * @param endPoint A pointer reference to the last node in the sequence to
 *  be reversed.
 */
template <typename T>
void List<T>::reverse(ListNode *& startPoint, ListNode *& endPoint) {
  /// @todo Graded in MP3.2
  ListNode * temp = NULL;
  ListNode * curr = startPoint;

  // Swaps the prev ListNode and the next ListNode pointers
  while (curr != NULL) {
    // Keeps old previous value
    temp = curr -> prev;
    // Sets new previous value
    curr -> prev = curr -> next;
    // Sets next value as old previous
    curr -> next = temp;
    
    curr = curr -> prev;
  }

  if (temp != NULL) {
    endPoint = startPoint;
    startPoint = temp -> prev;
  }
}

/**
 * Reverses blocks of size n in the current List. You should use your
 * reverse( ListNode * &, ListNode * & ) helper function in this method!
 *
 * @param n The size of the blocks in the List to be reversed.
 */
template <typename T>
void List<T>::reverseNth(int n) {
  /// @todo Graded in MP3.2

  // Edge case if n is 0 (Don't change list)
  if (n == 0) {
    return;
  }

  // Edge case if n is greater than length of the list
  if (n >= length_) {
    reverse(head_, tail_);
    return;
  }

  ListNode * startPoint;
  ListNode * endPoint;

  reverse(startPoint, endPoint);
}


/**
 * Merges the given sorted list into the current sorted list.
 *
 * @param otherList List to be merged into the current list.
 */
template <typename T>
void List<T>::mergeWith(List<T> & otherList) {
    // set up the current list
    head_ = merge(head_, otherList.head_);
    tail_ = head_;

    // make sure there is a node in the new list
    if (tail_ != NULL) {
        while (tail_->next != NULL)
            tail_ = tail_->next;
    }
    length_ = length_ + otherList.length_;

    // empty out the parameter list
    otherList.head_ = NULL;
    otherList.tail_ = NULL;
    otherList.length_ = 0;
}

/**
 * Helper function to merge two **sorted** and **independent** sequences of
 * linked memory. The result should be a single sequence that is itself
 * sorted.
 *
 * This function **SHOULD NOT** create **ANY** new List objects.
 *
 * @param first The starting node of the first sequence.
 * @param second The starting node of the second sequence.
 * @return The starting node of the resulting, sorted sequence.
 */
template <typename T>
typename List<T>::ListNode * List<T>::merge(ListNode * first, ListNode* second) {
  /// @todo Graded in MP3.2
  
  if (first == NULL &&  second == NULL) {
    return NULL;
  }

  if (first == NULL) {
    return second;
  }

  if (second == NULL) {
    return first;
  }

  // Given two sorted arrays
  // Compare the first values
  // If a value is smaller in one array set second
  /*
  ListNode * curr;
  while (first != NULL && second != NULL) {
    if (second -> data > first -> data) {
      curr = first;
      first = first -> next;
      break;
    } else {
      curr = second;
      second = second -> next;
      break;
    }
  } */
  return NULL;
}

/**
 * Sorts a chain of linked memory given a start node and a size.
 * This is the recursive helper for the Mergesort algorithm (i.e., this is
 * the divide-and-conquer step).
 *
 * Called by the public sort function in List-given.hpp
 *
 * @param start Starting point of the chain.
 * @param chainLength Size of the chain to be sorted.
 * @return A pointer to the beginning of the now sorted chain.
 */
template <typename T>
typename List<T>::ListNode* List<T>::mergesort(ListNode * start, int chainLength) {
  /// @todo Graded in MP3.2
  return NULL;
}
