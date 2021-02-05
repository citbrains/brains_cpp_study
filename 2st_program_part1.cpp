#include <iostream>

int t = 0;

class stack
{
  public:
  //  stack();
    int num;
    void push(int num_in);
    void pop();
    int get_num();
    int get_stack_num();
  //  ~stack();
                                                     
    stack()
      {
        if(t == 0)
        {
          for(int i = 0; i <= stack_num_count; ++i)
          {
            stack_num[i] = -1;
          }
          num = -1;
          t = 1;
        }
      }
                                                   

  private:
    int stack_num[1000];
    int stack_num_count = 1000;
};
/*
stack::stack()
{
  num = -1;
  
  for(int i = 0; i <= stack_num_count; ++i)
  {
    stack_num[i] = -1;
  }
}

stack::~stack()
{
}
*/
void stack::push(int num_in)
{
  ++num;
  stack_num[num] = num_in;
};

void stack::pop()
{
  stack_num[num] = -1;
  --num;
  if(num == -2) num = -1;
};

int stack::get_num()
{
  return num;
}

int stack::get_stack_num()
{
  return stack_num[num];
}

int main()
{
  while(1)
  {
    stack obj;
    int num_in = 0, select = 0, end = 0;
    
    if(obj.get_num() == -1) std::cout << "データが存在しません" << std::endl;
    else std::cout << "現在、["<< obj.get_num() <<"]層に存在するデータは「"<< obj.get_stack_num() <<"」です" << std::endl;

    while(1)
    {
      std::cout << "pushを行う場合は１　//　popを行う場合は２　//　終了する場合は３　//　を入力してください" << std::endl;
      std::cin >> select;
    
      if(select == 1)
      {
        std::cout << "保存するデータ（数字）を入力してください" << std::endl;
        std::cin >> num_in;
        obj.push(num_in);
        break;
      }
      else if(select == 2)
      {
        std::cout << "保存されていたデータ　>> "<< obj.get_stack_num() << std::endl;
        obj.pop();
        break;
      }
      else if(select == 3)
      {
        std::cout << "終了します" << std::endl;
        end = 1;
        break;
      }
      else
      {
        std::cout << "不正な入力です" << std::endl;
        break;
      }
    }
    if(end == 1) break;
  }
  return 0;
}