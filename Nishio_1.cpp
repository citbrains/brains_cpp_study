#include <iostream>
#include <string>

class CSample {
public:
    void set(int P_num);  			// m_numに値を設定するメソッド = メンバ関数
    int get();
private:                // m_numの値を取得するメソッド
    int T_num;
};


void CSample::set(int P_num) {		//（numを設定）クラス宣言の外で関数の定義を宣言する場合はそのクラスの名前と::
					//が必要。つまり違うクラスの中ならば同じ名前の関数,変数があってもよい。
    T_num = P_num;
}


int CSample::get() {       //(numを返却)
    return T_num;
}

int main() {
    int P_num = 0;
    CSample obj;
    std::cout << "Please enter number ----->";
    std::cin >> P_num;
    obj.set(P_num);
    std::cout << "Entered ----->" << obj.get() << std::endl;
   
    if (obj.get()%3==0 and obj.get()%5==0)
        std::cout << "FizzBuzz," << std::endl;
    if (obj.get()%3==0 and obj.get()%5!=0)
        std::cout << "Fizz," << std::endl;
    if (obj.get()%3!=0 and obj.get()%5==0)
        std::cout << "Buss," << std::endl;
    if (obj.get()%3!=0 and obj.get()%5!=0)
        std::cout << "Not found," << std::endl;
    
return 0;
}

