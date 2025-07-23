#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num1 , num2,op,answer;
    char checker;
    bool permission=true,flag=true;

    while (permission)
    {
        
        if (flag)
        {
            cout<<endl<<"Please enter the no."<<endl<<"For + press 1"<<endl<<"For - press 2"<<endl<<"For * press 3"<<endl<<"For / press 4"<<endl<<"For % press 5"<<endl<<"For ^ press 6"<<endl<<"For √ on first operand press 7"<<endl<<"For ! on first operand press 8"<<endl;
            cin>>op;
            
            if(op>6)
            {
                cout<<"Enter operand ";
                cin>>num1;
            }
            else
            {
                cout<<"Enter operands ";
                cin>>num1>>num2;
            }
        }
        else
        {
            cout<<endl<<"Please enter the no."<<endl<<"For + press 1"<<endl<<"For - press 2"<<endl<<"For * press 3"<<endl<<"For / press 4"<<endl<<"For % press 5"<<endl<<"For ^ press 6"<<endl<<"For √ on first operand press 7"<<endl<<"For ! on first operand press 8"<<endl;
            cin>>op;
            cout<<"Enter operands ";
            if(op<6)
            {
                cout<<"Enter operand ";
                cin>>num2;
            }
        }


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

            case (6):
            answer=pow(num1,num2);
            cout<<num1<<" ^ "<<num2<<answer<<endl;
            num1=answer;
            break;

            case (7):
            answer=sqrt(num1);
            cout<<"√"<<num1<<" is "<<answer<<endl;
            num1=answer;
            break;

            case (8):
            int temp = 1;
            if(num1==0|| num1==1)
            {
                answer=1;
            }
            else
            {
                for (int i = num1; i >=1; i--)
                {
                    temp=temp*i;
                }
                answer=temp;
            }
            cout<<"!"<<num1<<" is "<<answer<<endl;
            num1=answer;
            break;
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