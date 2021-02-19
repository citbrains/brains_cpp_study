/*
1.privateメンバとしてint型の配列を持つ。
2.accessという名前のメンバ関数を持つ。それは引数でインデックスを指定し、メンバであるint型の配列の対応するインデックスの要素への参照を返す。 (例)3を引数に与えられたら配列の三番目の要素への参照を返す。
3.main関数内でaccessを呼び出しそれで返された参照を用いてその要素に値を書き込んでみる。
4.上記のメンバ変数はコンストラクタの引数で要素数を指定し、コンストラクタ内でメモリを確保する。
5.デストラクタで必ず上記メンバをdeleteする。(ここでdeleteを忘れるとメモリが開放されずに残ってしまいメモリを無駄に食う)
6.他の機能は自由
*/

#include <iostream>

class task{
  public:
    task(int n);
    ~task();
    int &access(int num);
    void all();
  private:
    int max;
    //int num[];
    int *ptr;
  
};

task::task(int n)
{
  ptr = new int[n];
  for(int i=0;i<n;i++){
    ptr[i] = i;
  }
  max = n;
}

task::~task()
{
  delete [] ptr;
}

int &task::access(int num)
{
  if(num > max){
    std::cout << "error" << std::endl;
    std::cout << "end" << std::endl;
    std::exit(0);
  }else{
    return ptr[num];
  }
}

void task::all()
{
  for(int i=0;i<max;i++){
    std::cout << i << ":" << ptr[i] << " ";
  }
  std::cout << std::endl;
}
int main(){
  int set_num=10;
  task *kd;
  kd = new task(set_num);
  kd->all();
  int number = 4;
  int &hoge = kd->access(number);
  hoge = 8342;
  kd->all();
  /*
  std::cout << "配列の要素数入力:";
  std::cin >> set_num;

  task *kd;
  kd = new task(set_num);
  kd->all();

  int number;
  std::cout << "値を変更する要素を入力:" << std::endl;
  std::cin >> number;
  int &hoge = kd->access(number);

  std::cout << "値は:" << std::endl;
  std::cin >> hoge;

  kd->all();
  */

  delete kd;

  return 0;
}
