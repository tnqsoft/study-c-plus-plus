#include <iostream>
#include <time.h>

using namespace std;

//-----------------------------------------------------------------

namespace study {
    class Timer;    
}

//-----------------------------------------------------------------

class study::Timer
{
    private:
        clock_t start;
        clock_t stop;
    public:
        // Timer();
        void startTimer();
        void stopTimer();    
};

// study::Timer::Timer() {
//     cout << "Initial Timer class\n";
// }

void study::Timer::startTimer() {
    this->start = clock();
}

void study::Timer::stopTimer() {
    this->stop = clock();
    cout << "Execute time " << (double)(this->stop - this->start) * 1000.0 / CLOCKS_PER_SEC << "\n";
}