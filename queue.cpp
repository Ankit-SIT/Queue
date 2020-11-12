#include "queue_using_array.h"

int main(){

    static unsigned int n;
    std::cin>>n;

    class queue Q(n);
    int result = 0;
    unsigned int choice = 0;

while(true){
    std::cout<<"\n1. ENQUEUE\n";
    std::cout<<"2. DEQUEUE\n";
    std::cout<<"3. DISPLAY\n";
    std::cout<<"ENTER CHOICE: ";
    std::cin>>choice;
        

    switch(choice){
    case 1:
        std::cin>>result;
        Q.enqueue(result);
        break;

    case 2:
        result = Q.dequeue();
        printf("data - %d\n",result);
        break;
    case 3:    
        Q.display();
        break;
    case 4:
        return 0;
    default:
        std::cout<<"INVALID CHOICE! TRY AGAIN!";
        break;
    }

    
}
    return 0;
}
