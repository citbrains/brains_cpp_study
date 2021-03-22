#include<iostream>
#include<vector>
class queue
{
    public:
        int front() {
            return qv[0]; 
        }

        int back() {
            return qv[qv.size()-1];
        }

        void push(int p_num) {
            qv.push_back(p_num);
        }

        void pop() {
           qv.erase(qv.begin());
        }

        void empty() {
            std::cout << qv.size() << std::endl; 
        }
         void call(){
             for(int i=0; i<qv.size(); ++i){
                 std::cout << qv[i];
             }
             std::cout << std::endl;
         }
    private:
        std::vector<int> qv;
};

int main() {
    queue Que;
    for(int i=0; i<10; ++i){
        Que.push(i);
        Que.call();
    }

    for(int i=0; i<10; ++i){
        Que.pop();
        Que.call();
    }

    Que.empty();

    return 0;
}
