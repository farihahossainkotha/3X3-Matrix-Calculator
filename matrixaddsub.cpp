#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],c[3][3],d[3][3];
    int choice;

 do {
        cout << "3X3 Matrix Operations:" << endl;
        cout << "1. Addition of two matrices" << endl;  
        cout << "2. Subtraction of two matrices" << endl;
        cout << "3. Multiplication of two matrices" << endl;
        cout << "4. Determinant of a matrix" << endl;
        cout << "5. Transpose of a matrix" << endl;
        cout << "6. Inverse of a matrix" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

    switch (choice) 
    {

    case 1:
    {
    cout<<"Enter elements of A matrix: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"a["<<i+1<<"]["<<j+1<<"] = ";
            cin>>a[i][j];
        }
    }

    cout<<"Enter elements of B matrix: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"b["<<i+1<<"]["<<j+1<<"] = ";
            cin>>b[i][j];
        }
    }

    //output of A matrix

    cout << "A matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    //output of B matrix

    cout << "B matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

   

    //output of addition of two matrices

    
    cout << "Addition of A and B:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    break;}

    case 2:
    {
    cout<<"Enter elements of A matrix: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"a["<<i+1<<"]["<<j+1<<"] = ";
            cin>>a[i][j];
        }
    }

    cout<<"Enter elements of B matrix: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"b["<<i+1<<"]["<<j+1<<"] = ";
            cin>>b[i][j];
        }
    }

    //output of A matrix

    cout << "A matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    //output of B matrix

    cout << "B matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    //output of subtraction of two matrices

    cout << "Subtraction of A and B:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            d[i][j] = a[i][j] - b[i][j];
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
    break;}

    case 3:
    {
    cout<<"Enter elements of A matrix: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"a["<<i+1<<"]["<<j+1<<"] = ";
            cin>>a[i][j];
        }
    }

    cout<<"Enter elements of B matrix: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"b["<<i+1<<"]["<<j+1<<"] = ";
            cin>>b[i][j];
        }
    }

    //output of A matrix

    cout << "A matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    //output of B matrix

    cout << "B matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    //multiplication of two matrices

        cout << "Multiplication of A and B:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            cout << sum << " ";
        }
        cout << endl;
    }
    break;}

    case 4:
    {
    cout<<"Enter elements of A matrix: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"a["<<i+1<<"]["<<j+1<<"] = ";
            cin>>a[i][j];
        }
    }

    //output of A matrix

    cout << "A matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    //determinant of 3x3 matrix
    int det = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1]) -
              a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]) +
              a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);

    cout << "Determinant of A: " << det << endl;
    break;}

    case 5:
    {
    cout<<"Enter elements of A matrix: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"a["<<i+1<<"]["<<j+1<<"] = ";
            cin>>a[i][j];
        }
    }

    //output of A matrix
    cout << "A matrix:" << endl;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    //transpose of a matrix 

    cout << "Transpose of A:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
    break;}

    case 6:
    {
    cout<<"Enter elements of A matrix: "<<endl;
    for(int i=0;i<3;i++)    
    {
        for(int j=0;j<3;j++)
        {
            cout<<"a["<<i+1<<"]["<<j+1<<"] = ";
            cin>>a[i][j];
        }
    }   

    //output of A matrix
    cout << "A matrix:" << endl;    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    //determinant of 3x3 matrix
    int det = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1]) -
              a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]) +
              a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);

    //inverse of a matrix

        if (det != 0)
        {
            cout << "Inverse of A:" << endl;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    double cofactor = ((a[(j + 1) % 3][(i + 1) % 3] * a[(j + 2) % 3][(i + 2) % 3]) -
                                    (a[(j + 1) % 3][(i + 2) % 3] * a[(j + 2) % 3][(i + 1) % 3]));
                    cout << cofactor / det << " ";
                }
                cout << endl;
            }
        }
        else
        {
            cout << "Matrix A is singular and does not have an inverse." << endl;
        }
        break;}
    case 0:
       { cout << "Exiting the program. Goodbye!" << endl;
        break;}
 default:
       
       { cout << "Invalid choice! Please try again." << endl;
    break;}
   }

 } while (choice != 0);

return 0;
}

