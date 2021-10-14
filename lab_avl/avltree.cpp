/**
 * @file avltree.cpp
 * Definitions of the binary tree functions you'll be writing for this lab.
 * You'll need to modify this file.
 */

template <class K, class V>
V AVLTree<K, V>::find(const K& key) const
{
    return find(root, key);
}

template <class K, class V>
V AVLTree<K, V>::find(Node* subtree, const K& key) const
{
    if (subtree == NULL)
        return V();
    else if (key == subtree->key)
        return subtree->value;
    else {
        if (key < subtree->key)
            return find(subtree->left, key);
        else
            return find(subtree->right, key);
    }
}

template <class K, class V>
void AVLTree<K, V>::updateHeight(Node*& t) {
    t->height = 1 + std::max(heightOrNeg1(t->left), heightOrNeg1(t->right));
}

template <class K, class V>
void AVLTree<K, V>::rotateLeft(Node*& t)
{
    functionCalls.push_back("rotateLeft"); // Stores the rotation name (don't remove this)
    // your code here
    /* Visual   o
                 \                o
                  o     =>     /     \    
                   \          o       o
                    o
    */
   Node *right_ = t -> right;
   t -> right = right_->left;
   // Updates height of old t
   right_ -> left = t;
   updateHeight(t);
   t = right_;
   // Updates height of new t
   updateHeight(t);
}

template <class K, class V>
void AVLTree<K, V>::rotateLeftRight(Node*& t)
{
    functionCalls.push_back("rotateLeftRight"); // Stores the rotation name (don't remove this)
    // Implemented for you:
    rotateLeft(t->left);
    rotateRight(t);
}

template <class K, class V>
void AVLTree<K, V>::rotateRight(Node*& t)
{
    functionCalls.push_back("rotateRight"); // Stores the rotation name (don't remove this)
    // your code here
    /* Visual   o
               /                o
              o     =>       /     \    
             /              o       o
            o

    */
   Node *left_ = t -> left;
   t -> left = left_->right;
   left_ -> right = t;
   updateHeight(t);
   t = left_;
   updateHeight(t);
}

template <class K, class V>
void AVLTree<K, V>::rotateRightLeft(Node*& t)
{
    functionCalls.push_back("rotateRightLeft"); // Stores the rotation name (don't remove this)
    // your code here
    rotateRight(t->right);
    rotateLeft(t);
}

template <class K, class V>
void AVLTree<K, V>::rebalance(Node*& subtree)
{
    if (subtree == NULL) {
        return;
    }
    // your code here
    int balance = heightOrNeg1(subtree->right) - heightOrNeg1(subtree->left);

    // Check if the node is current not in balance
    if (balance == -2) {
        int left_balance = 
            heightOrNeg1(subtree->left->right) - heightOrNeg1(subtree->left->left);
        if (left_balance == -1) {
            rotateRight(subtree);
        } else {
            rotateLeftRight(subtree);
        }
    } else if (balance == 2) {
        int right_balance = 
            heightOrNeg1(subtree->right->right) - heightOrNeg1(subtree->right->left);
        if (right_balance == 1) {
            rotateLeft(subtree);
        } else {
            rotateRightLeft(subtree);
        }
    }
    updateHeight(subtree);
}

template <class K, class V>
void AVLTree<K, V>::insert(const K & key, const V & value)
{
    insert(root, key, value);
}

template <class K, class V>
void AVLTree<K, V>::insert(Node*& subtree, const K& key, const V& value)
{
    // your code here
    // Check for imbalance
    // Correct it // Do rotations
    // Update Height
    if (subtree == NULL) {
        subtree = new Node(key, value);
    } else if (key < subtree->key) {
        insert(subtree->left, key, value);
    } else if (key > subtree->key) {
        insert(subtree->right, key, value);
    }
    rebalance(subtree);
}

template <class K, class V>
void AVLTree<K, V>::remove(const K& key)
{
    remove(root, key);
}

template <class K, class V>
void AVLTree<K, V>::remove(Node*& subtree, const K& key)
{
    if (subtree == NULL)
        return;

    if (key < subtree->key) {
        // your code here
        remove(subtree->left, key);
    } else if (key > subtree->key) {
        // your code here
        remove(subtree->right, key);
    } else {
        if (subtree->left == NULL && subtree->right == NULL) {
            /* no-child remove */
            // your code here
            delete subtree;
            subtree = NULL;
            return;
        } else if (subtree->left != NULL && subtree->right != NULL) {
            /* two-child remove */
            // your code here
            //get InOrderPredecessor
            // delete element rebalance
            // From lecture:
            // Get left node
            Node *node = subtree->left;
            // Loops right until the end
            while (node->right != NULL) {
                node = node->right;
            }
            // Swap IOS with node to remove
            swap(subtree, node);
            // remove node using 0 or 1 child remove
            remove(subtree->left, key);
        } else {
            /* one-child remove */
            // your code here
            // Node to delete
            Node* node;
            if (subtree->right == NULL) {
                node = subtree->left;
            }
            if (subtree->left == NULL) {
                node = subtree->right;
            }
            *subtree = *node;
            delete node;
            node = NULL;
        }
        // your code here
    }
    updateHeight(subtree);
    rebalance(subtree);
}
