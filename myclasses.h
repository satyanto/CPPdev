// Library for all my node data structures YEET!

struct TestClass {
    int intdata;
    double doubledata;
    float floatdata;
};

struct IntNode {
    int number;
    struct IntNode *pointer;
};

struct TreeNode {
    int number;
    struct TreeNode *leftpointer;
    struct TreeNode *rightpointer;
};

struct CoordinateNode {
    int x;
    int y;
    struct CoordinateNode *xpointer;
    struct CoordinateNode *ypointer;
};


