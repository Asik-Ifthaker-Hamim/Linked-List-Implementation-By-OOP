//           * * Bismillahir Rahmanir Rahim  * *
// ************************@Author*******************************
/*                    Asik Ifthaker Hamim                       */
#include <bits/stdc++.h>
#include <fstream>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long int ulli;
typedef long long int lli;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef pair<ll,ll> pr;
#define pb push_back
#define sz(n) n.size()
#define vs(n) (int)n.size()
#define pp pop_back
#define sp(n) setprecision(n)
const int MOD = 1000000007;
#define ffor(a, b) for(int i = a; i <b; i++)
#define frev(b, a) for(int i = b; i >= a; i--)
#define PI (acos(-1.0))
#define torad(x) ((x)*((2*acos(0))/180.0))
#define todeg(x) ((x)*(180.0/(2*acos(0))))
#define fixAngle(x) ((x)>1?1:(x)<-1?-1:(x))
#define tan(a) tan(a)/(pi/180)
#define sin(a) sin(a)/(pi/180)
#define cos(a) cos(a)/(pi/180)
#define inverse_sin(a) asin(a)/(pi/180)
#define inverse_cos(a) acos(a)/(pi/180)
#define inverse_tan(a) atan(a)/(pi/180)
const int dr4[] = {0, 1, 0, -1};
const int dc4[] = {1, 0, -1, 0};
const int dr8[] = {0, 1, 1, 1, 0, -1, -1, -1};
const int dc8[] = {1, 1, 0, -1, -1, -1, 0, 1};
using namespace std;
double neg_infinity(-std::numeric_limits<double>::infinity());
template<typename t>
class Linked_List
{
    struct Node
    {
        t val;
        Node *link;
    };
    Node *head;
public:
    Linked_List()
    {
        head=NULL;
    }
    void Insert(t x)
    {
        Node *temp=new Node;
        temp->val=x;
        temp->link=NULL;
        if(head==NULL)
        {
            head=temp;
            return;
        }
        Node *p=head;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;

    }
    void InsertAtPos(int pos,t x)
    {
       Node *temp=new Node;
       temp->val=x;
       if(head==NULL && pos>1)
       {
           cout<<"Invalid"<<endl;
           return;
       }
       if(pos==1)
       {
           temp->link=head;
           head=temp;
           return;
       }
       Node *p=head;
       for(int i=2;i<pos;i++)
       {
           if(p->link==NULL)
           {
              return;
           }
           p=p->link;
       }
       temp->link=p->link;
       p->link=temp;

    }
    void DeleteByPos(int pos)
    {
        if(head==NULL)
        {
            cout<<"Invalid"<<endl;
            return;
        }
        if(pos==1)
        {
            Node *p=new Node;
            p->link=head->link;
            head=head->link;
            delete(p);
            return;
        }
        Node *p=head;
        for(int i=2;i<pos;i++)
        {
            p=p->link;
            if(p->link==NULL)
                return;
        }
        Node *x=new Node;
        x->link=p->link;
        delete(x);
        p->link=p->link->link;
    }
    void Print()
    {
        Node *temp=head;
        if(head==NULL)
            return;
        while(temp!=NULL)
        {
            cout<<temp->val<<endl;
            temp=temp->link;
        }
    }


};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //freopen("input","r",stdin);
    //freopen("output","w",stdout);
    Linked_List<int>l;
    l.Insert(1);
    l.Insert(2);
    l.Insert(3);
    l.InsertAtPos(3,4);
    l.DeleteByPos(1);
    l.DeleteByPos(3);
    l.Print();




}


