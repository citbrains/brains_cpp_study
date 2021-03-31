#include <iostream>
#include <vector>

class object
{
    public:
        void see_answer();
        void set();
        void Judgment();

    private:
        long int number_of_people;
        long int max_height = 0;
        long int sum_height = 0;
        std::vector<long>height_list;

};

void object::see_answer()
{
    std::cout << sum_height << std::endl;
}
void object::set()
{
    std::cin >> number_of_people;
    height_list.resize(number_of_people);
    for(long loop = 0; loop < number_of_people; loop++)
    {
        std::cin >> height_list.at(loop);
    }
}
void object::Judgment()
{
    for(long loop = 0; loop < number_of_people; loop++)
    {
        if(max_height < height_list.at(loop))
        {
            max_height = height_list.at(loop);
        }
        else
        {
            sum_height += max_height - height_list.at(loop);
        }

    }
}
int main()
{
    object step;
    step.set();
    step.Judgment();
    step.see_answer();
}