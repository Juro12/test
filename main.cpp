#include <iostream>

using namespace std;

int NWD(int a, int b)
{
	int p;

  	while(b!=0)
	{
    	p = b;
    	b = a%b;
    	a = p;
  	}
    return a;
}

int main()
{
    int n;
    cin >> n;
    int tab[n];
    int A,B;

    for(int i = 0; i < n; i++){
        cin >> A >> B;
        tab[i] = NWD(A,B);
    }

    for(int i = 0; i < n; i++){
        cout << tab[i] << endl;
    }

    return 0;
}

//KOMENTARZ TEST