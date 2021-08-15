/*
    
    0, 1, 2, 3, 4, 5, 6,  7,  8,  9, 10

    Fibonacci Sequence:
    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55

*/


#include <iostream>
#include <iomanip> // setprecision()
#include <chrono> // time
using namespace std;
using namespace std::chrono;

// Top-Down approach
long fib1(long n){
    if (n<=1) return n;
    return fib1(n-1)+fib1(n-2);
}
// Not very efficient, can be used for n<10

// Memoization
long long fibonacci[10000];

long fib2(long n){
    if (fibonacci[n]!=0) return fibonacci[n];
    if (n<=1) return n;
    fibonacci[0]= 0;
    fibonacci[1]= 1;
    fibonacci[n]= fib2(n-1)+fib2(n-2);
    return fibonacci[n];
}
// Most efficient for multiple test cases

// Bottom-Up approach
long fib3(long n){
    if (n<=1) return n;
    long long fib[n+1];
    fib[0]= 0;
    fib[1]= 1;
    for (int i=2; i<=n; ++i){
        fib[i]= fib[i-1]+fib[i-2];
    }
    return fib[n];
}
// Most memory efficient and time effiecient

int main(){
    int n;
    cin >> n;

    auto start1 = high_resolution_clock::now();
    long f1= fib1(n);
    auto stop1 = high_resolution_clock::now();
    auto duration1 = duration_cast<nanoseconds>(stop1 - start1);
    auto t1= duration1.count() * 1e-1;

    auto start2 = high_resolution_clock::now();
    long f2= fib2(n);
    auto stop2 = high_resolution_clock::now();
    auto duration2 = duration_cast<nanoseconds>(stop2 - start2);
    auto t2= duration2.count() * 1e-1;

    auto start3 = high_resolution_clock::now();
    long f3= fib3(n);
    auto stop3 = high_resolution_clock::now();
    auto duration3 = duration_cast<nanoseconds>(stop3 - start3);
    auto t3= duration3.count() * 1e-1;
    
    printf("fib1(%d): %d    Time: %.3f units.\n", n, f1, t1);
    printf("fib2(%d): %d    Time: %.3f units.\n", n, f2, t2);
    printf("fib3(%d): %d    Time: %.3f units.\n", n, f3, t3);

    return 0;
}


/* 
INPUT-1: 40

OUTPUT-1: 

fib1(40): 102334155    Time: 68100900.000 units.
fib2(40): 102334155    Time: 0.000 units.
fib3(40): 102334155    Time: 0.000 units.


INPUT-2: 9999

OUTPUT-2:

fib2(9999): 890489442    Time: 99700.000 units.
fib3(9999): 890489442    Time: 0.000 units.

// Here I have excluded fib1(9999) because it may take years.

*/


/*

CONCLUSION:

    fib1 is slowest and can work upto 40 within a second.
    fib2 is efficient if we take multiple test cases.
    fib3 is the fastest and most space effiecient.

*/