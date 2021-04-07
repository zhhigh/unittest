#include <iostream>
#include <string>
#include <thread>
//环形链表
struct linknode{
    linknode* next;
    int id;
};

class myqueue{
public:
    myqueue();
    ~myqueue()=default;

    linknode* push(linknode* p){
        linknode _node;
        if(nullptr == _node.next){
            _node.next = p;
            return &_node;
        }
        while(_node.next!=nullptr){
            _node =_node.next;
            if(_node.next==nullptr){
                _node.next = p;
                break;
            }
        }
        return &_node;
    }
    void show(linknode* p){
        while(p->next!=nullptr){
            std::cout << "address:0x"<<p<<std::endl;
            std::cout << "next:0x"<<p->next<<std::endl;
            std::cout << p->id<<std::endl;
        }
    } 
private:
    //linknode node_;
};

int main(){
    
    return 0;
}