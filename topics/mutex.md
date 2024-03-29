# Mutex in C++

## Header Mutex

Header with facilities that allow mutual exclusion (mutex) of concurrent execution of critical sections of code, allowing to explicitly avoid data races.

It contains mutex types, lock types and specific functions:

Mutex types are lockable types used to protect access to a critical section of code: locking a mutex prevents other threads from locking it (exclusive access) until it is unlocked: mutex, recursive_mutex, timed_mutex, recursive_timed_mutex.
Locks are objects that manage a mutex by associating its access to their own lifetime: lock_guard, unique_lock.
Functions to lock mutiple mutexes simultaneously (try_lock, lock) and to directly prevent concurrent execution of a specific function (call_once).

## Classes

- mutex Mutex class (class)
- recursive_mutex Recursive mutex class (class)
- timed_mutex Timed mutex class (class)
- recursive_timed_mutex Recursive timed mutex (class)

Locks

- lock_guard Lock guard (class template)
- unique_lock Unique lock (class template)

Other types

- once_flag Flag argument type for call_once (class)
- adopt_lock_t Type of adopt_lock (class)
- defer_lock_t Type of defer_lock (class)
- try_to_lock_t Type of try_to_lock (class)

## Functions

- try_lock Try to lock multiple mutexes (function template)
- lock Lock multiple mutexes (function template)
- call_once Call function once (public member function)
