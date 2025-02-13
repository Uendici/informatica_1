#include <iostream>

using namespace std;

class animale{
    private:

    public:

    void dorme(){
        cout << "zzzzz" << endl;
    }

    void salta(){
        cout << "oppa!" << endl;
    }

};

class cane:public animale{

    public:
    virtual void abbaia() {
        cout << "bau bau" << endl;
    }
};
class gatto:public cane{
    public:
    virtual void abbaia() override {
        cout << "miao miao" << endl;
    }
};

int main(){
    cane c;
    gatto g;

    cout << "cane: ";
    c.salta();
    cout << "gatto: ";
    g.dorme();

    cout << "cane: ";
    c.abbaia();
    cout << "gatto: ";
    g.abbaia();
}