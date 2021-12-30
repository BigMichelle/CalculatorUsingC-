class Calculator
{
private:
    float firstNumber, secondNumber;
    enum CHOICE
    {
        INVALID = 0,
        ADD,
        SUBSTRICT,
        MUTIPLY,
        DIVIDE
    } _choice;

    void getEnteies();

public:
    Calculator();

    run();

    getResult();
};