#include <bits/stdc++.h>

using namespace std;

int main()
{
    int obstacles;
    float starting_lat;
    float ending_lat;
    float starting_long;
    float ending_long;
    float obs_latitude;
    float obs_longitude;
    float latitude = 0, longitude = 0;

#ifndef ONLINE_JUDGE
    freopen("small_input.txt", "r", stdin);
    freopen("small_output.txt", "w", stdout);
#endif
    cin >> obstacles;
    cin >> starting_long >> starting_lat;
    cin >> ending_long >> ending_lat;

    for (int i = 0; i < obstacles; i++)
    {
        cin >> obs_longitude >> obs_latitude;
        if (longitude == obs_longitude && latitude == obs_latitude)
        {
            while(obs_latitude == latitude)
            {
                cout << "*";
                longitude += 0.0840;
            }
        }
        else if ((latitude == starting_lat && longitude == starting_long) || (latitude == ending_lat && longitude == ending_long))
        {
            cout << "1";
        }
        else if (latitude > starting_lat && latitude < ending_lat)
        {
            cout << "0";
        }
        else{
            cout << "_";
        }
        
        int k = 1;
        
        if (k % 2 == 0)
        {
            latitude += 0.016;
            k++;
        }
        else
        {
            latitude += 0.015;
            k++;
        }
        longitude += 0.0840;
    }
}