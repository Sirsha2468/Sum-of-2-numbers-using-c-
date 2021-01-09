
#include<iostraem>
using namespace std;

int main()
{

    int n;
    
    cin  >> n;
    cout  << n;

    int sumofnumbers = 0;
    int sumofsqofnumbers = 0;

    int i = 1;
    
    while(i <=n)
    {
        int x;
        cin>>x;
        sumofnumbers = sumofnumbers + x;
        sumofsqofnumbers = sumofsqofnumbers + (x*x);

        i =i+1;

    }

        cout<<(sumofnumbers*sumofnumbers) - (sumofsqofnumbers) / 2;

        return 0;
}
