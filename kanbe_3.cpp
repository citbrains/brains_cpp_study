#include <iostream>
using namespace std;

class sample {
    public:
        sample(int x){
            hoge = new int[x];
        }
        ~sample(){
            delete[] hoge;
        }

        int &access(int num) {
            int &ref = hoge[num-1]; 
            return ref;
        }

        void vale_check(){
            for(int i=0; i<5; i++){
                cout << hoge[i] << endl;
            }
        }

    private:
        int *hoge;
};

int main() {
    sample work(5);
    int &change_ref = work.access(2);
    change_ref = 100;
    work.vale_check();
}
