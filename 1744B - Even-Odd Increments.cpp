    #include <iostream>
    using namespace std;

    int main()
    {
        int eo, t, nod, nev, q, al, in, n;
        long long int sumod, sumev, sum;    
        cin >> t;

        for(int o = 0; o < t; o++)
        {
            cin>>al>>q;

            nev = 0; sumev = 0; sumod = 0; nod = 0;

            for(int s = 0; s < al; s++)
            {
                cin>>in;
                if(in % 2 == 0)
                {
                    nev += 1;
                    sumev += in;
                }
                else
                {
                    sumod += in;
                    nod += 1;
                }
            }

            
            for(int a = 0; a < q; a++)
            {
                cin>>eo>>n;

                if(eo == 0)
                {
                    sumev = sumev + (nev*n);
                    sum = sumod + sumev;

                    if(n % 2 == 1)
                    {
                        nev = 0;
                        nod = al;
                    }
                }

                if(eo == 1)
                {
                    sumod = sumod + (nod*n);
                    sum = sumod + sumev;

                    if(n % 2 == 1)
                    {
                        nev = al;
                        nod = 0;
                    }
                }

                cout<<sum<<"\n";
            }

        }
    }
