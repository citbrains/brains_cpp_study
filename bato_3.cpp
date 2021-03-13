#include<iostream>
class sample{
  public:
    /*要素数の決定&初期化*/
    sample(int push_index){            
      determine_elements = push_index; //値渡し
      array = new int[push_index];//要素決定
    }
    ~sample(){                      
      delete[] array; //開放
    }
    int& access(int access_elements); //値の参照の定義
    void display();//表示の定義
    int get_index();//値の定義
    
  private:
    int *array; //配列ポインタ
    int determine_elements;//入力した要素
    
  };

/*値の参照*/  
int& sample::access(int access_elements){
  return array[access_elements];
}

/*値*/ 
int sample::get_index(){
  return determine_elements;
}
/*配列表示*/
void sample::display(){
  for(int i=0;i<determine_elements;i++){
    std::cout<<array[i]<<",";
  }
  std::cout<<std::endl;
}

int main(){
  int a;//入力
  std::cout<<"要素数の決定:";
  std::cin>>a;
  sample s1(a);//インスタンス化1
  s1.access(1)=25;//代入1
  
  sample s2(a);//インスタンス化2
  /*自由入力*/
  for(int i=0;i<s2.get_index();i++){
    int input;
    std::cin>>input;
    s2.access(i)= input;
  }
  s1.display();//s1表示
  s2.display();//s2表示
  return 0;

}
