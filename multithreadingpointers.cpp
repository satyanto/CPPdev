#include <iostream>
#include <thread>
#include <chrono>

// i wanted to see if i can use a pointer so that a while loop can print (and tell me) the value of a number
// ... BUT at the same time, that same number is incremented by ANOTHER while loop!!! how fun! (lol)

using namespace std;

void incrementnumber(int* num) {    // function takes the pointer as the parameter (and  the pointer points to the address!)
    for(int a = 0; a<=10; a++) {
        cout << endl << "increment: " << *num;  // just to test!
        *num = *num + 1;        // we are using *ptr so that we can manipulate the values contained inside the memory address - in this case, we are incrementing it!
        this_thread::sleep_for(chrono::milliseconds(200));
    }
}

void printnumber(int* num) {        // function takes the pointer as the parameter (and  the pointer points to the address!)
    for (int a = 0; a<=10; a++) {
        cout << endl << *num;       // *ptr simply returns the value that the memory address contains - in this case, we are using the value to print as an integer!
        
        // update: due to the delayed start of this thread, we can now run at the same 'refresh' rate as our first thread, which removes potential 'time creep' effects for longer running threads
        this_thread::sleep_for(chrono::milliseconds(200));

        // (before i added the staggered start... i didnt think of it... LOL)
        //this_thread::sleep_for(chrono::milliseconds(210));  // we add a delay - a staggered delay ;) so that we can 'print' EXACTLY RIGHT AFTER its changed!
        // interesting note: if there is not such a big delay difference, then sometimes the thread code execution
        // gets crazy and mismatched - you can try it yourself and watch the code output!
    }
}

int main() {

    int number = 0;             // we instance our integer 'number'
    int* ptrnum = &number;      // we make a pointer pointed to the address of the integer

    thread t1(incrementnumber, ptrnum); // we run our first thread!!! THIS IS SO COOL!

    // update: i staggered the start so it should work with a similar 'refresh' rate
    this_thread::sleep_for(chrono::milliseconds(50));
    // update update: yeah this worked WAY better... lol
    thread t2(printnumber, ptrnum);

    // wait till our threads are done!
    t1.join();
    t2.join();
    
    return 0;
}

// NEXT UP: thread SYNCHRONIZATION oh yeah baby ;)
