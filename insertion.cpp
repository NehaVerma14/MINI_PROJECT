#include<iostream>
#include<chrono>
using namespace std;

void insertion(int arrays[], int numbersize)
{
    int i,j,show;
    for(i=1;i<numbersize;i++)
    {
        show = arrays[i];
        j=i-1;

        while(j>=0 && arrays[j]>show)
        {
            arrays[j+1] = arrays[j];
            j=j-1;
        }
        arrays[j+1] = show;
    }
}

void output( int arr[],int sizes)
{
    for(int i=0;i<sizes;i++)
    {
        cout<<arr[i]<<"\t";

    }
}
int main()
{
    int arraysize;

    cout<<"The size of an array is: \n"<<endl;
    cin>>arraysize;

    int arrays[arraysize],n;
    n=arraysize;

    for(int i=0;i<arraysize;i++)
    {
        arrays[i]=n--;

    }

    cout<<"The unsorted array is: \n"<<endl;
    output(arrays,arraysize);
cout<<endl;
	chrono::steady_clock::time_point start = chrono::steady_clock::now();
	insertion(arrays,arraysize);
	chrono::steady_clock::time_point stop = chrono::steady_clock::now();

	cout<<endl;

    cout<<"The sorted array is: \n"<< endl;
    output(arrays,arraysize);

	cout<<endl;
	cout<<endl;
	cout<<"Time For The Loop  : " << chrono::duration_cast<chrono::microseconds>(stop - start).count()
              << "us.\n";
	cout<<endl;
}