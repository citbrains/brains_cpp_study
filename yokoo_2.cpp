/*
1.int型の正の整数を格納するstackを作る。実際に値を格納するのはint型の配列で行う。配列の要素に何も値が入っていない事を-1で表す。
2.pushというメンバ関数を用意し、それで値を一番上に格納する。
3.popというメンバ関数を用意し、それで一番上の値を戻り値として返したのちに一番上の値を削除する。
4.コンストラクタでは実際に値を格納する配列の全ての要素に-1を代入して何も入っていない状態を表しておく。
*/

#include <iostream>

class Task{
  public:
    Task();//1.4.
    void push(int set_num);//2.
    int pop();//3.
    void all_get();
  private:
    int stack[1000];
    int end_element = 1000;
    int now_index = 0;
};

Task::Task()
{
  for(int i=0;i<end_element;i++){
    stack[i] = -1;
  }
}

void Task::push(int set_num)
{
  stack[now_index] = set_num;
  now_index++;
}

int Task::pop()
{
  int kari;
  if(stack[0] == -1){
    std::cout <<"データは何も入っていません" << std::endl;
    return -1;
  }else{
    kari = stack[now_index-1];
    stack[now_index-1] = -1;
    now_index--;
    return kari;
  }
}
void Task::all_get()
{
  if(now_index == 0){
    std::cout << "--------------------" << std::endl;
    std::cout << "要素はすべて" << -1 << "です" << std::endl;
    std::cout << "--------------------" << std::endl;
  }else{
    std::cout << "--------------------" << std::endl;
    for(int i=0;i<now_index;i++){
      std::cout << i << ":" << stack[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "--------------------" << std::endl;
  }
}

int main(){
  Task task;
  int num=0, set_num=0, fg=0, flag=0;
  while(1){
    std::cout << "--------------------" << std::endl;
    std::cout << "選んでください" << std::endl;
    std::cout << "1.pushデータを入れる" << std::endl;
    std::cout << "2.popデータを取り出す" << std::endl;
    std::cout << "終了は-1を入力" << std::endl;
    std::cout << "--------------------" << std::endl;
    std::cin >> num;
    switch(num){
    case 1:
      std::cout << "1.pushが選ばれました。値を入れてください" << std::endl;
      std::cin >> set_num;
      task.push(set_num);
      break;
    case 2:
      flag = task.pop();
      if(flag == -1){
        break;
      }
      std::cout << "2.popデータを取り出す" << std::endl;
      std::cout << "取り出したデータは" << flag << "です。" << std::endl;
      break;
    case -1:
      fg = -1;
      break;
    default:
      std::cout << "error" << std::endl;
      break;
    }
    if(fg == -1){
      std::cout << "end" << std::endl;
      break;
    }
    task.all_get();
  }

  return 0;
}
