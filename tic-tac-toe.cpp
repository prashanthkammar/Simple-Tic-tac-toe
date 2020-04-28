#include<iostream>
using namespace std;
char m[3][3] = {'1','2','3','4','5','6','7','8','9'};
char player = 'X';

void table()
    {   
        system("cls");
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout<< m[i][j] <<" ";
            }
            cout<< endl;
        }
    }
void read()
    {
        char in;
        cout<< "Press the number " <<endl;
        cin>>in;
        switch (in)
        {
        case '1': m[0][0] = player;
                    break;
        
        case '2': m[0][1] = player;
                    break;

        case '3': m[0][2] = player;
                    break;

        case '4': m[1][0] = player;
                    break;

        case '5': m[1][1] = player;
                    break;

        case '6': m[1][2] = player;
                    break;

        case '7': m[2][0] = player;
                    break;

        case '8': m[2][1] = player;
                    break;

        case '9': m[2][2] = player;
                    break;
        
        default: cout<< "Invalid input" <<endl;
                break;
        }
    }

void switchplayer()
    {
        if(player  ==  'X')
            player  =  'O';

        else
            player  =  'X';
    }

char result()
{   
    // for player X
    if (m[0][0]  ==  'X' && m[0][1]  ==  'X' && m[0][2]  ==  'X')
        return 'X';

    if (m[1][0]  ==  'X' && m[1][1]  ==  'X' && m[1][2]  ==  'X')
        return 'X';

    if (m[2][0]  ==  'X' && m[2][1]  ==  'X' && m[2][2]  ==  'X')
        return 'X'; 

    if (m[0][0]  ==  'X' && m[1][1]  ==  'X' && m[2][2]  ==  'X')
        return 'X';
    
    if (m[2][0]  ==  'X' && m[1][1]  ==  'X' && m[1][2]  ==  'X')
        return 'X';

    //for player O

    if (m[0][0]  ==  'O' && m[0][1]  ==  'O' && m[0][2]  ==  'O')
        return 'O';

    if (m[1][0]  ==  'O' && m[1][1]  ==  'O' && m[1][2]  ==  'O')
        return 'O';

    if (m[2][0]  ==  'O' && m[2][1]  ==  'O' && m[2][2]  ==  'O')
        return 'O'; 

    if (m[0][0]  ==  'O' && m[1][1]  ==  'O' && m[2][2]  ==  'O')
        return 'O';
    
    if (m[2][0]  ==  'O' && m[1][1]  ==  'O' && m[1][2]  ==  'O')
        return 'O';

    // if draw
    return 'D';


}

int main()
{   
    int count = 0;
    system("cls");
    table();
    while(1)
    { 
        count++;
        read(); 
        table();   
        if (result() == 'X')
        {
            cout<< "Player X is the  winner!"<<endl;
            break;
        }
        else if (result() == 'O')
        {
            cout<< "Player O is the winner !"<<endl;
            break;
        }
        else if (result() == 'D' && count == 9)
        {
            cout<< " Tied! "<<endl;
        }
        switchplayer();
        
        
    }

}