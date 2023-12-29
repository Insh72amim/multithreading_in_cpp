This is the list of Code and Resources I've found online regarding Multithreading in C++

Playlist resource : https://www.youtube.com/playlist?list=PLk6CEY9XxSIAeK-EAh3hB4fgNvYkYmghp

CPlusPlus Website : https://cplusplus.com/reference/multithreading/

LeetCode Concurrency Problems : https://leetcode.com/tag/concurrency/

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

## Other Resources : Articles

https://github.com/PacktPublishing/Mastering-CPP-Multithreading

https://github.com/methylDragon/coding-notes/blob/master/C%2B%2B/07%20C%2B%2B%20-%20Threading%20and%20Concurrency.md

https://www.educative.io/blog/modern-multithreading-and-concurrency-in-cpp

http://www.gotw.ca/publications/concurrency-ddj.htm

https://herbsutter.com/2008/07/31/effective-concurrency-the-many-faces-of-deadlock/

## Other Resources : Youtube

https://youtu.be/oM1VxfrTQWg

https://www.youtube.com/watch?v=80ifzK3b8QQ&list=PL1835A90FC78FF8BE&ab_channel=BartoszMilewski

https://www.youtube.com/watch?v=A8eCGOqgvH4&ab_channel=toalexsmail

https://www.youtube.com/watch?v=KeLBd2EJLOU&ab_channel=toalexsmail

https://www.youtube.com/watch?v=paK38WAq8WY&t=29s&ab_channel=MeetingCpp

https://www.youtube.com/watch?v=y0GSc5fKtl8&ab_channel=CppCon

https://www.youtube.com/watch?v=c1gO9aB9nbs&ab_channel=CppCon

https://www.youtube.com/watch?v=CmxkPChOcvw&ab_channel=CppCon
