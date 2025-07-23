#include<iostream>
using namespace std;

int main()
{
    int num1 , num2,op,answer;
    char checker;
    bool permission=true,flag=true;

    while (permission)
    {
        cout<<"Enter operands ";
        if (flag)
        {
            cin>>num1>>num2;
        }
        else
        {
            cin>>num2;
        }
        
        cout<<endl<<"Please enter the no."<<endl<<"For + press 1"<<endl<<"For - press 2"<<endl<<"For * press 3"<<endl<<"For / press 4"<<endl<<"For % press 5"<<endl;
        cin>>op;

        switch (op)
        {
            case (1):
            answer=num1+num2;
            cout<<num1<<" + "<<num2<<" is "<<answer<<endl;
            num1=answer;
            break;

            case (2):
            answer=num1-num2;
            cout<<num1<<" - "<<num2<<" is "<<answer<<endl;
            num1=answer;
            break;

            case (3):
            answer=num1*num2;
            cout<<num1<<" * "<<num2<<" is "<<answer<<endl;
            num1=answer;
            break;

            case (4):
            if (num2!=0)
            {
                answer=num1/num2;
                cout<<num1<<" / "<<num2<<" is "<<answer<<endl;
                num1=answer;
            }
            else
            cout<<"❌You can't perform this operation with Denominator 0";
            num1=0;
            break;

            case (5):
            if (num2!=0)
            {
                answer=num1%num2;
                cout<<num1<<" % "<<num2<<" is "<<answer<<endl;
                num1=answer;
            }
            else
            cout<<"❌You can't perform this operation with Denominator 0";
            num1=0;
            break;
        
            default:
                cout<<"Please enter the valid data";
        }


        cout<<endl<<"Do you want to continue ('Y'/'N')"<<endl;
        cin>>checker;
        checker = tolower(checker);
        if(checker!='y')
        {
            permission=false;
            cout<<"See you next time 😊";
            break;
        }

        cout<<endl<<"Do you want to perform operation on your last result ('Y'/'N') "<<endl;
        cin>>checker;
        checker = tolower(checker);
        if(checker =='y')
        {
            flag=false;
        }
        else
        {
            flag = true;
        }

    }

}