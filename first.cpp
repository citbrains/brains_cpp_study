#include <iostream>

class FizzBuzz
{
public:
    void set(int num);
    int get();
    void judge();

private:
    int fizz = 3;
    int buzz = 5;
    int m_num;
};

void FizzBuzz::set(int num)
{
    m_num = num;
}

void FizzBuzz::judge()
{
    if(m_num % 3 == 0)
    {
        std::cout << "Fizz";
    }

    if(m_num % 5 == 0)
    {
        std::cout << "Buzz" << std::endl;
    }
}

int main()
{
    FizzBuzz hiroki;
    int num;
    std::cin >> num;
    hiroki.set(num);
    hiroki.judge();
    return 0;
}