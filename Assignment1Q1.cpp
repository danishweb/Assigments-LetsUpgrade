#include <iostream>
using namespace std;
int main() {
    int a = 1;
    int b = 1;

    while (b <= n)
    {
        a=a+1;
        b=b+a;
        cout<<"Hello";

    }
    // According to me the time complexity of given loop will be O(√n)
    // The loop will execute till the condition don't get falsed. So, 
    /* 
        a           b
    ------------------------
        1           1
        2           1+2
        3           1+2+3  
        4           1+2+3+3
        .           .
        .           .
        .           .
        m           m

        So, the consition here is m(m+1)/2
        That is when b<=n i.e m(m+1)/2<=n
        That is when b>=n i.e m(m+1)/2>=n
        i.e m^2 >= n
        i.e m >= √n


        Hence time complexity of given loop will be O(√n) 
    */
}