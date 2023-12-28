This is the list of Code and Resources I've found online regarding Multithreading in C++

Playlist resource : https://www.youtube.com/playlist?list=PLk6CEY9XxSIAeK-EAh3hB4fgNvYkYmghp

CPlusPlus Website : https://cplusplus.com/reference/multithreading/

### QUESTIONS

What do you understand by thread and give one example in C++?

In every application there is a default thread which is main(), in side this we create other threads.

A thread is also known as lightweight process. Idea is achieve parallelism by dividing a process into multiple threads.
For example:
(a) The browser has multiple tabs that can be different threads.
(b) MS Word must be using multiple threads, one thread to format the text, another thread to process inputs (spell checker)
(c) Visual Studio code editor would be using threading for auto completing the code. (Intellicence)

### WAYS TO CREATE THREADS IN C++11

1. Function Pointers
2. Lambda Functions
3. Functors
4. Member Functions
5. Static Member functions

## Commands to execute a file

`g++ -std=c++11 -o my_program simple.cpp`

`g++ -std=c++11 -o a.out a.cpp`

# Multithreading in C++

Multi-threading in cpp consists of the following headers:

- <atomic> Atomic (header)
- <thread> Thread (header)
- <mutex> Mutex (header)
- <condition_variable> Condition variable (header)
- <future> Future (header)
