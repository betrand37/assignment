  #include <iostream>

using namespace std;

int main()
{
     cout<< "ENTER YOUR EXAM SCORE TO CHECK YOUR GRADE " << endl;

    double a;

    cout << "please enter your exam mark " << endl;

    cin >> a;

    if(	(a>79) && (a<101) )
    {
    cout << "your grade is A " << endl;
    }
    else if( (a>74) && (a<80) )
    {
    cout << "your grade is B+" <<  endl;
    }
    else if(  (a>69) && (a<75) )
    {
    cout << "your grade is B" << endl;
    }
     else if(  (a>65) && (a<70) )
    {
    cout << "your grade is C+" << endl;
    }
     else if(  (a>59) && (a<65) )
    {
    cout << "your grade is C" << endl;
    }
     else if(  (a>55) && (a<60) )
    {
    cout << "your grade is D+" << endl;
    }
     else if(  (a>49) && (a<55) )
    {
    cout << "your grade is D" << endl;
    }
     else if(  (a>40) && (a<50) )
    {
    cout << "your grade is E" << endl;
    }
     else if(  (a>-1) && (a<40) )
    {
    cout << "your grade is F" << endl;
    }
    return 0;

}
