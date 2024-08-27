#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int n, max, num, c;
    cout << "Enter the number of random numbers you wanted: ";
    cin >> n;
    cout << "Enter the maximum value of the random number: ";
    cin >> max;
    cout << n << " random numbers from 0 to " << max << " are:" << endl;
    srand(time(0));
    for(c = 1; c <= n; c++){
        num = rand() % (max + 1);
        cout << num << endl;
    }
    return 0;
}
