#include <iostream>

using namespace std;


// function declaration for addition
 void addition() {

 cout<<"Enter The Dimension for Matrix: ";
 int rowOne,colOne,rowTwo,colTwo,i,j;
 int matOne[10][10], matTwo[10][10], matResult[10][10];

 cout<<"Enter The Dimension of row and Column for the first Matrix: ";
cin >>rowOne>>colOne;
 cout<<"Enter The Dimension of row and Column for the Second Matrix: ";
cin >>rowTwo>>colTwo;

if ( rowOne==rowTwo && colOne==colTwo)
{

    cout<<"Enter The" <<rowOne<<"*"<<colOne<<" Matrix Elements";
    for(i=0; i<rowOne; i++)
    {
        for(j=0; j<colOne; j++)
            cin>>matOne[i][j];
    }
     cout<<"Enter The" <<rowTwo<<"*"<<colTwo<<" Matrix Elements";
    for(i=0; i<rowTwo; i++)
    {
        for(j=0; j<colTwo; j++)
            cin>>matTwo[i][j];
    }
   for(i=0; i<rowOne; i++)
    {
        for(j=0; j<colOne; j++)
            matResult[i][j] = matOne[i][j] + matTwo[i][j];
    }
     cout<<"\nThe New Matrix (Addition Result) is:\n";
    for(i=0; i<rowOne; i++)
    {
        for(j=0; j<colOne; j++)
            cout<<matResult[i][j]<<"  ";
        cout<<endl;
    }
    cout<<endl;

}

}
// function declaration for Subtraction
void substraction() {
     
 cout<<"Enter The Dimension for Matrix: ";
 int rowOne,colOne,rowTwo,colTwo,i,j;
 int matOne[10][10], matTwo[10][10], matResult[10][10];

 cout<<"Enter The Dimension of row and Column for the first Matrix: ";
cin >>rowOne>>colOne;
 cout<<"Enter The Dimension of row and Column for the Second Matrix: ";
cin >>rowTwo>>colTwo;

if ( rowOne==rowTwo && colOne==colTwo)
{

    cout<<"Enter The" <<rowOne<<"*"<<colOne<<" Matrix Elements";
    for(i=0; i<rowOne; i++)
    {
        for(j=0; j<colOne; j++)
            cin>>matOne[i][j];
    }
     cout<<"Enter The" <<rowTwo<<"*"<<colTwo<<" Matrix Elements";
    for(i=0; i<rowTwo; i++)
    {
        for(j=0; j<colTwo; j++)
            cin>>matTwo[i][j];
    }
   for(i=0; i<rowOne; i++)
    {
        for(j=0; j<colOne; j++)
            matResult[i][j] = matOne[i][j] - matTwo[i][j];
    }
     cout<<"\nThe New Matrix (Subtraction Result) is:\n";
    for(i=0; i<rowOne; i++)
    {
        for(j=0; j<colOne; j++)
            cout<<matResult[i][j]<<"  ";
        cout<<endl;
    }
    cout<<endl;

}
}


void multiplication() {
     cout<<"Enter The Dimension for Matrix: ";
 int rowOne,colOne,rowTwo,colTwo,i,j;
 int matOne[10][10], matTwo[10][10], matResult[10][10];

 cout<<"Enter The Dimension of row and Column for the first Matrix: ";
cin >>rowOne>>colOne;
 cout<<"Enter The Dimension of row and Column for the Second Matrix: ";
cin >>rowTwo>>colTwo;



if ( rowOne==rowTwo && colOne==colTwo)
{

    cout<<"Enter The" <<rowOne<<"*"<<colOne<<" Matrix Elements";
    for(i=0; i<rowOne; i++)
    {
        for(j=0; j<colOne; j++)
            cin>>matOne[i][j];
    }
     cout<<"Enter The" <<rowTwo<<"*"<<colTwo<<" Matrix Elements";
    for(i=0; i<rowTwo; i++)
    {
        for(j=0; j<colTwo; j++)
            cin>>matTwo[i][j];
    }
  cout << "Multiplication of given two matrices is:\n";
 
    for (int i = 0; i<rowOne; i++) {
        for (int j = 0; j < colTwo; j++) {
            matResult[i][j] = 0;
 
            for (int k = 0; k < rowTwo; k++) {
                matResult[i][j] += matOne[i][j] * matTwo[j][i];
            }
 
            cout << matResult[i][j] << "\t";
        }
 
        cout << endl;


    
    }

    }
}

int main()
{
    int userInput;
  cout<<"Enter 1 for addition  2 for substraction 3 for Multiplication";

    cin>>userInput;

    if (userInput == 1) {

 addition();
}if (userInput == 2) {

substraction();
}
if (userInput == 3) {

multiplication();
}
   return 0;

}
