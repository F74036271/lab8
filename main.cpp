#include <iostream>
#include <cstdlib>
#include <ctime>
#include <new>
#include "genMino.h"
using namespace std;
Mino * mino_ptr[50];
int j=0;
void new_hand()
{
	cout<<"new_hand():delete mino_ptr["<<j<<", "<<j+1<<"]"<<endl;
	delete [] mino_ptr[j++];
	delete [] mino_ptr[j++];
}
int main()
{
	set_new_handler(new_hand);
	
	srandom(time(NULL));
	for(int i=0;i<10;i++)
	{
		cout<<"for loop: new mino_ptr["<<i<<"]"<<endl;
		mino_ptr[i]=genMino();
	}
	return 0;
}
