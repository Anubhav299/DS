#include<iostream>
using namespace std;
#include<stack>
#include<string.h>

/////////////////////////// TO EVALUATE POSTFIX EXPRESSSION /////////////////

bool oper(char c)
{
    if((c == '+') || (c == '-')|| (c == '*')|| (c=='/')||(c=='^'))
    {
        return true;
    }
    return false;
}

int cal(int y,int c1,int c2)
{
    if(y==42)
    {
        return c2*c1;
    }
    else if(y==43)
    {
        return c2+c1;
    }
    else if(y==47)
    {
        return c2/c1;
    }
    else if(y == 45)
    {
        return c2-c1;
    }
    else
    {
        return c2^c1;
    }
}


int postfix(stack <int> s, string post)
{
    int n =post.length();
    for(int i = 0;i<n;i++)
    {
        if((int(post[i])>=48) && (int(post[i])<=57 ))
        {
            int y = (int(post[i])-48);
            s.push(y);
        }
        else if(oper(post[i]))
        {
            int y = int(post[i]);
            if(s.size()>=2)
            {
                int c1,c2;
                c1 = s.top();
                s.pop();
                c2 = s.top();
                s.pop();
                int r = cal(y,c1,c2);
                s.push(r);
            }
        }
    }
    return s.top();
}



int main()
{  
    string post;
    cout<<"Enter the Postfix Expression "<<endl;
    cin>>post;
    stack <int> s;
    int res = postfix(s, post);
    cout<<"Answer is "<<res<<endl;
    return 0;
}
