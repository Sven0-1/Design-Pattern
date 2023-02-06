class Lib
{
public:
    Lib(/* args */);

    // 稳定的业务流程,run即所谓的TemplateMethod
    void run()
    {
        step1();
        if (step2())
        {
            step3();
        }
        for (0; 0; 0)
        {
            step4();
        }
        step5();
    }
    // 稳定的方法
    void step1() {}
    void step3() {}
    void step5() {}
    virtual ~Lib();

protected:
    // 不稳定的方法
    virtual int step2() = 0;
    virtual int step4() = 0;
};
