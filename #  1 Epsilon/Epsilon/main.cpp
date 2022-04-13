#define MAX1 127
#define MAX2 263

#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <iterator>

using namespace std;

int main() {
    
    int i;
    
    float e1 = 1;
    for (i = 1; i < MAX1; i++)
    {
        e1 = e1 / 2.;
        if ((1.f + e1 != 1.f) & (1.f + e1 / 2 == 1.f)) break;
    }
    cout << scientific << "for float epsilon=" << e1 << "=2^" << -i << endl;

    map<string, float> m1{ {"1", 1.f}, {"1 + e / 2", 1.f + e1 / 2}, {"1 + e", 1.f + e1}, {"1 + e + e / 2", 1.f + e1 + e1 / 2} };
    map<string, float>::iterator it1 = m1.begin();
    cout << it1->first;
    it1++;
    while (it1 != m1.end())
    {
        cout << " <= " << it1->first;
        it1++;
    }
    cout << endl << endl;

    /*if ((1.f + e1) < (1.f + e1 + e1 / 2)) cout << "1 + e < 1 + e + e / 2" << endl;
    else cout << "1 + e >= 1 + e + e / 2" << endl << endl;*/
    
    double e2 = 1;
    for (i = 1; i < MAX2; i++)
    {
        e2 = e2 / 2.;
        if ((1. + e2 != 1.) & (1. + e2 / 2 == 1.))  break;
    }
    cout << scientific << "for double epsilon=" << e2 << "=2^" << -i << endl;

    map<string, double> m2{ {"1", 1.}, {"1 + e / 2", 1. + e2 / 2}, {"1 + e", 1. + e2}, {"1 + e + e / 2", 1. + e2 + e2 / 2} };
    map<string, double>::iterator it2 = m2.begin();
    cout << it2->first;
    it2++;
    while (it2 != m2.end())
    {
        cout << " <= " << it2->first;
        it2++;
    }
    cout << endl << endl;

    /*if ((1. + e2) < (1. + e2 + e2 / 2)) cout << "1 + e < 1 + e + e / 2" << endl;
    else cout << "1 + e >= 1 + e + e / 2" << endl << endl;*/
}