#ifndef __JUPITER_H__
#define __JUPITER_H__

void Hello();

class Foo
{
public:
    Foo();
    virtual ~Foo();

    int getX();
    void setX(int x);

protected:
    int m_X;
};

#endif
