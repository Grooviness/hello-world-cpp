#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main (int argc, char* argv[]) {

    for (int i = 1; i <= 1000; i++) {
        
        std::cout << "Hello World\n" << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        
    }

    for (int i = 1; i <= 1000; i++) {

        std::cout << "Hello World 2\n" << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }

return 0;    

}


    