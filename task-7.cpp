#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*DECLARE THE VARIABLES AND ARRAY SIZE*/
    int m, n, answerC, selectedRow, selectedColumn = 0;
    int answerB = 0;

    cout << "Please enter the row size: ";
    cin >> m;
    cout << endl;
    cout << "Please enter the column size: ";
    cin >> n;
    vector<vector<int>> myList(m, vector<int>(n));

    /*CREATE THE ITEMS*/
    for (int i = 0; i < m; i++)
    {   
        for (int j = 0; j < n; j++)
        {
            cout << "Please enter the value of row " << i << " column " << j << ": ";
            cin >> myList[i][j];
        }
    }


    /*LOOP TO SHOW THE 2D VECTOR AND SUM IT FOR ANSWER A AND B*/
    cout << "\na-Content of Array:\n";
    for (int i = 0; i < m; i++)
    {
        if (i == 0)
        {
            for (int z = 0; z < n; z++)
            {
                cout << "\tCOLUMN " << z;
            }
            cout << "\n\nROW " << i;
        }
        else {
            cout << "\nROW " << i;
        }
        for (int j = 0; j < n; j++)
        {
            cout << "\t\t" << myList[i][j];
            /*SUM ANSWER B*/
            answerB += myList[i][j];
        }
    }

    cout << "\n\nb-The sum of all elements in the array: " << answerB << endl;

    /*GET THE REQUESTED VALUE FROM THE VECTOR*/
    cout << "Please enter the row and column position of the value you want to see.\n";
    cout << "Selected row: ";
    cin >> selectedRow;
    cout << "\nSelected column: ";
    cin >> selectedColumn;
    answerC = myList[selectedRow][selectedColumn];
    cout << "\nc-Element [" << selectedRow << " , " << selectedColumn << "] : " << answerC;

    return 0;
}