#include "Lib.cpp"

class App : public Lib
{
public:
    App();
    virtual ~App() {}

protected:
    // App开发者自由重写两个方法，复用Lib
    virtual int step2() {}
    virtual int step4() {}
};

int main()
{
    Lib *ptr = new App();
    ptr->run();
    delete ptr;

    return 0;
}