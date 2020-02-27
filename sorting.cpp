#include<iostream>
#include<chrono>
using namespace std;

void BubbleSort(int arrays[], int arraysize)
{
    int f, temp;
    for (int x=0;x<(arraysize-1);x++)
    {
        f=0;
        for (int y=0;y<(arraysize-x-1);y++)
        {
            if (arrays[y]>=arrays[y+1])
            {
                temp = arrays [y];
                arrays[y]=arrays[y+1];
                arrays[y+1]=temp;
                f=1;
            }
        }
        if (f==0)
        {
            break;
        }
    }
}

void output(int printarray[],int arraysize)
{
    for(int j=0;j<=arraysize-1;j++)
	{
			cout<<printarray[j]<<"\t";
	}

}

int main()
{
    cout<<"This is Bubble Sort"<<endl;
    int arraysize;
    int n;

    cout<<"Enter size of array"<<endl;
    cin>>arraysize;
    n=arraysize;
    int unsorted_array[arraysize];
    for (int i=0;i<arraysize;i++)
    {
        unsorted_array[i] = n--;
    }
    cout<<endl;
    cout<<"The List of Unsorted Array is: \n";
	output(unsorted_array,arraysize);
	cout<<endl;
	cout<<endl;
    chrono::steady_clock::time_point start = chrono::steady_clock::now();
	BubbleSort(unsorted_array,arraysize);
	chrono::steady_clock::time_point stop = chrono::steady_clock::now();
	cout<<"Sorted Array is : "<<endl;
	cout<<endl;
	output(unsorted_array,arraysize);
	cout<<endl;
	cout<<endl;
	cout<<"Time For The Loop  : " << chrono::duration_cast<chrono::microseconds>(stop - start).count()
              << "us.\n";
	cout<<endl;

	return 0;
}