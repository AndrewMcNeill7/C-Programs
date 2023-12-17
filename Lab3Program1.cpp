//==========================================================
// pyramid.cpp
//==========================================================
#include <iostream>
using namespace std;

int main() {

	char pyramidicon;
	int pyramidlevels;
	
    printf("Enter One Character for the Blocks of Pyramids !\n");
	cin >> pyramidicon;

	
	printf("Enter The Number of Levels for the Pyramid !\n");
	cin >> pyramidlevels;

    for (int i=0; i <= pyramidlevels; i++)
	{
		printf("\n");
		
		for (int j=0; j < i ; j++)
		{
			printf("%c", pyramidicon);
		}
    }
    //printf("\n");
    //return 0;
}
