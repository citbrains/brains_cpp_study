#include <iostream>
using namespace std;

class Stack{
    public:
        Stack(){
            for(int i = 0; i < num_of_element; i++){
                num[i] = -1;
            }
        }
        void push(int x){
            num[end_index] = x;
            end_index++;
            return;
        }
        void pop(){
            cout << num[end_index - 1] << endl;
            num[end_index - 1] = -1;
            end_index--;
            return;
        }
        void check(){
            for(int i = 0; i < end_index; i++){
                cout << num[i] << endl;
            }

        }
    private:
        int num[1000];
        int num_of_element = 1000;
        int end_index = 0;
};

int main(){
    Stack obj;
    for(int i=0; i<5; i++){
        obj.push(i);
    }
    obj.push(666);
    obj.check();
    obj.pop();
}
