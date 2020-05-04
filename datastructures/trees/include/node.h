#ifndef CUP_NODE_H
#define CUP_NODE_H

/*
 * XXX add k-ary trees
 * XXX rename to btree?
 */
struct tree {
    struct tree *parent, *left, *right;
};

enum RB_COLOR {
    RED, BLACK
};

struct rbtree {
    struct tree node;
    enum RB_COLOR color;
};

#endif
