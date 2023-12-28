#include <iostream>
#include <thread>
#include <chrono>
#include <algorithm>
using namespace std;
using namespace std::chrono;
typedef long long int ull;

int main()
{

    auto startTime = high_resolution_clock::now();
    std::this_thread::sleep_for(std::chrono::seconds(5));
    auto stopTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stopTime - startTime);
    cout << duration.count() / 1000000;
    return 0;
}