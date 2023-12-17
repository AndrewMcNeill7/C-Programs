#include <iostream>
#include <ctime>
using namespace std;
int getRand(int min, int max);

int main(int argc, char** argv) {
    int min, max;

    cout << "Enter the min and max of the random number: \n";
    cin >> min >> max;
	
    srand(time(0)); //explain...


    cout << "Generating 10 random numbers" << endl;
    for (int i = 0; i < 10; i++) {
        cout << getRand(min,max) << " ";
    }

    return 0;
}

int getRand(int min, int max)
{
	int random;
    random = (rand() % (max - min + 1) + min);
	
	return (random);
}
