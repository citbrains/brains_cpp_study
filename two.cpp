#include <iostream>
#include <string>

class person
{
    public:
        person();
        ~person();
        int get_age();
        std::string get_name();
        void set_age(int age_num);
        void set_name(std::string input_name);

    private:
        int age;
        std::string name;
};
person::person():age(0)
{
    std::cout << "コンストラクタ呼び出し" << std::endl;
}
person::~person()
{
    std::cout << "デストラクタ呼び出し"<< std::endl;
}
int main()
{
    person menber;
    return 0;
}