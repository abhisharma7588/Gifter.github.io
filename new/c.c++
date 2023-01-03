#include<iostream.h>
#include<conio.h>
vooid main()
{
    clrscr();
    int a[3][3], b[3][3], c[3][3], i, j, k;
    cout<<"Enter element of 1st Array";
    for (i=0, i<3, i++)
    {
        for(j=0, j<3, j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter element of 2nd Array";
    for(i=0, i<3, i++)
    {
        for(j=0, j<3, j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0, i<3, i++)
    {
        for(j=0, j<3, j++)
        {
            for(k=0, k<3, k++)
            {
            c[i][j]=0
            c[i][j]+=a[i][j]*b[i][j];
            }
        }
    }
    cout<<"Entered matrices multiplication is";
    cout<<"\n";
    for(i=0, i<3, i++)
    {
        for(j=0, j<3, j++)
        {
            cout<<c{i}[j];
            cout<<"\n";
        }
    }
    getch();

}
