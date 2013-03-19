#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;

class emp
                {
                    char name[25],gender,fnam[25];
                    int eno;
                    float basic;

                    public:

                    void input()
                    {
                        cout<<"\nName:";
                        gets(name);

                        cout<<"Gender :";
                        cin>>gender;

                       cout<<"Father's name :";
                       cin>>fnam;

                        cout<<"Enter the employee number assigned :";
                        cin>>eno;

                        cout<<"Basic Pay :";
                        cin>>basic;

                   }

                    void output()
                    {
                        cout<<"Name :";
                        puts(name);

                        cout<<"Gender :";
                        cout<<gender;

                        cout<<"\nFather's name :";
                        puts(fnam);

                        cout<<"Employee number :";
                        cout<<eno;

                        cout<<"\nBasic Pay :";
                        cout<<basic<<endl<<endl;

                   }

                };

        int main()
        {
            emp e;
            cout<<"\nEnter details of the employee\n\n";
            e.input();

            cout << "\x1b[2J\x1b[1;1H" << flush;

            cout<<"\nDetails entered are \n\n";
            e.output();

            return 0;

        }



