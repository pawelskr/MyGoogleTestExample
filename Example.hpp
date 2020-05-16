#ifndef  EXAMPLE_HPP_H
#define EXAMPLE_HPP_H

class Example {
public:
    Example();
    ~Example();
    inline void SetX(int value) { x = value; }
    inline int GetX() { return x;}
    int square();
private:
    int x;
};

#endif // ! EXAMPLE_HPP_H
